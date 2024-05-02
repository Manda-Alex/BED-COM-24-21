#include <iostream>

using namespace std;

void swapNumbers(int* x, int* y);

int main(){
    int varA = 25;
    int varB = 100;

//storing the memory addresses for varA & varB respectively in pointers
    int* pvarA = &varA; 
    int* pvarB = &varB;

    cout <<"varA before swap :" << varA << endl;
    cout <<"varB before swap :" << varB << endl;

// calling the function using the variable addresses stored in pointers
    swapNumbers(pvarA, pvarB);

    cout <<"varA after swap :" << varA << endl;
    cout <<"varB after swap :" << varB << endl;

    return 0;
}

void swapNumbers(int* x, int* y){
    //the lines below dereferences pointers to get their values and swap them
    int swap = *x;
    *x = *y;
    *y = swap;

}