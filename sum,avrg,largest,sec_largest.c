#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i;
int arr[10];
int sum;
int largest,sec_largest;
float avrg;
// input 10 elements
printf("enter 10 elements:\n");
for ( i=0; i<10;i++){
        printf("element %d\n", i+1);
          scanf("%d",&arr[i]);
       }
       //initializing largest and sec_largest
       largest=arr[0];
       sec_largest=arr[0];
       //calculate the sum and find largest elements
       for(i=0; i<10; i++){
       	sum+=arr[i];
       	
       	if(arr[i]>largest){
       		sec_largest= largest;
       		largest= arr[i];
		   }
		   else if(arr[i]>sec_largest && arr[i]< largest){
		   	sec_largest= arr[i];
		   }
	   }
     //calculate the avrg
     avrg=(float)sum/10;
     
     // display results
     printf("\nSum=%d", sum);
      printf("\nAverage=%.2f", avrg);
       printf("\nLargest=%d", largest);
         printf("\nSecond largest=%d",sec_largest);

return 0;
}




