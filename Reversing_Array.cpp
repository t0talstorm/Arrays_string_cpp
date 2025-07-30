// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7C

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm> 
using namespace std;


int main() {
    int how , buffer ,  num , flag;
    vector<int> numbers;
    printf("Enter how many elements : " );
    scanf("%d",&how);
    for(int j = 0 ; j < how ; j++){
        buffer =0;
        printf("Enter element %d : " , j+1);
        scanf("%d", &buffer);
        numbers.push_back(buffer);
    }
    
    reverse(numbers.begin(), numbers.end());
   printf("\nThe reversed string is : \n");
     for(int i = 0 ; i < numbers.size(); i++) {
      printf("The element %d is %d \n",i+1 , numbers[i]);
   }

/*

Enter how many elements : 5
Enter element 1 : 4
Enter element 2 : 6
Enter element 3 : 5
Enter element 4 : 7
Enter element 5 : 4

The reversed string is : 
The element 1 is 4 
The element 2 is 7 
The element 3 is 5 
The element 4 is 6 
The element 5 is 4 

*/
