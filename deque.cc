#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);

    dq.pop_front();
    dq.pop_back();
    // dq.erase(dq.begin(), dq.begin() + 2);
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << "Done" << endl;
}