#include  <iostream>
using  namespace std;


int main()
{
    int a[50],size,pos,i,num;
    cout << "Enter the size of the array: ";
    cin >> size;
    //Enter the elements in the array: 
    for(i=0;i<size;i++){
        cin >> a[i];
    }
    cout << "Enter the pos from which you want to delete the elements: ";
    cin >> pos;
    if(pos <= 0 || pos > size){    //Bound checking
        cout << "Invalid Pos";
    }
    else{
        int item = a[pos-1];
        for(i=pos-1;i<size-1;i++){
            a[pos-1]=a[size-1];        // Time Complexity 0(1) for unsorted array use this and for sorted use this a[i]=a[i+1]  :) 
        }
        size--;
        for(i=0;i<size;i++){
            cout << " " << a[i];
        }
        //cout << " " << item; (  if you want to enter the delete elemnt at last then use this statement ) 
    }

    return 0;
}
