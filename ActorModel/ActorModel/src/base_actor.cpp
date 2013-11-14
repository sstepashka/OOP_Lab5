//
//  base_actor.cpp
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#include "base_actor.h"

const actor_ostream& print(const char* actor_name)
{
    return aout << actor_name << " (id = " << self->id() << "): ";
}

base_actor::base_actor(string name) : m_name(move(name))
{

}

const actor_ostream& base_actor::print() const
{
    return ::print(m_name.c_str());
}
