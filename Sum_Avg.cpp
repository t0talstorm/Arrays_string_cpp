// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7D

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
    
   int sum = 0;
   for(int k = 0; k < numbers.size() ; k++){
       sum = sum + numbers[k];
   }
   printf("\nThe sum of all the elements in the array is : %d", sum);
   
   int avg = sum/numbers.size();
   printf("\nThe avg of the elements in the array is : %d", avg);

/*
Enter how many elements : 5
Enter element 1 : 4
Enter element 2 : 6
Enter element 3 : 7
Enter element 4 : 2
Enter element 5 : 8

The sum of all the elements in the array is : 27
The avg of the elements in the array is : 5
*/
