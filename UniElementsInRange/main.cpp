/*In this code we will entering elements in a set and find the
  total number of elements in a particular range
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    set <int> s;
        //The total number of elements is passed in variable n
    cout<<"Enter the number of elements:";
    int n;
    cin>>n;
    int k;
        //All the elements are added to the set with the for loop and insert funtion
    for(int i=0;i<n;i++)
    {
        cin>>k;
        s.insert(k);
    }
        //Initially all the elements are displayed in this for loop
    cout<<"All the elements in set are: "<<endl;

    for(auto i:s)
        cout<<i<<endl;

    int x,y;
    int countnum=0;
    cout<<"Enter the staring value: "<<endl;
    cin>>x;
    cout<<"Enter the end value: "<<endl;
    cin>>y;
    cout<<endl;
            //This loop prints the elements between the given range
    for(auto q:s)
    {
        if((q>=x) && (q<=y))
        {
            cout<<q<<endl;
            countnum++;
        }
    }
            //countnum stores the total number of elements in the range and displays
    cout<<"The number of elements between the given range is: "<<countnum<<endl;


    return 0;
}

