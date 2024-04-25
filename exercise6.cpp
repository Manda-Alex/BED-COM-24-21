#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

 
using namespace std;

string reverse(string theFile){
    int lengthOfString = theFile.length();
    for(int i = 0; i < lengthOfString/2; i++){
        swap(theFile[i] , theFile[lengthOfString - 1 - i]);
    }
    return theFile;     
}

string capitalizeSecondLetter(string text){
    bool capitalize = false;
    
    for(char &c : text){
        if(isalpha(c) && !capitalize){
            capitalize = true;
        }
        else if( isalpha(c) && capitalize){
            c = toupper(c);
            capitalize = false;
        }
        else if(isspace(c)){
            capitalize = false;
        }  
        
    }
        return text;
}

int main(){
    ifstream file("sometext.txt"); 

    if (!file.is_open()){
        cout << "Cannot open the file" << endl;
    } 
    string fileData;
    getline(file, fileData);
    file.close();

    // this check for English vowels
    int numberOfVowels = 0;
    for(char c: fileData){
        if(tolower(c) == 'a' || tolower(c) == 'e'|| tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            numberOfVowels++;
        }
    }

    cout << "The number of vowels in the text file statement is: " << numberOfVowels << endl;


    // displaying number of words in text file
    stringstream split(fileData); 
    string word;
    int numberOfWords = 0;
    while(split >> word){
        numberOfWords++;
    }
    cout << "There are: " << numberOfWords <<" word in the statement. "<< endl;

    //displaying a reverse statement
    string reversedStatement = reverse(fileData);
    cout << "The statement in reversal order is: (" << reversedStatement <<")" << endl;
    
    // inorder to display a capitalised statement
    string capitalizedData = capitalizeSecondLetter(fileData);
    cout << "The statement of the text file with capitalized second letter of each word is : \n" << capitalizedData << endl;
    
    return 0;
}
