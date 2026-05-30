// // Number swapping arrays program
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5] = {95, 80, 67, 82, 87} ;
//     string std[5] = {"Taha" , "Usama" , "Ali" , "Huzaifa" , "Daud"} ; 
//     int temp ;
//     for(int j = 0; j < 5; j++){
//         for(int i = 0; i < 5; i++){
//             if(marks[i] < marks[i + 1]){
//                 temp = marks[i + 1];
//                 marks[i + 1] = marks[i];
//                 marks[i] = temp;
//                 string std_swap = std[i + 1];
//                 std[i + 1] = std[i];
//                 std[i] = std_swap;
//             }
//         }
//     }
//     cout<<"The arranged numbers are : "<<endl;
//     for(int i = 0; i < 5 ; i++){
//         cout<<marks[i];
//     }
//     cout<<"The arranged names are : "<<endl;
//     for(int i = 0; i < 5; i++){
//         cout<<std[i];
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {

//   int numbers[5] = {7, 5, 6, 12, 35};

//   cout << "The numbers are: ";

//   //  Printing array elements
//   // using range based for loop
//   for (const int &n : numbers) {
//     cout << n << "  ";
//   }

//   cout << "\nThe numbers are: ";

//   //  Printing array elements
//   // using traditional for loop
//   for (int i = 0; i < 5; ++i) {
//     cout << numbers[i] << "  ";
//   }

//   return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {

//   int numbers[5];

//   cout << "Enter 5 numbers: " << endl;

//   //  store input from user to array
//   for (int i = 0; i < 5; ++i) {
//     cin >> numbers[i];
//   }

//   cout << "The numbers are: ";

//   //  print array elements
//   for (int n = 0; n < 5; ++n) {
//     cout << numbers[n] << "  ";
//   }

//   return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
    
//   // initialize an array without specifying size
//   double numbers[] = {7, 5, 6, 12, 35, 27};

//   double sum = 0;
//   double count = 0;
//   double average;

//   cout << "The numbers are: ";

//   //  print array elements
//   // use of range-based for loop
//   for (const double &n : numbers) {
//     cout << n << "  ";

//     //  calculate the sum
//     sum += n;

//     // count the no. of array elements
//     ++count;
//   }

//   // print the sum
//   cout << "\nTheir Sum = " << sum << endl;

//   // find the average
//   average = sum / count;
//   cout << "Their Average = " << average << endl;

//   return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for (int i = 1; i < n; i += 2) {
//         if (i < n) {
//             int temp = arr[i];
//             arr[i] = arr[i - 1];
//             arr[i - 1] = temp;
//         }
//     }
//     cout << "Array : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int num[] = {44, 43, 23, 22, 66, 77, 12};
//     int n = sizeof(num) / sizeof(num[0]);

//     int largest[3] = {0};

//     for (int i = 0; i < n; i++) {
//         if (num[i] > largest[0]) {
//             largest[2] = largest[1];
//             largest[1] = largest[0];
//             largest[0] = num[i];
//         } else if (num[i] > largest[1]) {
//             largest[2] = largest[1];
//             largest[1] = num[i];
//         } else if (num[i] > largest[2]) {
//             largest[2] = num[i];
//         }
//     }

//     cout << "The largest three elements are: " << endl;
//     cout << largest[0] << endl;
//     cout << largest[1] << endl;
//     cout << largest[2] << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int temp[100];
//     int posIndex = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= 0) {
//             temp[posIndex] = arr[i];
//             posIndex++;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             temp[posIndex] = arr[i];
//             posIndex++;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         arr[i] = temp[i];
//     }

//     cout << "Array after moving negatives to the end: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
