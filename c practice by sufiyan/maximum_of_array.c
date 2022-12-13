#include <stdio.h>
#include <string.h>
int main(){
int a[100],i, size ,max;
printf("Enter size = \n");
scanf("%d" , &size);

printf("Enter values of a \n");
for(i=0; i<size; i++)
{
scanf("%d" , &a[i]);
}
max = a[0];
for(i=0; i<size ; i++)
{if (a[i] > a[0])
 max=a[i];
 }
printf("Max of array is %d", max);

return 0;
}
