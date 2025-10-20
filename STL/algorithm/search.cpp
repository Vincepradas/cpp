#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,4,23,5,62,1,3,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    // auto it = find(arr, arr+len, 23);
    // auto it = upper_bound(arr, arr+len, 5);
    // auto it = min_element(arr, arr+len);
    // auto it = max_element(arr, arr+len);
    // int idx = distance(arr, it);

    // vector<int> v = {1, 2, 3, 4, 5};
    // int k = 2;
    // sort(arr, arr+len);  
    // rotate(v.begin(), v.begin()+k, v.end());
    // for(int x:v) 
    sort(arr, arr+len);
    bool x = binary_search(arr, arr+len,8);
    int y = count_if(arr, arr+len, [](int x){ return x%2==0;});
    int sum = accumulate(arr, arr+len, 0);
    int prod = accumulate(arr, arr+len,1, multiplies<int>()); 
    cout<<sum;
    return 0;
}