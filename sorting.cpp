#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr, int n) {
    bool swapped;
    for(int i = 0; i<n-1; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void selection(vector<int> &arr, int n) {
    for(int i = 0; i<n-1; i++) {
        int min_idx = i;

        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void print(vector<int> a, int n) {
    for(int &x: a) {
        cout<< x << " ";
    }
}

int main() {
    //normal array
    vector<int> arr = {5,4,3,6,7,1,9,11,10};
    int n = arr.size();
    
    //sorts: bubble, selection, insertion, merge, quick, and heap
    //print(arr, n);

    //gen purpose
    // sort(arr.begin(), arr.end());
    // print(arr, n);
    //bubble
    // bubble(arr, n);
    // print(arr, n);

    //selection
    // selection(arr, n);
    // print(arr, n);
}