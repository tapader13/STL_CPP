#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    // set<int>::iterator it = st.begin();
    // it++;
    // st.erase(it);
    int m = st.size();
    for (auto i : st)
    {
        cout << i << endl;
    }
    set<int>::iterator its = st.find(2);
    for (auto itr = its; itr != st.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << st.count(0) << endl;
    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(4);
    // int n = maxi.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << maxi.top() << endl;
    //     maxi.pop();
    // }
}