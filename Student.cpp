#include<iostream>


class Student
{
    friend bool operator>(Student a, Student b)
    {
        return a.result > b.result;
    }

    friend bool operator<(Student a, Student b)
    {
        return a.result < b.result;
    }

private:
    int student_id;
    string student_name;
    double quiz, midterm1, midterm2, assignment, final, result;

public:
    Student() { }
    Student(int id, string name, double quiz, double midterm1, double midterm2, double assignment, double final)
    {
        student_id = id;
        student_name = name;
        this->quiz = quiz;
        this->midterm1 = midterm1;
        this->midterm2 = midterm2;
        this->assignment = assignment;
        this->final = final;

        calculateTotalMark();
    }
    void PrintAll()
    {
        cout << "Student ID: " << student_id<<" ";
        cout << "Student Name: " << student_name<<' ';
        cout << "Total Mark: " << result<<endl;
    }

    void calculateTotalMark()
    {
        result = quiz*.1 + midterm1*.2 + midterm2*.2 + assignment*.2 + final*.3;
    }

};

