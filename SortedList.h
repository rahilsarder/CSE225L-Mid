
#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#include "Student.cpp"
const int MAX_ITEMS = 5;
using namespace std;
template <class ItemType>
class SortedType
{
public:
    SortedType();
    // SortedType(Student s);
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
    
};
#endif
