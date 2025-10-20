#include <bits/stdc++.h>
using namespace std;

int main() { 
    string str = "hello";
    int arr[] = {2,4,23,5,62,3,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+len);
    reverse(arr, arr+len);
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    for(int x: arr) 
        cout<<x<<" ";
    return 0;
}