// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment - 7F

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

}

/*Output :

Enter any 2 words (separated by space) : Hello world
You entered: Hello world

=== Code Execution Successful ===


Enter any 2 words (separated by space) : Hey hey 
You entered: Hey hey

=== Code Execution Successful ===

*/
