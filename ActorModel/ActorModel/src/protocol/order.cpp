//
//  order.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "order.h"
#include <cfloat>

bool operator == (order const& l, order const& r)
{
    return (l.square - r.square) < FLT_EPSILON;
}