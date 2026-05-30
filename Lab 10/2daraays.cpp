//4.	Create a program to manage student grades using a 2-dimensional array. Each row of the array represents a student, and each column represents a subject. The program should perform the following tasks:

//Input:
//   - Accept the number of students and the number of subjects from the user.
//   - For each student and subject, input the student's grade (an integer between 0 and 100).

//Calculations:
//   - Calculate the average grade for each student.
//   - Calculate the average grade for each subject.

//Output:
//   - Display the grades in a tabular format.
//   - Display the average grade for each student.
//   - Display the average grade for each subject.

//Constraints:
//   - The number of students and subjects should be between 1 and 10.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    int Student[n][m];
    int Subject[m];
    cout<<"Enter the Total Number of Students: ";
    cin<<Student[n];
    cout<<"Enter the Total Number of Subjects: ";
    cin<<Subject[m];
    for(int i = 0; i < n; i++){
        cout<<"Enter The Marks of Student"<<Studnet[i]<<" ; ";
        cin<<Studnet[i];
        for(int j = 0; j < m; j++){
            cout<<"Enter the Marks of  Subject "<<Subject[j];
            cin<<Subject[j];
            cout<<endl;

        }
    }
    return 0;
}
