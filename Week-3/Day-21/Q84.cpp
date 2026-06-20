#include <iostream>
using namespace std;

int main(){
    char str[100];

    // taking string input
    cout<<"Enter a string: ";
    cin.getline(str,100);

    // converting lowercase letters to uppercase
    for(int i=0; str[i]!='\0'; i++){

        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }

    // displaying updated string
    cout<<"String in uppercase: "<<str;

    return 0;
}