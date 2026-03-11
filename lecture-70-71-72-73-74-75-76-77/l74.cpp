//single
// #include<iostream>
// using namespace std;


// class Human{

//     protected:

//     string name;
//     int age;

//     public:


//     void work(){
//         cout<<"i am working";
//     }
// };


//multi level inheritance


// class Student:public Human{
//     int roll_no ,fees;

//     public:
//     Student(string name,int age ,int roll_no,int fees){
//         this->name = name;
//         this->age = age;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
// };

// int main(){

//     Student A1("rohit",29,23,111);
// }



// #include <iostream>
// using namespace std;

// class Person
// {
// protected:
//     string name;

// public:
//     void introduce()
//     {
//         cout << "Hello my name is: " << name << endl;
//     }
// };

// class Employee : public Person
// {
// protected:
//     int salary;

// public:
//     void monthly_salary()
//     {
//         cout << "My Monthly salary is: " << salary << endl;
//     }
// };

// class Manager : public Employee
// {
// public:
//     string department;

//     Manager(string name, int salary, string department)
//     {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work()
//     {
//         cout << "I am leading the department: " << department << endl;
//     }
// };

// int main()
// {
//     Manager A1("Arhan", 200, "Finance");
//     A1.introduce();
//     A1.monthly_salary();
//     A1.work();

//     return 0;
// }



//multiple inheritance

// #include <iostream>
// using namespace std;

// class Engineer
// {
//     void money()
//     {
//         cout << "Hello Money" << endl;
//     }

// public:
//     string specialization;

//     Engineer()
//     {
//         cout << "Hello engineer\n";
//     }

//     void work()
//     {
//         cout << "I have specialization in " << specialization << endl;
//     }
// };

// class Youtuber
// {
// public:
//     int subscriber;

//     Youtuber()
//     {
//         cout << "Hello Youtuber\n";
//     }
//     void contentCreator()
//     {
//         cout << "I have  a subsscriber base of " << subscriber << endl;
//     }
// };

// class CodeTeacher : public Engineer, public Youtuber
// {
// public:
//     string name;
//     CodeTeacher()
//     {
//         cout << "Hello CodeTeacher\n";
//     }
//     CodeTeacher(string name, string specialization, int subscriber)
//     {
//         this->name = name;
//         this->specialization = specialization;
//         this->subscriber = subscriber;
//     }

//     void showCase()
//     {
//         cout << "My name is " << name << endl;
//         work();
//         contentCreator();
//     }
// };

// int main()
// {
//     // CodeTeacher A1("Arhan", "CS", 81);
//     // A1.showCase();

//     CodeTeacher A1;

//     return 0;
// }



//hiranchicla inheritance


// #include <iostream>
// using namespace std;

// class Human
// {
// protected:
//     string name;
//     int age;

// public:
//     Human(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }

//     void work()
//     {
//         cout << " I am working \n";
//     }
// };

// class Student : public Human
// {
//     int roll_number, fees;

// public:
//     Student(string name, int age, int roll_number, int fees) : Human(name, age)
//     {
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll_number: " << roll_number << endl;
//         cout << "Fees: " << fees << endl;
//     }
// };

// class Teacher : public Human
// {
//     int salary;

// public:
//     // Teacher(int salary, string name, int age)
//     Teacher(string name, int age, int salary) : Human(name, age)
//     {
//         this->salary = salary;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     Student A1("Arhan", 19, 213, 99);
//     A1.display();

//     Teacher A2("Arfan", 12, 900);
//     return 0;
// }


//hybrid inheritance

#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << "I am Student\n";
    }
};

class Male
{
public:
    void MalePrint()
    {
        cout << "I am Male\n";
    }
};

class Female
{
public:
    void FemalePrint()
    {
        cout << "I am Female\n";
    }
};
class Boy : public Student, public Male
{
public:
    void boyPrint()
    {
        cout << "i am Boy\n";
    }
};

class Girl : public Student, public Female
{
public:
    void girlPrint()
    {
        cout << "i am Girl\n";
    }
};

int main()
{
    Girl G1;
    G1.print();

    Boy B1;
    B1.MalePrint();
    
    return 0;
}