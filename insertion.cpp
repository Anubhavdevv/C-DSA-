                                                     INSERTION (Inserting element at Specific Position in Array | C++ Programming)



#include<iostream>
using namespace std;
int main(){
    int a[50];
    int size,pos,i,num,n;
    cout << "Enter the size of the array: ";
    cin >> size;
    for(i=0;i<size;i++){
        cin >> a[i];
    }
    cout << "Enter the psotion: ";
    cin >> pos;
    cout << "Enter the number: ";
    cin >> num;
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    for(i=0;i<=size;i++){
        cout << " " << a[i];
    }
    return 0;

}
