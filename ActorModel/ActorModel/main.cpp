//
//  main.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/2/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include <string>
#include <iostream>

#include "order.h"
#include "order_for_booker.h"
#include "check.h"
#include "task_for_master.h"

#include "client.h"
#include "office_manager.h"
#include "booker.h"
#include "master.h"
#include "installer.h"

int main(int argc, char *argv[])
{
    announce<check>();
    announce<order>();
    announce<order_for_booker>();
    announce<task_for_master>();
    
    auto _installer = spawn<installer, detached>();
    auto _master = spawn<master, detached>(_installer);
    auto _booker = spawn<booker, detached>(6.f);
    auto _office_manager = spawn<office_manager, detached>(_master, _booker);
    auto _client = spawn<client, detached>(110.f, 5.f, _office_manager);
    
    _installer->link_to(_master);
    _master->link_to(_office_manager);
    _booker->link_to(_office_manager);
    _office_manager->link_to(_client);
    
    send(_client, atom("start"));
    
    await_all_others_done();
    shutdown();
    
    cout << "exit" << endl;
    return 0;
}


