#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int threed_array[5][5][5];
   /*Counter variables for the loop*/
   int i, j, k ;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
		 printf("Enter value for threed_array[%d][%d][%d]:", i, j,k);
         scanf("%d", &threed_array[i][j][k]);
     	}
      }
   }
   //Displaying array elements
   printf("Three Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
         printf("%d ", threed_array[i][j][k]);
         if(k==2){
        	printf("\n");
        }
         }
      }
   }
   
   /* Insert the given number of elements into the specified position of 
   the array such as first, last, mid*/
   char entry[10];
   scanf(" %c",&entry);
   switch (entry)
   {
   case "first":
      int element;
      printf("Enter Element to Add ");
      scanf("%d",&element);
      for (int i = 3; i > 0; i--)
      {
         threed_array[0][0][i+1] = threed_array[0][0][i] 
         
      }
      threed_array[0][0][0] = element;
      break;
   case "mid":
   int element;
      printf("Enter Element to Add ");
      scanf("%d",&element);
      for (int i = 3; i > 0; i--)
      {
         threed_array[0][0][i+1] = threed_array[0][0][i] 
         
      }
      break;
   case "last":
   
      printf("The Last element is %d", threed_array[2][3][3]);
      break;
   default:
      break;
   }
   /* Remove the given number of elements from the array */
   /* Remove the given number of elements from the specified position of 
   the array such as first, last, mid*/
   /* Search the given element in the array and print it's position*/
   /* Check whether the array has non zero values in a position*/
   /* Create one more ID array and compare the two ID arrays for values*/
   /* Create one more ID character array and compare the two ID char arrays for values*/
   
   /* Find the sum of all elements in an array*/
   /* Find the maximum elements in an array*/
   
   return 0;
}

