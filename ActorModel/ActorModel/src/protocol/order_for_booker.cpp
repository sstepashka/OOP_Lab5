//
//  order_for_booker.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "order_for_booker.h"
#include <cfloat>

bool operator == (order_for_booker const& l, order_for_booker const& r)
{
    return l.client == r.client && (l.square - r.square) < FLT_EPSILON;
}