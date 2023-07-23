/*In this program we will be using Two dimensional vector for matrix multiplication */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v1={{1,2},{3,4}};

    vector<vector<int>> v2={{5,6},{7,8}};

    vector<vector<int>> v3={{0,0},{0,0}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                v3[i][j]+=v1[i][k]*v2[k][j];
            }
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
