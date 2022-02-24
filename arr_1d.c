#include <stdio.h>

int main()
{
    /* Single Dimensional - 1D array declaration*/
    // Syntax : type array_name[array_size];
    int size = 10;
    int oned_array[20],j,k;

    /*Counter variables for the loop*/
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter value for oned_array[%d]:", i);
        scanf("%d", &oned_array[i]);
    }

    // Displaying array elements
    printf("Single Dimensional array elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", oned_array[i]);
    }
    printf("\n");

    /* Remove the duplicate elements in an array*/
 for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( oned_array[i] == oned_array[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++)  
                {  
                    oned_array[k] = oned_array[k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
      

    // Insert one element into the array

    int p;
    printf("Insert A Number ");
    scanf("%d", &p);

    oned_array[size - 1] = p;
    /* Remove one element from the array */
    int index;
    printf("Index To Remove ");
    scanf("%d", &index);
    printf("Removing Entry one_d[%d] = %d \n", index, oned_array[index]);
    for (int i = index; i < size; i++)
    {
        oned_array[i] = oned_array[i + 1];
    }

    /* Search the given element in the array and print it's position*/
    int element;

    printf("element to search for =");
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        if (element == oned_array[i])
        {
            printf("at position %d element %d is present \n", i, element);
        }
    }
    /* Check whether the array has non zero values in a position*/

    int position;
    
    printf("position =");
    scanf("%d", &position);
    if (oned_array[position] != 0)
    {
        printf("Non Zero Value Is Present\n");
    }
    else
    {
        printf("Zero Value Is Present\n");
    }

    /* Create one more ID array and compare the two ID arrays for values*/
    int second_oned_array[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for second_oned_array[%d]:", i);
        scanf("%d", &second_oned_array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("oned_array[%d] = %d, second_oned_array[%d]=%d\n", i, oned_array[i], i, second_oned_array[i]);
    }

    /* Create one more ID character array and compare the two ID char arrays for values*/
    int char_array[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter value for char[%d]:", i);
        scanf(" %c", &char_array[i]);
    }
    int second_char_array[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter value for 2nd char[%d]:", i);
        scanf("%c", &second_char_array[i]);
    }

    /* Find the sum of all elements in an array*/
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += oned_array[i];
    }

    /* Find the maximum number of elements in an array*/
    int max = oned_array[0];

    for (i = 1; i < size; i++)
    {
        if (oned_array[i] > max)
        {
            max = oned_array[i];
        }
    }
    printf("max element is %d", max);

    /* Find the minimum number of elements in an array*/
    int min = oned_array[0];

    for (i = 1; i < size; i++)
    {
        if (oned_array[i] < min)
        {
            min = oned_array[i];
        }
    }
    printf("min element is %d", min);

    return 0;
}
