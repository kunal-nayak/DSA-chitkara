// Circular queue and implementation of queue using circular array
#include <iostream>
#include<deque>
#include<bits/stdc++.h>

using namespace std;

int sz=3;
vector<int> q(3);
int f=-1,r=-1;

void enque(int x){
    if((r+1)%sz==f){
        cout<<"queue is full";
        return;
    }
    
    if(f==-1 && r==-1){
        f=0,r=0;
    }
    else{
        r=(r+1)%sz;
    }
    q[r]=x;
}

void deque(){
    if(f==-1 && r==-1) {
        cout<<"queue is empty";
        return;
    }
    if(f==r){
        f=r=-1;
    }
    f=(f+1)%sz;
}
int main()
{
    
    

    return 0;
}
