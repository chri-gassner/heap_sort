//
//  heap_sort.hpp
//  heap_sort
//
//  Created by Christoph Gassner on 10.10.22.
//

#ifndef heap_sort_hpp
#define heap_sort_hpp

#include <vector>
#include <iostream>
#include <iomanip>


class heap_sort {
public:
    // define my types
    typedef std::vector<int> cont_type;
    typedef size_t index_type;
    typedef cont_type::size_type size_type;
    
    //mehtod for heap sort
    static void sort(cont_type & v);
    
    //methods for printing
    static void print(cont_type const & v);
    
    static void print_as_tree(cont_type const & v);
private:
    //const global class variable for print as tree
    static size_t const SPACE = 10;
    
    //return the index of left, righ, parent of position in vec
    static index_type left(index_type const pos);
    static index_type right(index_type const pos);
    static index_type parent(index_type const pos);
    
    //builds heap
    static void build_heap(cont_type & v);
    
    //checks heap eigenschaften
    static void heapify(cont_type & v, index_type const size, index_type const pos);
    
    //private recursive funktion for print as tree from the left to the right
    static void print_as_tree_r(cont_type const & v, index_type const pos, size_t space);
    
};



#endif /* heap_sort_hpp */
