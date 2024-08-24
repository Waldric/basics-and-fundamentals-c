#include <iostream>
using namespace std;

// Waldric Jude Garcia
// C2A - Ooprog

  int arr1[10];
  int arr2[10];
  int arrMerge[20];
  int temp, num1, num2;


void first_array(){ // function that holds the first array that will contain up to 10 elements

do
{
cout << "Input the number of elements in the first array (Max: 10 elements): ";
cin >> num1;
    if (num1 < 1 || num1 > 10)
    {
        cout << "invalid input! please try again. " << endl;
    }
    
} while (num1 < 1 || num1 > 10);



cout << "Array 1 " << endl; 
for (int i = 0; i < num1; i++)
{
    cout << "Element " << "[" << i + 1<< "]" << ": ";
    cin >> arr1[i];

arrMerge[i] = arr1 [i]; 
}

}

void second_array(){ // function that holds the second array that will contain up to 10 elements
do
{
cout << "Input the number of elements in the second array (Max: 10 elements): ";
cin >> num2;
    if (num2 < 1 || num2 > 10)
    {
        cout << "invalid input! please try again. " << endl;
    }
    
} while (num2 < 1 || num2 > 10);

cout << "\n\nArray 2 " << endl; 
for (int i = 0; i < num2; i++)
{
    cout << "Element " << "[" << i + 1<< "]" << ": ";
    cin >> arr2[i];



arrMerge[i + num1] = arr2 [i]; // used for merging the elements

}

}
int main (){


first_array();
second_array();

int num3 = num1 + num2;

for (int i = 0; i < num3; i++) // process of descending order
{ for (int j = i + 1; j < num3; j++)
{
    if (arrMerge[i] < arrMerge[j])
    {
       temp = arrMerge [i];
       arrMerge[i] = arrMerge[j];
       arrMerge[j] = temp;
    }
    
}
}

cout << "---------------------------------------------------------" << endl;
cout << "\nMERGED ARRAYS IN DESCENDING ORDER (Greatest to Least) \n" << endl; // output / display arrays

for (int i = 0; i < num3; i++)
{
    cout << "Element " << "[" << i + 1 << "]" << ": " << arrMerge[i] << endl;
}

cout << "\nClosing Program... ";

return 0;
}




