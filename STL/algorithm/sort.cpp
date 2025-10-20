#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,34,6,3,5,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    vector<int> vec = {1,4,235,523,3,535,6,23};

    sort(arr, arr+len);
    sort(vec.rbegin(), vec.rend());

    for(int x: vec) {
        cout<<x <<" ";
    }
    return 0;
}