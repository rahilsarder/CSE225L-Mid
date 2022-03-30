#include "StackType.cpp"
#include <iostream>


using namespace std;

int main(){

    StackType<int> s1;
    StackType<int> reverse;
    StackType<int> store;

    int n;
    cout<<"Enter the number of elements you want to push: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>x;
        s1.Push(x);
    }
    int r;
    cout<<"Enter the number of elements you want to reverse: ";
    cin>>r;

    for(int i=0; i<r; i++){
        reverse.Push(s1.Top());
        s1.Pop();
    }
    while(!s1.IsEmpty()){
        store.Push(s1.Top());
        s1.Pop();
    }

    while(!reverse.IsEmpty()){
        cout<<reverse.Top()<<" ";
        reverse.Pop();
    }

   while(!store.IsEmpty()){
       cout<<store.Top()<<" ";
       store.Pop();
   }


    return 0;
}