#include <bits/stdc++.h>
using namespace std;


vector<int> test() {
    vector<int> x = {1,2,3,4,5};
    return x;
}

int *getP(vector<int> &arr,int idx) {
    return &arr[idx];
}

vector<string> *getSP(vector<string> &s, int idx) {
    return &(&s)[idx];
}

int main() {
    vector<string> a = {"hello", "world"};
    
    vector<string> *p = getSP(a, 0);
    cout<<(*p)[0];
}