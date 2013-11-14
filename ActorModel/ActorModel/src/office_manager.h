//
//  office_manager.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__office_manager__
#define __ActorModel__office_manager__

#include "base_actor.h"

class office_manager : public base_actor
{
public:
    office_manager(actor_ptr master, actor_ptr booker);
    
protected:
    void init() override;
    
private:
    actor_ptr m_master;
    actor_ptr m_booker;
};

#endif /* defined(__ActorModel__office_manager__) */
