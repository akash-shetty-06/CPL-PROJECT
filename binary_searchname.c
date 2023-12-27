#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// calling the function bu providing the argument
int binary_search(char* phone_book[], int phone_book_size, char* contact_name) 
{
    int low = 0; //declaring the varable
    int high = phone_book_size - 1;  //declaring the varable
    while (low <= high) // Checking the high is lower than low 
    {
        int mid = (low + high) / 2; // Assing the value to mid
        int comparison_result = strcmp(phone_book[mid], contact_name); // cpmparing the value
        if (comparison_result == 0) //checking the value
        {
            return mid;  
        } else if (comparison_result < 0)  //checking the value
        {
            low = mid + 1;
        } else //checking the value
        {
            high = mid - 1;
        }
    }
    return -1;  // Element not found
}



// Main function
int main() {
    char* phone_book[] = {strdup("Ajay"), strdup("Akash"), strdup("D"), strdup("Madhushree"), strdup("Manthan"), strdup("Veeresh")}; // creating the array of pointer
    int arr_size = sizeof(phone_book) / sizeof(phone_book[0]); // size of the array
    char contact_name[50];  // declaring the value
    printf("Enter the contact name: "); // value to be found
    scanf("%s", contact_name); // input value
    int result = binary_search(phone_book, arr_size, contact_name); // calling the function using parameter passing
    if (result != -1) //comparing the outpou provide by the function 
    {
        printf("Contact found! %s\n", contact_name);
    } 
    else 
    {
        printf("Contact not found for %s\n", contact_name);
    }
    // Freeing the allocate dmemory for phone book
    for (int i = 0; i < arr_size; ++i) {
        free(phone_book[i]);
    }
    return 0;
}


// c1 dynamic scope or static scope - static scope 
// c2 parameter passing methods - I have passed the value in funnction -call by value
// c3 garbage collector - C does not have automatic garbage collection. Memory management in C is manual, and the programmer is responsible for allocating and deallocating memory. In my program, memory for the array a is allocated manually, and there's no need for garbage collection.
// As i have used the free at the end it will be removing the garabage value at the end.
// c4 interpreter vs compiler -  C program is compiled. Compilation is the process of translating the entire source code into machine code or an intermediate code before execution. The resulting executable is then run independently of the source code.
// c5 object-oriented or functional programming paradigm -  function binary_search
