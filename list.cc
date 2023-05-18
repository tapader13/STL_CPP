#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_front(1);
    ls.push_back(2);

    // ls.pop_front();
    // ls.pop_back();
    // ls.erase(ls.begin());
    // ls.erase(ls.end());
    for (int i : ls)
    {
        cout << i << " ";
    }
    cout << "Done" << endl;
}