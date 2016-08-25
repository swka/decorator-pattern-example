//
//  laptop.h
//  decorator pattern example
//
//  Created by Soundlly on 2016. 8. 25..
//  Copyright © 2016년 Soundlly. All rights reserved.
//

#ifndef laptop_h
#define laptop_h

#include <string>
using namespace std;

// Abstract
class Laptop {
public:
    virtual string getDescription() { return "\0"; }
    virtual int cost() {
        return 0;
    }
};

class MacAir13: public Laptop {
public:
    int cost() {
        return 144;
    }
};

class MacAir15: public Laptop {
public:
    int cost() {
        return 172;
    }
};

#endif /* laptop_h */
