#include <iostream>
using namespace std;
int main() {
    

    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    
    if(*ptr1>*ptr2){
    	cout<<"Number 1 is greater";
    }
     else if(*ptr2>*ptr1){
    	cout<<"Number 2 is greater";
    }
    else {
    	cout<<"Both number are equal";
    }
   
   
}

