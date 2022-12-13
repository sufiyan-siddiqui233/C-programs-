#include <stdio.h>
#include <string.h>
int main(){
int i,j, a[2][2],b[2][2] ,c[2][2] ,trans[2][2];
printf("Enter matrix 1 elements\n");
for(i=0;i<2;i++)
{for (j=0;j<2;j++)
 {
 scanf("%d",&a[i][j]);
 }
 printf("\n");
}
printf("Enter matrix 2 elements\n");
for(i=0;i<2;i++)
{for (j=0;j<2;j++)
 {
 scanf("%d",&b[i][j]);
 }
 printf("\n");
}
printf("The sum matrix is \n");
for(i=0;i<2;i++)
{for (j=0;j<2;j++)
 {
 c[i][j] = a[i][j]+b[i][j] ;
 printf("%d\t" ,c[i][j]);
}
printf("\n");
}
//printf("The transpose matrix is \n");
for(i=0;i<2;i++)
{for (j=0;j<2;j++)
 {
      trans[j][i] = c[j][i] ;
 //printf("%d\t" ,c[i][j]);
}

}
printf("The transpose matrix is \n");
for(i=0;i<2;i++)
{for (j=0;j<2;j++)
 {
 //c[i][j] = a[i][j]+b[i][j] ;
 printf("%d\t" ,trans[j][i]);
}
printf("\n");
}
return 0;
}
