//
//  client.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__client__
#define __ActorModel__client__

#include "base_actor.h"

class client : public base_actor
{
public:
    client(float money, float square, actor_ptr office_manager);
    void setOfficeManager(actor_ptr _office_manager);
protected:
    void init() override;
private:
    float m_money;
    float m_square;
    actor_ptr m_office_manager;
};

#endif /* defined(__ActorModel__client__) */
