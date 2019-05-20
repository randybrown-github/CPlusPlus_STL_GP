//
//  main.cpp
//  CPlusPlus_STL_GP
//
//
//  Created by Junjie Zhou on 2019/5/20.
//  Copyright © 2019 Junjie Zhou. All rights reserved.
//  Description:
//    Acknowledge of C++ STL 6 parts:
//    1.Containers
//    2.Allocators
//    3.Iterators
//    4.Algorithms
//    5.Functors
//    6.Adapters


#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
//    vector is container
//    allocator<int> is allocator
//
    int ia[6]={27,88,55,44,66,34};
    vector<int,allocator<int>> vi(ia,ia+6);

    
//    count_if is algorithm
//    vi.begin(),vi.end() are iterators
//    not1 is function adapter (negator)
//    bind2nd(, ) is funtion adapter (bind)
//    less<> is function object
    cout<<count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40)))
        <<endl;
    return 0;
    
}
