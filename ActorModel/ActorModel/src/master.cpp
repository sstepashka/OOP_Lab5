//
//  master.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "master.h"
#include "task_for_master.h"

master::master(actor_ptr installer) :
                        base_actor("master"),
                        m_installer(installer)
{

}

void master::init()
{
    become(
           on_arg_match >> [=](task_for_master _task_for_master) {
               sleep(1.f); // making
               
               send(m_installer, _task_for_master);
           }
    );
}
