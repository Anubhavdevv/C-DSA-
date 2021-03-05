                                                     INSERTION (Inserting element at Specific Position in Array | C++ Programming)



#include<iostream>
using namespace std;
int main(){
    int a[50];
    int size,pos,i,num,n;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements in the array: "<< endl;
    for(i=0;i<size;i++){
        cin >> a[i];
    }
    cout << "\n" << "Enter the psotion: ";
    cin >> pos;
    cout << "\n" << "Enter the number: ";
    cin >> num;
    if(pos<=0 || pos>size+1){                          //Bound on Position Condition
        cout << "Invalid Position";
    }
    else{
      for(i=size-1;i>=pos-1;i--){
         a[i+1]=a[i];
      }
      a[pos-1]=num;
      cout << "\n" << "After inserting the element: ";
      for(i=0;i<=size;i++){
        cout << "\n" << " "<< a[i];     //" " use for space
      }
    }  
    return 0;

}
