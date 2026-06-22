#include <iostream>
using namespace std;

int main(){

    // character array to store sentence
    char str[100];

    // taking sentence input
    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    int length = 0;

    // assuming at least one word exists
    int wordcount = 1;

    // finding length of sentence
    while(str[length] != '\0'){
        length++;
    }

    // counting spaces
    for(int i=0; i<length; i++){
        if(str[i] == ' '){
            wordcount++;
        }
    }

    // displaying total words
    cout<<"The word count for the sentence is "<<wordcount;

    return 0;
}