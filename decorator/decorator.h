//
//  decorator.h
//  decorator pattern example
//
//  Created by Soundlly on 2016. 8. 25..
//  Copyright © 2016년 Soundlly. All rights reserved.
//

#ifndef decorator_h
#define decorator_h

#include "../laptop/laptop.h"
#include <string>
using namespace std;

class Decorator:public Laptop {
public:
};

class Memory:public Decorator {
    Laptop *mLaptop;
    int mSize;
public:
    Memory(Laptop *laptop, int size) {
        mLaptop = laptop;
        mSize = size;
    }
    string getDescription() {
        string name = mLaptop->getDescription();
        if( mSize == 4 ) {
            name.append(", Memory upgrade: 4 GB");
        } else if( mSize == 8 ) {
            name.append(", Memory upgrade: 8 GB");
        } else {
            // nothing
        }
        return name;
    }
    int cost () {
        if( mSize == 4 ) {
            return 8+mLaptop->cost();
        } else if (mSize == 8 ) {
            return 16+mLaptop->cost();
        } else {
            return mLaptop->cost();
        }
    }
};

class SSD:public Decorator {
    Laptop *mLaptop;
    int mSize;
public:
    SSD(Laptop *laptop, int size) {
        mLaptop = laptop;
        mSize = size;
    }
    string getDescription() {
        string name = mLaptop->getDescription();
        if( mSize == 256 ) {
            name.append(", SSD upgrade: 4 GB");
        } else if( mSize == 512 ) {
            name.append(", SSD upgrade: 8 GB");
        } else {
            // nothing
        }
        return name;
    }
    int cost () {
        if( mSize == 256 ) {
            return 10+mLaptop->cost();
        } else if (mSize == 512 ) {
            return 16+mLaptop->cost();
        } else {
            return mLaptop->cost();
        }
    }
};

class CdDrive:public Decorator {
    Laptop *mLaptop;
public:
    CdDrive(Laptop *laptop) {
        mLaptop = laptop;
    }
    string getDescription() {
        string name = mLaptop->getDescription();
        name.append(", extra CD drive");
        
        return name;
    }
    int cost () {
        return 12+mLaptop->cost();
    }
};

#endif /* decorator_h */
