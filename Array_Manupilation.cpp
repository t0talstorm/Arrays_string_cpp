// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 6

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
   
    reverse(numbers.begin(), numbers.end());
   printf("\nThe reversed string is : \n");
     for(int i = 0 ; i < numbers.size(); i++) {
      printf("The element %d is %d \n",i+1 , numbers[i]);
   }
   
   int sum = 0;
   for(int k = 0; k < numbers.size() ; k++){
       sum = sum + numbers[k];
   }
   printf("\nThe sum of all the elements in the array is : %d", sum);
   
   int avg = sum/numbers.size();
   printf("\nThe avg of the elements in the array is : %d", avg);
   
   int max = numbers[0];
   for(int l = 0 ; l < numbers.size(); l++){
       
       if(max < numbers[l] ){
           max = numbers[l];
       }
   }
   printf("\nThe Maximum of the elements in the array is : %d", max);
    int min = numbers[0];
   for(int l = 0 ; l < numbers.size(); l++){
       
       if(min < numbers[l] ){
           min = numbers[l];
       }
   }
      printf("\nThe Minimum of the elements in the array is : %d", min);
   

    return 0;

}

/*
Enter how many elements : 3
Enter element 1 : 2
Enter element 2 : 2
Enter element 3 : 1

The element 1 is 2 
The element 2 is 2 
The element 3 is 1 

Enter the number to search : 2

The element (2) was found at position 1
The element (2) was found at position 2

The reversed string is : 
The element 1 is 1 
The element 2 is 2 
The element 3 is 2 

The sum of all the elements in the array is : 5
The avg of the elements in the array is : 1
The Maximum of the elements in the array is : 2
The Minimum of the elements in the array is : 2

=== Code Execution Successful ===



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

Enter the number to search : 3

The element (3) was found at position 1
The element (3) was found at position 4

The reversed string is : 
The element 1 is 5 
The element 2 is 3 
The element 3 is 6 
The element 4 is 5 
The element 5 is 3 

The sum of all the elements in the array is : 22
The avg of the elements in the array is : 4
The Maximum of the elements in the array is : 6
The Minimum of the elements in the array is : 6

=== Code Execution Successful ===
*/

