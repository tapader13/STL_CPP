#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1(3, 8);
    vector<int> v2(v1);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.pop_back();
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    v2.clear();
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << "Done" << endl;
    // cout << endl;
    // cout << v.at(1);
    // cout << endl;
    // cout << v.back();
    // cout << endl;
    // cout << v.front();
    // cout << endl;
    // cout << v.empty();
    // cout << endl;
    // cout << v.size();
    // cout << endl;
    // cout << v.capacity();
    // cout << endl;
}