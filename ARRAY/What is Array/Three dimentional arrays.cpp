#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[2][3][2] ={{{2,3},{2,4},{3,6}},{{4,0},{3,1},{7,6}}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                cout<<"Element at x["<<i<<"]["<<j<<"]["<<k<<"] = "<<x[i][j][k]<<endl;
            }
        }
    }
    return 0;
}
