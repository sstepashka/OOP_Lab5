//
//  tast_for_master.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "task_for_master.h"
#include <cfloat>

bool operator == (task_for_master const& l, task_for_master const& r)
{
    return l.square - r.square < FLT_EPSILON && l.client == r.client;
}
