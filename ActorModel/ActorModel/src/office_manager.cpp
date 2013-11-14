//
//  office_manager.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "office_manager.h"
#include "order.h"
#include "order_for_booker.h"
#include "check.h"
#include "task_for_master.h"

office_manager::office_manager(actor_ptr master, actor_ptr booker) :
                                            base_actor("office_manger"),
                                            m_master(master),
                                            m_booker(booker)
{

}

void office_manager::init()
{
    become(
           on_arg_match >> [=](order _order) {
               order_for_booker q;
               q.square = _order.square;
               q.client = self->last_sender();
               send(m_booker, q);
           },
           on_arg_match >> [=](check _check) {
               send(m_master, task_for_master{this, _check.client, _check.square});
           },
           on(atom("installed"), arg_match) >> [=](task_for_master _task_for_master) {
               send(_task_for_master.client, atom("installed"));
           }
    );
}