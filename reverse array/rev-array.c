#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i;
int arr[10];
// input 10 elements
printf("enter 10 elements:\n");
for ( i=0; i<10;i++){
        printf("element %d\n", i+1);
          scanf("%d",&arr[i]);
       }
       //display elements in reverse order
       printf("\nElements in reverse order:\n");

        for( i=9;i>=0;i--){
                printf("%d",arr[i]);
        }


return 0;
}




