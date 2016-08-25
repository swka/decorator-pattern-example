//
//  main.cpp
//  decorator pattern example
//
//  Created by Soundlly on 2016. 8. 25..
//  Copyright © 2016년 Soundlly. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "decorator/decorator.h"

int main() {
    // 맥에어 13형 사야지
    Laptop *laptop = new MacAir13();
    
    // 옵션을 뭘 넣을까
    // 그래, 그래, 이게 좋겠다
    laptop = new Memory(laptop, 8);
    laptop = new SSD(laptop, 512);
    laptop = new CdDrive(laptop);
    
    cout<< laptop->getDescription().c_str() << " ::: Cost = " << laptop->cost() << "만원"<< endl;
    
    delete laptop;
    
    return 1;
}