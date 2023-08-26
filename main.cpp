//
//  main.cpp
//  Test
//
//  Created by Jered McFerron on 1/12/16.
//  Copyright © 2016 Jered McFerron. All rights reserved.
//

#include <iostream>
#include <signal.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    asm("movq $3735928559, %r8");

    abort();
    
    printf( "Execution Done" );
    
    return 0;
}
