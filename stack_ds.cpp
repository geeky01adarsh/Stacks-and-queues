#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    stack<int> s;
    for(int i=0; i<5; i++)
    s.push(arr[i]);
    cout<<s.top()<<endl;
    
    cout<<s.empty()<<endl;
    for(int i=0; i<5; i++){
        int temp = s.top();
        s.pop();
        cout<<temp<<endl;
    }

    return 0;
}
