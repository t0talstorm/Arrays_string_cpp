// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7H

#include <iostream> 
#include <string>   
#include <cstdio>   
#include <string.h>  
#include <algorithm> 

using namespace std;

int main() {
    string str1, str2 , reverse;
    bool isPalindrome = 1;
    cout << "Enter any 2 words (separated by space) : ";
    cin >> str1 >> str2;
    str1 = str1 + " " + str2;

    cout << "You entered: " << str1 << endl;
    
    int n = str1.length();
    cout << "String length is : " << n<<endl;
    for(int i = 0 ; i < n/2 ; i++){
        if(str1[i] != str1[n-1-i]){
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) cout << "Yes the string is a Palindrome";
    else cout << "No the string is not a palindrome";
}

/*
OUTPUT :
Enter any 2 words (separated by space) : madam madam 
You entered: madam madam
String length is : 11
Yes the string is a Palindrome

=== Code Execution Successful ===

Enter any 2 words (separated by space) : Hello world
You entered: Hello world
String length is : 11
No the string is not a palindrome

=== Code Execution Successful ===

*/
