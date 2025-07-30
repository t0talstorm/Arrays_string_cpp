// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7B

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

   printf("\nEnter the number to search : ");
   scanf("%d",&num);
   printf("\n");
   flag = 0;

   for(int o = 0 ; o < numbers.size(); o++){
       if(num == numbers[o]){
           printf("The element (%d) was found at position %d\n" ,num , o+1);
           flag = 1;
       }
   }
   if(flag != 1 ){
       printf("The specified element (%d) was not in the array \n",num);
   }


/*
Enter how many elements : 3
Enter element 1 : 3
Enter element 2 : 3
Enter element 3 : 2

Enter the number to search : 3

The element (3) was found at position 1
The element (3) was found at position 2

*/
