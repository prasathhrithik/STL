/*In this code we have used priority queue to sort the elements in ascending order
  and the kth smallest element is found*/

#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
       //This declaration of queue sorts the elements in ascending order
    priority_queue <int,vector<int>,greater<int> >myqueue;

    int arr[]={7,2,9,5,1,6,3};  //An array is used for an instanace
    int n;
    int len=0;
    len=sizeof(arr)/sizeof(int); //len variable is used to get the length of array
    cout<<"Length of array is: "<<len<<endl;
        //In this for loop the array elements are copied to queue
    for(int i=0;i<len;i++)
    {
        myqueue.push(arr[i]);
    }

    cout<<"Enter the Nth least element you need to find: ";
    cin>>n;    //The user gives the Nth smallest element to be displayed

    for(int i=0;i<n-1;i++)  //This loop deletes the elements till the last before of given Nth number
    {
        myqueue.pop();
    }
    cout<<"The "<<n<<"th smallest element is :"<<myqueue.top()<<endl;

    return 0;
}
