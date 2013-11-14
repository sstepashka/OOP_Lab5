//
//  installer.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__installer__
#define __ActorModel__installer__

#include "base_actor.h"

class installer : public base_actor
{
public:
    installer();
protected:
    void init() override;
};

#endif /* defined(__ActorModel__installer__) */
