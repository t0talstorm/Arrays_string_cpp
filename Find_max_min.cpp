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

   
   int max = numbers[0];
   for(int l = 0 ; l < numbers.size(); l++){
       
       if(max < numbers[l] ){
           max = numbers[l];
       }
   }
   printf("\nThe Maximum of the elements in the array is : %d", max);
    int min = numbers[0];
   for(int l = 0 ; l < numbers.size(); l++){
       
       if(min > numbers[l] ){
           min = numbers[l];
       }
   }
      printf("\nThe Minimum of the elements in the array is : %d", min);
   

    return 0;

}
/*
Enter how many elements : 5
Enter element 1 : 9
Enter element 2 : 5
Enter element 3 : 2
Enter element 4 : 6
Enter element 5 : 3

The Maximum of the elements in the array is : 9
The Minimum of the elements in the array is : 2

=== Code Execution Successful ===
*/
