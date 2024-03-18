// Deque

#include <deque>
#include <iostream>
 
using namespace std;


int main()
{
    deque<int> dq;
    
    dq.push_front(1);
    dq.push_front(5);
    dq.push_front(8);
    dq.push_back(10);
    
    cout<<dq.front();
    cout<<dq.back();
    
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
    
    
    // dq.pop()

    return 0;
}
