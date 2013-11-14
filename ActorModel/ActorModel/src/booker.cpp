//
//  booker.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "booker.h"
#include "order_for_booker.h"
#include "check.h"

booker::booker(float price_for_value) : base_actor("booker"), m_price_for_value(price_for_value)
{

}

void booker::init()
{
    become(
           on_arg_match >> [=](order_for_booker _order_for_booker) {
               actor_ptr client = _order_for_booker.client;
               
               actor_ptr office_manager = self->last_sender();
               
               float sum = m_price_for_value * _order_for_booker.square;
               
               sync_send(client, atom("purchase"), sum).then (
                   on_arg_match >> [=](bool yesno){
                       send(office_manager, check{client, _order_for_booker.square, yesno});
                   }
               );
           }
    );
}
