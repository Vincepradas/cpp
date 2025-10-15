#include <bits/stdc++.h>
using namespace std;

int sumOfDigs(int n)
{
    if (n == 0)
        return 0;
    return 1 + (n - 1) % 9;
}

vector<int> oddNumIR(int a, int b)
{
    vector<int> nv;
    if (a <= 1 || b >= 1e5)
        return nv;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            nv.push_back(i);
    }
    return nv;
}

string SRC(string &s)
{
    int left = 0;
    int right = s.size() - 1;
    while (left < right)
    {
        if (isalpha(s[left]))
            left++;
        else if (isalpha(s[right]))
            right--;
        else
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    return s;
}

vector<int> minMax(vector<int> arr)
{
    vector<int> a;
    int mn, mx;
    for (int i = 0; i < arr.size(); i++)
    {
        mn = min(arr[0], arr[i]);
        mx = max(arr[0], arr[i]);
    }
    a.push_back(mn);
    a.push_back(mx);
    return a;
}

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    string tmp = s;
    while (l < r)
    {
        swap(tmp[l], tmp[r]);
        l++;
        r--;
    }
    if (tmp == s)
        return 1;
    return 0;
}

int kthLE(vector<int> arr,int k) {
    sort(arr.begin(), arr.end());
    return arr.at(arr.size()-k);
}

unordered_map<char,int> freqCounter(string s) {
    unordered_map<char, int> freq;

    for(char x: s) {
        freq[x]++;
    }
    return freq;
}

vector<int> customSort(vector<int> n) {
    vector<int> oddArr, mainArr;
    for(int i = 0; i<n.size(); i++){
        if(n[i] % 2 != 0) oddArr.push_back(n[i]);
        else mainArr.push_back(n[i]);
    }   

    sort(mainArr.begin(), mainArr.end());
    sort(oddArr.begin(), oddArr.end(), greater<int>());
    for(int i = 0; i<mainArr.size(); i++)
        oddArr.push_back(mainArr[i]);
    return oddArr;
}

int main() {
    vector<int> n = {4,1,7,2,5,6};
    vector<int> x = customSort(n);

    for(int y:x)
        cout<<y<<endl;
}