//
//  booker.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__booker__
#define __ActorModel__booker__

#include "base_actor.h"

class booker : public base_actor
{
public:
    booker(float price_for_value);
    
protected:
    void init() override;
    
private:
    float m_price_for_value;
};

#endif /* defined(__ActorModel__booker__) */
