/* In this code we have made a priority queue and found the median of it
   using STL algorithm
*/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int med=0;

    priority_queue <int> myqueue; //We use priority queue to sort the elements

    myqueue.push(4);
    myqueue.push(2);
    myqueue.push(1);
    myqueue.push(5);
    myqueue.push(8);
    myqueue.push(9);
    myqueue.push(3);
    myqueue.push(7);
    myqueue.push(6);
    myqueue.push(0);


        //if the total number of elements is an odd number the control moves in here
    if(myqueue.size()%2!=0)
    {
        med=myqueue.size()/2;
        for(int i=0;i<med;i++)  //for loop deletes the elements till the before of median element
            myqueue.pop();
        cout<<"The median value is: ";
        cout<<myqueue.top();
    }
    else
    {
        float n,m;   //As there are two middle elements they are store in this variables to find the average
        med=myqueue.size()/2;
        for(int i=0;i<med-1;i++) //for loop deletes the elements till the before of median element
            myqueue.pop();
        n=(float)myqueue.top();  //variable n has the first middle element
        myqueue.pop();
        m=(float)myqueue.top();  //After deleting the first middle second middle element is stored in variable m
        cout<<"The median value is: ";
        cout<<(n+m)/2<<endl;     //Average of the two middle elements are displayed here

    }

    return 0;
}
