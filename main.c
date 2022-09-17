#include <stdio.h>
#include <stdlib.h>

int main()
{

    //SUBTRACTION OF ONE POINTER FROM ANOTHER POINTER
    /*
    int arr[] = {10,20,30,45,67,56,74};
    int *i, *j;
    i = &arr[1]; //20
    j = &arr[5]; //56

    printf("\n%d %d", j-i, *j-*i); // j-i - subtracting pointers // *j-*i -> subtracting values
    printf("\n%d", *(j-4));

    return 0;
    */


    //PRINTS MEMORY LOCATIONS
    /*
    int num[] = {24,34, 12, 44, 56, 17};
    int i;
    for(i=0; i<=5; i++)
    {
        printf("\nelement no. %d", i);
        printf(" address=%u", &num[i]);
        printf(" value at address=%d", num[i]);
    }
    */

    //ACCESS ARRAY ELEMENTS USING POINTERS
    /*
    int num[] = {24,34,12,44,56,17};
    int i, *j;
    j = &num[0];
    for(i=0; i<6; i++)
    {
        printf("\naddress = %u", j);
        printf(" element = %d", *j);
        j++;
    }
    */

    //PASS ENTIRE ARRAY TO FUNCTION
    /*
    int i;
    int num[] = {24,34,12,44,56,17};
    //passing pointer to the first element of array to display()
    display(&num[0], 6);

    for(i=0; i<6; i++)
    {
        printf(" %d ", num[i]);
    }

    */


    /*
    int num1[] = {1,2,3,4,5};
    int *p, *q;
    p = &num1[0];
    q = num1;
    printf("%d", p);
    printf("\n%d", *num1);
    return 0;
    */


    /**
    The value of a variable or expression of type array :
        is the address of element zero of the array.

        in other words

    Name of an array is a synonym for the 'location' of the 'initial element    '
    */


    /*
    int *p;
    int a[] = {12,2,3,15,35,74};
    p = &a[0];
    printf("%d", p);
    printf("\n%d", a);

    int *q = &a[3];
    printf("\n %d = %d", *q, *(a+3));
    */

    //LETS C PAGE-322

    /**
    [D]

    [a] Ten numbers are entered from the keyboard into an array. The number to be searched is
    to be entered by the user.Write a program if the number to be searched is present in the array,
    and if it is present display the number of times it is present in the array.
    */

    //find_occurances_in_array();

    /**
     [b] Ten numbers are entered are to be entered from keyboard to an array. Write a program to find
     how many of them are positive, how many are negative, how many are even and how many are odd.
    */

    find_positive_negative_even_odd();


}

void find_positive_negative_even_odd()
{
    int i, oddcount, evencount, negative, positive;
    int arr[10];
    for(i=0; i<10; i++)
    {
        printf("\n Enter a number");
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++)
    {
        if(arr[i]<0)
            negative++;
        if(arr[i]>0)
            positive++;
        if(arr[i] % 2 == 0)
            evencount++;
        if(arr[i] % 2 != 0)
            oddcount++;
    }

    printf("\n evencount = %d, oddcount = %d, negetive = %d, positive = %d", evencount, oddcount, negative, positive);
}



void find_occurances_in_array()
{
    int i, count, *j;
    int arr[10];
    for(i=0; i<10; i++)
    {
        printf("\nEnter numbers");
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to search");
    scanf("%d", &j);

    for(i=0; i<10; i++)
    {
        if(arr[i]==j)
        {
            count++;
        }
    }

    printf("\n %d id present %d times", j, count);

}

void display(int *j, int n)
{
    int i;
    //incrementing the pointer to the first element
    //and assigning a value to the value of the pointer to which it is pointing
    for(i=0; i<n; i++)
    {
        *j = *j*100;
        j++; // increment pointer to next element
    }
    printf("\n");
}




