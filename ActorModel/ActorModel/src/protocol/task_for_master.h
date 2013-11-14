//
//  tast_for_master.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__tast_for_master__
#define __ActorModel__tast_for_master__

#include "cppa/cppa.hpp"

struct task_for_master {
    cppa::actor_ptr office_manager;
    cppa::actor_ptr client;
    float square;
};

bool operator == (task_for_master const& l, task_for_master const& r);

#endif /* defined(__ActorModel__tast_for_master__) */
