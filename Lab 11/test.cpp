/*1.	Create a structure called "Student" that stores the following information about a student: name (string), age (int), and grade (float). Then write a program that creates a Student object and initializes its values.*/



// #include<iostream>
// #include<string>
// using namespace std;
// struct Student
// {
//     string name;
//     int age;
//     int grades;
// };


// int main()
// {
//     Student Taha;
//     cout<<"Enter the Name of the Studnet : ";
//     cin>>Taha.name;
//     cout<<"Enter the Age of the Studnet : ";
//     cin>>Taha.age;
//     cout<<"Enter the Grades of the Studnet : ";
//     cin>>Taha.grades;
//     cout<<endl<<endl;
//     cout<<"The above given detailed of the student is as below: --"<<endl;
//     cout<<Taha.name<<" "<<Taha.age<<" "<<Taha.grades;
//     return 0;
// }




// 3.	Write a program that creates an array of 10 Student objects and initializes their values. Then, the program should print the values of all the students.


// #include<iostream>
// #include<string>
// using namespace std;

// struct Student{
//     string name;
//     int age;
//     char grade;
// };

// int main()
// {
//     int i;
//     Student student[10];
//     for(int i = 0; i < 10; i++ )
//     {
//         cout<<"Enter the Name of the Student"<< i+1<< ":" ;
//         cin>>student[i].name;
//         cout<<"Enter the Age of the Student"<< i+1 <<":";
//         cin>>student[i].age;
//         cout<<"Enter the Grades of the Student"<< i+1 <<":";
//         cin>>student[i].grade;
//     }
//     cout<<endl<<"The Details of Students are as follow:---"<<endl<<endl;
//     cout<<"Name_"<<" "<<"Age_"<<" "<<"Grade_"<<endl<<endl;

//     for(int i = 0; i < 10; i++)
//     {
//         cout<<student[i].name<<" "<<student[i].age<<" "<<student[i].grade;
//         cout<<endl;
//     }
//     return 0;
// }







// 4.	Write a program that creates a structure called "Course" that stores the following information about a course: course code (string), course name (string), and number of students (int). The program should then create an array of 5 Course objects and initialize their values. Finally, the program should print the values of all the courses.
#include <iostream>
#include <string>
using namespace std;

struct course
{
    string courseCode;
    string courseName;
    int noOfStudent;
};


int main()
{
    course Course[5];
    cout<<"Enter the Details of the Course:----"<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"Enter Code of course"<<i+1<<":";
        cin>>Course[i].courseCode;
        cout<<"Enter Name of course"<<i+1<<":";
        cin>>Course[i].courseCode;
        cout<<"Enter the Number of Student in the cousre"<<i+1<<":";
        cin>>Course[i].noOfStudent;
    }

    cout<<"The Details of the course is as given below:-----"<<endl<<endl;
    for(int i = 0 ; i < 5; i++){
        cout<<Course[i].courseCode<<"  "<<Course[i].courseCode<<"  "<<Course[i].noOfStudent;
    }
    return 0;

}