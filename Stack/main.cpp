#include "StackType.cpp"
#include <iostream>


using namespace std;

int main(){

    StackType<int> main;
    StackType<int> temp1;
    StackType<int> temp2;

    int n;
    cout<<"Enter the number of elements you want to push: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>x;
        main.Push(x);
    }
    int r;
    cout<<"Enter the number of elements you want to reverse: ";
    cin>>r;

    for(int i=0; i<r; i++){
        temp1.Push(main.Top());
        main.Pop();
    }

    while(!temp1.IsEmpty()){
        temp2.Push(temp1.Top());
        temp1.Pop();
    }

    while(!temp2.IsEmpty()){
        main.Push(temp2.Top());
        temp2.Pop();
    }

   while(!main.IsEmpty()){
       cout<<main.Top()<<" ";
       main.Pop();
   }

    return 0;
}