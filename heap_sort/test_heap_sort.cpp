//
//  test_heap_sort.cpp
//  heap_sort
//
//  Created by Christoph Gassner on 23.10.22.
//

#include "test_heap_sort.hpp"

void test_heap_sort::test1() {
    //unsorted vektor to sort with heap sort
    heap_sort::cont_type v = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
    
    //prints unsorted field as Tree:
    std::cout << "Unsorted field + as Tree:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
    
    //makes field to heap, sorts heap, returns sortet field
    heap_sort::sort(v);
    
    //prints sorted field as Tree:
    std::cout << "Sorted field + as Tree:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
}

void test_heap_sort::test2() {
    //sorted vektor to sort with heap sort
    heap_sort::cont_type v = {1, 2, 3, 5, 7, 9, 13, 22, 24, 31};
    
    //prints unsorted field as Tree:
    std::cout << "sorted field + as Tree bevore sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
    
    //makes field to heap, sorts heap, returns sortet field
    heap_sort::sort(v);
    
    //prints sorted field as Tree:
    std::cout << "Sorted field + as Tree after sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
}

void test_heap_sort::test3() {
    //sorted vektor to sort with heap sort
    //std::vector<string> v = {"hall", "tschau", "wort", "idk", "apfel"};
    heap_sort::cont_type v = {1, 2, 3, 5, 7, 9, 13, 22, 24, 31};
    
    //prints unsorted field as Tree:
    std::cout << "sorted field + as Tree bevore sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
    
    //makes field to heap, sorts heap, returns sortet field
    heap_sort::sort(v);
    
    //prints sorted field as Tree:
    std::cout << "Sorted field + as Tree after sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
}

void test_heap_sort::test4() {

    heap_sort::cont_type v = {};
    
    //prints unsorted field as Tree:
    std::cout << "empty field + as Tree bevore sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
    
    //makes field to heap, sorts heap, returns sortet field
    heap_sort::sort(v);
    
    //prints sorted field as Tree:
    std::cout << "Sorted empty field + as Tree after sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
}

void test_heap_sort::test5() {

    heap_sort::cont_type v = {'c', 'd', 'a', 'z', 'b'};
    
    //prints char field as Tree:
    std::cout << "char field + as Tree bevore sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
    
    //makes field to heap, sorts heap, returns sortet field
    heap_sort::sort(v);
    
    //prints sorted char field as Tree:
    std::cout << "sorted char field + as Tree after sort:" << std::endl;
    heap_sort::print(v);
    std::cout << std::endl;
    heap_sort::print_as_tree(v);
    std::cout << std::endl;
}

