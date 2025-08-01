# EXPERIMENT - 7 - ARRAYS & STRINGS IN C++

# Aim: To study and implement fundamental array and string operations in C++.

## Apparatus: VS Code or any C++ Compiler (GCC, Visual Studio, etc.)

## Theory:

**Arrays and Strings** are fundamental data structures in C++ that form the backbone of data manipulation and storage. Understanding these concepts is crucial for developing efficient algorithms and solving complex programming problems.

### Arrays in C++:

**Arrays** are collections of elements of the same data type stored in contiguous memory locations. They provide:

* **Direct Access**: Elements can be accessed directly using indices, making retrieval O(1).
* **Memory Efficiency**: Elements are stored contiguously, optimizing cache performance.
* **Fixed Size**: Traditional arrays have a fixed size determined at compile time.

```cpp
int arr[5] = {1, 2, 3, 4, 5}; // Static array
vector<int> dynamicArr;        // Dynamic array using STL
```

### Strings in C++:

**Strings** are sequences of characters that can be manipulated using various operations. C++ provides multiple ways to handle strings:

* **C-style strings**: Character arrays terminated by null character (`\0`)
* **STL strings**: The `string` class providing rich functionality
* **String operations**: Concatenation, comparison, searching, and modification

```cpp
char cStr[] = "Hello";        // C-style string
string cppStr = "World";      // C++ string class
```

### Key Operations Covered:

1. **Input/Output Operations**: Reading and displaying array elements and strings
2. **Search Operations**: Linear search to find specific elements
3. **Mathematical Operations**: Sum, average, maximum, and minimum calculations
4. **Array Manipulation**: Reversing arrays and string reversal
5. **String Processing**: Concatenation and palindrome checking

### Why This Matters:

Mastering arrays and strings is essential for:

* **Algorithm Development**: Foundation for sorting, searching, and data processing algorithms
* **Memory Management**: Understanding how data is stored and accessed in memory
* **Problem Solving**: Building blocks for complex data structures like matrices, trees, and graphs
* **Real-world Applications**: Text processing, data analysis, and system programming

## Programs:

### 1. Take Input and Display Array Elements

---

**Description:** A fundamental program that demonstrates dynamic array input and display operations using vectors.

**Algorithm:**
1. Prompt user for the number of elements to input
2. Create a vector to store the elements dynamically
3. Use a loop to read each element from the user
4. Store each element in the vector using `push_back()`
5. Display all elements with their positions using another loop

**Sample Output:**
```
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
```

---

### 2. Search Element in Array

---

**Description:** Implements linear search algorithm to find a specific element in an array and reports its position(s).

**Algorithm:**
1. Input array elements from the user
2. Prompt user for the element to search
3. Initialize a flag variable to track if element is found
4. Iterate through the array comparing each element with the search value
5. If found, display the position; if not found, display appropriate message
6. Handle multiple occurrences of the same element

**Sample Output:**
```
Enter how many elements : 5
Enter element 1 : 10
Enter element 2 : 20
Enter element 3 : 30
Enter element 4 : 20
Enter element 5 : 50

Enter the number to search : 20

The element (20) was found at position 2
The element (20) was found at position 4
```

---

### 3. Reverse Array

---

**Description:** Demonstrates array reversal using the two-pointer technique to swap elements from both ends.

**Algorithm:**
1. Input array elements from the user
2. Display the original array
3. Use two pointers: one at the beginning and one at the end
4. Swap elements at these positions
5. Move pointers toward the center until they meet
6. Display the reversed array

**Sample Output:**
```
Enter how many elements : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 4
Enter element 5 : 5

Original Array: 1 2 3 4 5
Reversed Array: 5 4 3 2 1
```

---

### 4. Find Maximum and Minimum

---

**Description:** Efficiently finds the largest and smallest elements in an array using single-pass iteration.

**Algorithm:**
1. Input array elements from the user
2. Initialize max and min variables with the first element
3. Iterate through the remaining elements
4. Update max if current element is greater than max
5. Update min if current element is smaller than min
6. Display both maximum and minimum values

**Sample Output:**
```
Enter how many elements : 5
Enter element 1 : 9
Enter element 2 : 5
Enter element 3 : 2
Enter element 4 : 8
Enter element 5 : 1

The Maximum of the elements in the array is : 9
The Minimum of the elements in the array is : 1
```

---

### 5. Calculate Sum and Average

---

**Description:** Computes the sum and average of all elements in an array using accumulation technique.

**Algorithm:**
1. Input array elements from the user
2. Initialize sum variable to zero
3. Iterate through all elements, adding each to the sum
4. Calculate average by dividing sum by the number of elements
5. Display both sum and average values

**Sample Output:**
```
Enter how many elements : 5
Enter element 1 : 4
Enter element 2 : 6
Enter element 3 : 7
Enter element 4 : 2
Enter element 5 : 8

The sum of all the elements in the array is : 27
The avg of the elements in the array is : 5
```

---

### 6. String Reversal

---

**Description:** Takes two words as input, concatenates them, and displays the reversed string using character-by-character reversal.

**Algorithm:**
1. Read two words from the user
2. Concatenate the words with a space in between
3. Calculate the total length of the concatenated string
4. Use a reverse loop to print characters from last to first
5. Display the original string, its length, and the reversed version

**Sample Output:**
```
Enter any 2 words (separated by space) : Hello world
You entered: Hello world
String length is : 11
String in reverse: dlrow olleH
```

---

### 7. String Concatenation

---

**Description:** Demonstrates various string concatenation techniques and string manipulation operations.

**Algorithm:**
1. Read multiple strings from the user
2. Use string concatenation operators (+) or append() methods
3. Display the concatenated result
4. Optionally perform additional string operations like length calculation

**Sample Output:**
```
Enter first string: Hello
Enter second string: World
Concatenated string: HelloWorld
Length of concatenated string: 10
```

---

### 8. Palindrome Check

---

**Description:** Determines whether a given string (formed by concatenating two input words) is a palindrome using two-pointer comparison.

**Algorithm:**
1. Read two words and concatenate them with a space
2. Initialize a boolean flag for palindrome status
3. Use two pointers: one at the beginning, one at the end
4. Compare characters at both positions
5. If any pair doesn't match, set flag to false and break
6. Move pointers toward center until they meet or cross
7. Display the result based on the flag status

**Sample Output:**
```
Enter any 2 words (separated by space) : madam madam
You entered: madam madam
String length is : 11
Yes the string is a Palindrome
```

---

### 9. Take String Input and Print

---

**Description:** Basic string input/output operations demonstrating different methods of reading and displaying strings.

**Algorithm:**
1. Use various input methods (cin, getline, scanf)
2. Read single words and complete lines
3. Display the input using different output methods
4. Demonstrate handling of whitespace and special characters

**Sample Output:**
```
Enter a string: Programming
You entered: Programming

Enter a line: This is a complete sentence
You entered: This is a complete sentence
```

---
