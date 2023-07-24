#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename T>

T sortfun(T vec)
{
    sort(vec.begin(),vec.end());
    return vec;
}


int main()
{
    vector <int> v{5,2,7,8,4,1,9,6,3};
    vector <int> z;
    z=sortfun(v);
    for(auto i:z)
        cout<<i<<endl;

    return 0;
}
