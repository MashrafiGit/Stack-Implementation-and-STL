#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }

    int top()
    {
        if (!v.empty())
        {
            return v.back();
        }
        return -1;
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack st;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}