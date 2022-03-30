#include "SortedList.cpp"
#include "Student.cpp"
#include <iostream>

using namespace std;

void print(SortedType<Student> s)
{
    for(int i = 0; i< s.LengthIs(); i++)
    {
        Student ss;
        s.GetNextItem(ss);
        ss.PrintAll();
    }
    cout<<endl;
    s.ResetList();
}

int main()
{
    
    SortedType<Student> st;
    
    Student s1(1, "John", 90, 80, 70, 60, 60);
    Student s2(2, "Jane", 90, 80, 70, 60, 50);
    

    st.InsertItem(s1);
    st.InsertItem(s2);

    print(st);

    return 0;
   
}
