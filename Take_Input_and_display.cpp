// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7A

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
    printf("\n");
   for(int i = 0 ; i < numbers.size(); i++) {
      printf("The element %d is %d \n",i+1 , numbers[i]);
   }

/*

Enter how many elements : 5
Enter element 1 : 3
Enter element 2 : 5
Enter element 3 : 6
Enter element 4 : 3
Enter element 5 : 5

The element 1 is 3 
The element 2 is 5 
The element 3 is 6 
The element 4 is 3 
The element 5 is 5 

*/
