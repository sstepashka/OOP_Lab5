//
//  base_actor.h
//  ActorModel
//
//  Created by Dmitriy Kuragin on 11/14/13.
//  Copyright (c) 2013 Dmitriy Kuragin. All rights reserved.
//

#ifndef __ActorModel__base_actor__
#define __ActorModel__base_actor__

// C++ includes
#include <string>
#include <vector>
#include <iostream>

// C includes
#include <time.h>
#include <signal.h>
#include <stdlib.h>

#include "cppa/cppa.hpp"

using namespace std;
using namespace cppa;

class base_actor : public event_based_actor {
    
protected:
    
    base_actor(string name);
    const actor_ostream& print() const;
    
private:
    string m_name;
};

#endif /* defined(__ActorModel__base_actor__) */
