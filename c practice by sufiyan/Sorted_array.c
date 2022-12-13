#include <stdio.h>
struct book
{
    char title[30], author[30];
    float price ;

};
int main(){
 struct book b[5];
 int i, j;
 for(i=0; i<5;i++)
 {
     printf("\n Enter book title, author name and price = \n");
     scanf("%s%s%f",&b[i].title,&b[i].author,&b[i].price);
 }

printf("\nSorted list");

 for(i=0; i<5;i++)
 {
     printf("\nTitle=%s" ,b[i].title);
     printf("\nAuthor=%s" ,b[i].author);
     printf("\nPrice=%f" ,b[i].price);
     //scanf("%s%s%f",&b[i].title,&b[i].author,&b[i].price);
 }
 return 0;

}
