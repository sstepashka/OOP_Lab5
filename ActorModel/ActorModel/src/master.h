//
//  master.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__master__
#define __ActorModel__master__

#include "base_actor.h"

class master : public base_actor
{
public:
    master(actor_ptr installer);
protected:
    void init() override;
private:
    actor_ptr m_installer;
};

#endif /* defined(__ActorModel__master__) */
