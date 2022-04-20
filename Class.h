#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>
using namespace std;
class Human
{
    string name;
    string name2;
    string surname;
    int age;
public:
    virtual void set();
    virtual void PrintName();
};
class Boss : public Human {
    int number_of_workers;
public:
    void PrintName();
    void set();
};
class Student : public Human {
    bool on_lesson;

public:
    void PrintName();
    void set();
};
#endif