//
//  order_for_booker.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__order_for_booker__
#define __ActorModel__order_for_booker__

#include "cppa/cppa.hpp"

struct order_for_booker {
    cppa::actor_ptr client;
    float square;
};

bool operator == (order_for_booker const& l, order_for_booker const& r);

#endif /* defined(__ActorModel__order_for_booker__) */
