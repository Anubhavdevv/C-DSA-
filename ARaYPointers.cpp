#include  <iostream>
using  namespace std;


int main()
{
    int arr[]={1,2,3,4,5};
    int *p = arr;   // Creates the pointer and store the adress of Array first index arr[0] adress :)
    cout << p << endl; //Printing the adress of arr[0]
    cout << *p << endl; //Printing the value of arr[0]
    cout << *arr+1 << endl; //Printing the value of arr[1] = 2
    cout << *(arr+1) << endl; //Printing the value of arr[1] = 2
    cout << (&arr[0]+1) << endl; // 100 + 4(int byte) = 104 priting adress of the arr[1]
    cout << *(&arr[0]+1) << endl; //Printing the value of the arr[1]
    cout << 2[arr] << endl;// Printing the value of arr[2]
    cout << (&arr+1) << endl; //&arr+1 means that adress of arr[0] and +1 means the adress of the whole array(size of array) so it will give adress arr[0] + adress of array
    cout << *&arr << endl; //printing the adress of arr[0]
    cout << **&arr << endl;  // printing the value of arr[0]
    cout << (p+2) << endl; //Printing the adress of arr[2]
    cout << *(p+3) << endl; //Printing the value of arr[3]
    cout << arr << endl;//Printing the adress of arr[0]
    cout << *(arr+2) << endl; // printing the value of a[2]
    for(int i = 0; i<5 ; i++){ //Loops for accessing the array values using pointers 
        cout << *(arr+i) << endl; //Printing all the values stores in array
    }

    return 0;


}
