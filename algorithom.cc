#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    int a = 1;
    int b = 2;
    int maxi = max(a, b);
    int mini = min(a, b);
    cout << maxi << " " << mini << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    // cout << "Finding-> " << binary_search(v.begin(), v.end(), 2) << endl;
    // reverse(v.begin(), v.end());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // rotate(v.begin(), v.begin() + 2, v.end());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
}