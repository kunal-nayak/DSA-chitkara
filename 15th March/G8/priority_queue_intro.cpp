#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// priortity_queue<dataType, container, comparator> pq;
//push, pop, top, size, empty

int main()
{
    //min priortity_queue
    priortity_queue<int,vector<int>,greater<int>> pq;
    
    pq.push(2);
    pq.push(5);
    pq.push(10);
    
    cout<<pq.top()<<endl;
    
    pq.pop();
    
    
    ///max priortity_queue
    priority_queue<int> pq;
    // top,pop
    pq.push(2);
    pq.push(5);
    pq.push(10);
    
    cout<<pq.top()<<endl;
    
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}





