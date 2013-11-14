//
//  installer.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "installer.h"
#include "task_for_master.h"

installer::installer() : base_actor("installer")
{

}

void installer::init()
{
    become(
           on_arg_match >> [=](task_for_master _task_for_master) {
               sleep(1); //installing
               send(_task_for_master.office_manager, atom("installed"), _task_for_master);
           }
    );
}