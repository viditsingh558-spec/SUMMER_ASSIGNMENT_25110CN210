#include <iostream>
using namespace std;

int main(){
    char str[100];

    // taking string input
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int length=0;
    int vowelcount=0;
    int consonantcount=0;

    // traversing the string
    while(str[length]!='\0'){

        // checking whether character is a vowel
        if(str[length]=='A' || str[length]=='E' || str[length]=='I' ||
           str[length]=='O' || str[length]=='U' ||
           str[length]=='a' || str[length]=='e' || str[length]=='i' ||
           str[length]=='o' || str[length]=='u'){

            vowelcount++;
        }

        // checking whether character is an alphabet
        else if((str[length]>='A' && str[length]<='Z') ||
                (str[length]>='a' && str[length]<='z')){

            consonantcount++;
        }

        length++;
    }

    // displaying result
    cout<<"The vowels are "<<vowelcount<<endl;
    cout<<"The consonants are "<<consonantcount<<endl;

    return 0;
}