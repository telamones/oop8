#ifndef OOP8_STUDENT_H
#define OOP8_STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
    string name;
    string surname;
    int grade;
    float score;

public:
    void set_name (string student_name) {
        name = student_name;
    };
    string get_name() const {
        return name;
    };
    void set_surname (string student_surname){
        surname = student_surname;
    };
    string get_surname() const {
        return surname;
    };
    void set_grade (int student_grade){
        grade=student_grade;
    };
    int get_grade() const {
        return grade;
    };
    void set_score(float student_score){
        score = student_score;
    };
    float get_score() const {
        return score;
    };

    Student& operator = (Student obj) {
        this->name=obj.name;
        this->surname=obj.surname;
        this->grade=obj.grade;
        this->score=obj.score;
        return *this;
    }
};

ostream& operator << (ostream &os, const Student &s) {
    return os << s.get_name() << " " << s.get_surname() << " " << s.get_grade() << " " << s.get_score() << endl;
}

istream& operator >> (istream &in, Student &s) {
    string x1, x2;
    int x3;
    float x4;
    in >> x1 >> x2 >> x3 >> x4;
    s.set_name(x1);
    s.set_surname(x2);
    s.set_grade(x3);
    s.set_score(x4);
    return in;
}
#endif //OOP8_STUDENT_H
