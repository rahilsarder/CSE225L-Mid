#include "SortedList.cpp"
#include "Student.cpp"
#include <iostream>

using namespace std;

int main()
{
    
    SortedType<Student> st;
    
    Student s1(1, "John", 90, 80, 70, 60, 50);
    Student s2(2, "Jane", 90, 80, 70, 60, 50);
    

    st.InsertItem(s1);
    st.InsertItem(s2);

    
    

    return 0;
   
}
