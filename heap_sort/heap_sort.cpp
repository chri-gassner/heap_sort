//
//  heap_sort.cpp
//  heap_sort
//
//  Created by Christoph Gassner on 10.10.22.
//

#include "heap_sort.hpp"

//sort method
void heap_sort::sort(cont_type & v) {
    //make heap of vec
    build_heap(v);
    
    //sorts
    for (int i = (int) v.size()-1; i > 0; --i) {
        std::swap(v[0], v[i]);
        heapify(v, i, 0);
    }
    
}

void heap_sort::build_heap(cont_type & v) {
    //checks every element and makes heap
    for (int i = (int) v.size()/2-1; i >= 0; --i) {
        heapify(v, v.size(), i);
    }
}

//checks heap patterns
void heap_sort::heapify(cont_type & v, index_type const size, index_type const pos) {
    index_type const l = left(pos);
    index_type m = pos;
    index_type r = right(pos);
    
    if ((l < size) && (v[l] > v[pos])) {
        m = l;
    }
    
    if ((r < size) && (v[r] > v[m])) {
        m = r;
    }
    
    if (m > pos) {
        //swap
        std::swap(v[pos], v[m]);
        heapify(v, size, m);
    }
    
}

//returns index of ledt child
heap_sort::index_type heap_sort::left(heap_sort::index_type const pos) {
    return 2*pos+1;
}

//returns index of right child
heap_sort::index_type heap_sort::right(heap_sort::index_type const pos) {
    return left(pos)+1;
}

//returns index of left child
heap_sort::index_type heap_sort::parent(heap_sort::index_type const pos) {
    return (pos-1)/2;
}

//prints vector
void heap_sort::print(heap_sort::cont_type const & v) {
    std::cout << "< ";
    
    for (int i = 0; i < v.size(); ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        
        std::cout << v[i];
    }
    std::cout << " >" << std::endl;
    
}

//recursive funktion for printing trees
void heap_sort::print_as_tree_r(cont_type const & v, index_type const pos, size_t space) {
    if (pos >= v.size()) {
        return;
    }
    
    space += heap_sort::SPACE;
    
    print_as_tree_r(v, heap_sort::right(pos), space);
    
    for (int j = heap_sort::SPACE; j < space; ++j) {
        std::cout << ' ';
    }
    
    std::cout << v[pos] << std::endl;
    
    print_as_tree_r(v, heap_sort::left(pos), space);
    
}

//funktion calls recursive function
void heap_sort::print_as_tree(cont_type const & v) {
    print_as_tree_r(v, 0, 0);
}
