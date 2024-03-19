#include <iostream>

int main()
{
    // NEXT GREATER ELEMENT ON THE LEFT
    
    // Input:  [1, 6, 4, 10, 2, 5]
    // Output: [-1, -1, 6, -1, 10, 10]
    

    return 0;
}

vector<int> nextGreaterLeft(vector<int>arr){
    int n=arr.size();
    vector<int> ngl(n,-1);
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()<arr[i]) s.pop();
        if(!s.empty()) ngl[i]=s.top();
        s.push(arr[i]);
    }
    
    return ngl;
}





