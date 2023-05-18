#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> st;
    st[1] = "md";
    st[2] = "minhaj";
    st[3] = "uddin";
    st[4] = "tapader";
    st.insert({5, "mursalin"});
    st.insert(make_pair(6, "hawlader"));
    st.erase(1);

    for (auto i : st)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto itr = st.find(3);
    for (auto i = itr; i != st.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}