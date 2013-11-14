//
//  check.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__check__
#define __ActorModel__check__

#include "cppa/cppa.hpp"

struct check
{
    cppa::actor_ptr client;
    float square;
    bool purchased;
};

bool operator == (check const& l, check const& r);


#endif /* defined(__ActorModel__check__) */
