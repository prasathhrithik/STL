/*In this code we have created a vector that works like a stack
  we have used functionc of vector such as push_back,pop_back,
  back,size to add,delete,display elements and find size of stack
  We will be displaying all the elements in the stack using
  isempty() funtion to check if the vector is empty or not
                                                                */



#include<iostream>
#include<vector>

using namespace std;

class Containerclass{
private:
    vector<int>v;
public:
        //push() function is used to add the elements to the vector
    int push(int x)
    {
        v.push_back(x);
    }
        //sizeofstack() returns the total number of elements in vector
    int sizeofstack()
    {
        return v.size();
    }
        //pop() is used to delete the
    void pop()
    {
        if(v.empty())
            cout<<"No elements are left in stack"<<endl;
        else
            v.pop_back();
    }
        //top() is used to get the topmost element of the vector
    int top()
    {
        return v.back();
    }
        //isempty() is used to check if there are elements present in vector or not
    bool isempty()
    {
        return v.empty();
    }
        //size() gives the total number of elements in the vector
    int size()
    {
        return v.size();
    }
};

int main()
{
    Containerclass stackA;  //A Containerclass type object named stackA is created

    stackA.push(5);
    stackA.push(7);
    stackA.push(2);
    stackA.push(3);
    stackA.push(9);

    cout<<"The size of stack is after filling all elements is: "<<stackA.sizeofstack()<<endl;

    cout<<"The Top most element in the stack is :"<<stackA.top()<<endl;

    cout<<"All the elements in the stack are:"<<endl;
                //All the elements in stack are displayed using while loop
    while(!stackA.isempty())
    {
        cout<<stackA.top()<<endl;
        stackA.pop();
    }

    return 0;
}
