#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v {5, 15, 6, 9, 4};

    int key = 10;
    vector<int>::iterator it;

    it = find (v.begin(), v.end(), key);


         if (it != v.end())
    {
        cout<<key<<" is Present in the vector"<<endl;
    }
    else
    {
        cout<<key<<" is Not-Present in the vector"<<endl;
    }

    return 0;
}
