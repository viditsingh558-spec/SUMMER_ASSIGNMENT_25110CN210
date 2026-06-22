#include <iostream>
using namespace std;

int main(){

    // declaring character array to store string
    char str[100];

    // taking string input
    cout<<"Enter a string to check: ";
    cin.getline(str,100);

    // variable to store length of string
    int length=0;

    // finding length of string
    while(str[length] != '\0'){
        length++;
    }

    // assuming the string is palindrome initially
    bool palindrome = true;

    // comparing characters from both ends
    for(int i=0; i<length/2; i++){

        // if any pair does not match
        if(str[i] != str[length-1-i]){
            palindrome = false;
            break;  // no need to check further
        }
    }

    // displaying result
    if(palindrome == true){
        cout<<"The string is palindrome";
    }
    else{
        cout<<"The string is not palindrome";
    }

    return 0;
}