#include <iostream>
using namespace std;

int main(){
    char str[100];

    // taking string input
    cout<<"Enter a string: ";
    cin.getline(str,100);

    int length=0;

    // counting characters until null character is found
    while(str[length] != '\0'){
        length++;
    }

    // displaying length of string
    cout<<"Length of string = "<<length;

    return 0;
}