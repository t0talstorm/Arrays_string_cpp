// Name: Aditya Sinha 
// PRN: 24070123006
//Batch: EnTc A1
//Experimtnet 7G

#include <iostream> 
#include <string>   
#include <cstdio>   
#include <string.h>  
#include <algorithm> 

using namespace std;

int main() {
    string str1, str2 , reverse;

    cout << "Enter any 2 words (separated by space) : ";
    cin >> str1 >> str2;
    str1 = str1 + " " + str2;

    cout << "You entered: " << str1 << endl;
    
    int n = str1.length();
    cout << "String length is : " << n<<endl;
    cout << "String in reverse: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << str1[i];
    }
    cout << endl;

}
/*
OUTPUT 

Enter any 2 words (separated by space) : Hello world
You entered: Hello world
String length is : 11
String in reverse: dlrow olleH


=== Code Execution Successful ===

Enter any 2 words (separated by space) : Racecar good 
You entered: Racecar good
String length is : 12
String in reverse: doog racecaR
*/
