#include <iostream>
using namespace std;

int main() {

    // Input two strings
    char str1[100];
    char str2[100];

    cout << "Enter the first string ";
    cin.getline(str1, 100);

    cout << "Enter the second string ";
    cin.getline(str2, 100);

    // Find lengths of both strings
    int length1 = 0;
    int length2 = 0;

    while(str1[length1] != '\0'){
        length1++;
    }

    while(str2[length2] != '\0'){
        length2++;
    }

    // If lengths are different,
    // strings cannot be anagrams
    if(length1 != length2){
        cout << "Strings are not anagrams";
        return 0;
    }

    // Frequency array initialized with 0
    int freq[256] = {0};

    // Increase frequency for first string
    for(int i = 0; i < length1; i++){
        freq[(int)str1[i]]++;
    }

    // Decrease frequency for second string
    for(int i = 0; i < length2; i++){
        freq[(int)str2[i]]--;
    }

    bool anagram = true;

    // Check whether all frequencies became 0
    for(int i = 0; i < 256; i++){
        if(freq[i] != 0){
            anagram = false;
            break;
        }
    }

    // Display result
    if(anagram){
        cout << "Strings are anagrams";
    }
    else{
        cout << "Strings are not anagrams";
    }

    return 0;

}