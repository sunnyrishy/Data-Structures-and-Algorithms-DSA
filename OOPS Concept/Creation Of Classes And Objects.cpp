* Class is a user-defined datatype.

  #include<iostream>
using namespace std;

class Student{
public:
    int rollno;
    int age;
};

int main() {
    Student s1;
    Student s2;
    
    // accessing statically created object
    s1.age = 12;
    s1.rollno = 45;
    
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;
    
    //accessing dynamically created object
    Student *s3 = new Student;
    (*s3).age = 55;
    (*s3).rollno = 66;    // or s3->age = 55 can also be used
    
    cout<<(*s3).age<<endl;
    cout<<(*s3).rollno<<endl;
}
