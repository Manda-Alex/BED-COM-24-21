#include <iostream>
#include <limits>
using namespace std;

int main(){
    cout <<"Enter a integer value between 5 and 10 \n";
    int number;
    cin >> number;

    while(!(number > 5 && !(number >10))){

        cout <<"You entered "<<number <<". Please enter a number between 5 and 10 \n";
        cin >> number;

        if(cin.fail()){
            cout <<"Sorry, you entered an invalid number please try again \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> number;
        }

    }


    cout <<"Your input value (" << number << ") has been accepted \n";
    
    return 0;
}
