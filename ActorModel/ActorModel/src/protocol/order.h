//
//  order.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__order__
#define __ActorModel__order__

#include <iostream>

struct order {
    float square;
};

bool operator == (order const& l, order const& r);

#endif /* defined(__ActorModel__order__) */
