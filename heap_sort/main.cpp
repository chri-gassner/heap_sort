//
//  main.cpp
//  heap_sort
//
//  Created by Christoph Gassner on 10.10.22.
//

#include <iostream>
#include "test_heap_sort.hpp"

int main(int argc, const char * argv[]) {
    // uncoment to run test cases
    test_heap_sort::test1();
    test_heap_sort::test2();
    //test 3 is just here for consistence reasons, not meant for compiling see pdf
    //test_heap_sort::test3();
    test_heap_sort::test4();
    test_heap_sort::test5();
    
    return 0;
}
