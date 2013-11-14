//
//  client.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "client.h"
#include "order.h"

client::client(float money, float square, actor_ptr office_manager):
                                base_actor("client"),
                                m_money(money),
                                m_square(square),
                                m_office_manager(office_manager)
{
    
}

void client::init()
{
    //receive
    become (
            on(atom("start"), arg_match) >> [=]() {
                send(m_office_manager, order{m_square});
            },
            
            on(atom("purchase"), arg_match) >> [=] (float sum) -> bool {
                if (m_money - sum > 0.f) {
                    m_money -= sum;
                    return true;
                } else {
                    return false;
                }
            },
            
            on(atom("installed"), arg_match) >> [=] () {
                send_exit(self, exit_reason::user_shutdown);
            }
    );
}