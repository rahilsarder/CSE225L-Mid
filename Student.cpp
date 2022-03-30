#include <iostream>

using namespace std;

class Student{
    private:
        int student_id;
        string student_name;
        float quiz, midterm1, midterm2, assignment, final;

    public:
        Student();
        Student(int id, string name, float quiz, float midterm1, float midterm2, float assignment, float final);
        void PrintAll();
        float calculateQuiz();
        float calculateMidTerm();
        float calculateMid2();
        float calculateAssignment();
        float calculateFinal();
        float calculateTotalMark();

};


Student::Student(){
    student_id = 0;
    student_name = "";
    quiz = 0;
    midterm1 = 0;
    midterm2 = 0;
    assignment = 0;
    final = 0;
}

Student::Student(int id, string name, float quiz, float midterm1, float midterm2, float assignment, float final){
    student_id = id;
    student_name = name;
    this->quiz = quiz;
    this->midterm1 = midterm1;
    this->midterm2 = midterm2;
    this->assignment = assignment;
    this->final = final;
}

float Student::calculateQuiz(){
    this->quiz = (this->quiz*10)/100;
}
float Student::calculateMidTerm(){
    this->midterm1 = (this->midterm1*20)/100;
}
float Student::calculateMid2(){
    this->midterm2 = (this->midterm2*20)/100;
}
float Student::calculateAssignment(){
    this->assignment = (this->assignment*30)/100;
}
float Student::calculateFinal(){
    this->final = (this->final*30)/100;
}


float Student::calculateTotalMark(){
    float result = this->quiz + this->midterm1+ this->midterm2 + this->assignment + this->final;
    return result;
}




// void Student::PrintAll(){
//     cout<<"Student ID: "<<student_id;
//     cout<<"Student Name: "<<student_name;
//     cout<<"Total Mark: "<<calculateHigestMark();
// }