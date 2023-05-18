#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 3> arr = {1, 2, 3};
    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << arr.at(1);
    cout << endl;
    cout << arr.back();
    cout << endl;
    cout << arr.front();
    cout << endl;
    cout << arr.empty();
    cout << endl;
    cout << arr.size();
}