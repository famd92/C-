// Write a program in C++ to test whether two strings are anagrams.

#include <iostream> 
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>


using namespace std;

bool VerifyAnagram(string Str1, string Str2);  // Declare the subroutine returning a boolean object


int main(){
    
    string str1, str2;
    cout<<"Please enter the first word: ";
    cin>>str1;
    cout<<"Please enter the second word: ";
    cin>>str2;
    if(str1.size()!=str2.size()) { // if the two string do not have the same length print error message
        cout<<"ERROR! The two words are not the same length"<<endl;
        return 0; //stop the program
    }
    
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);  //Put the elements of str1 in lowercase
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower); //Put the elements of str2 in lowercase

    if(VerifyAnagram(str1, str2)) {
        cout<<"The two words are anagrams."<<endl;
    }
    else {
        
        cout<<"The two words are NOT anagrams.\n";
    }
    
    return 0; //Stop the program
}

bool VerifyAnagram(string Str1, string Str2) //Function to check if Str1 and Str2 in input are the same. The two possible outcomes of this function are: TRUE or FALSE.
{
    
    sort(Str1.begin(), Str1.end()); // Sort the strings in alphabetic order
    sort(Str2.begin(), Str2.end()); // Sort the strings in alphabetic order
    
    return Str1==Str2; // return the result of the comparision between the two strings
    
} 
