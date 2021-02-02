#include <iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter number of elements: ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements: ";
    for(int i = 0; i < a; i++){
        cin>> arr[i];
    }
    cout<<"You entered: ";
    for(int i = 0; i < a; i++){
        cout<< *(arr+i) <<endl; //arr is an integer pointing to 1st element of array arr
    }
    return 0;
}
