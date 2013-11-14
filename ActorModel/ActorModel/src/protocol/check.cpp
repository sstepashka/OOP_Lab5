//
//  check.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "check.h"
#include <cfloat>

bool operator == (check const& l, check const& r)
{
    return l.client == r.client && l.purchased == r.purchased && l.square - r.square < FLT_EPSILON;
}