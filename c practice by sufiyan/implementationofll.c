#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node* next ;
};

int main(){
struct node *head,*newnode,*temp ;
 head = 0;
int choice = 1;
while(choice){
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter the data ");
scanf("%d", &newnode ->data);

if (head == 0){
    head = temp ;
    temp = newnode;
}
else 
{
    temp -> next = newnode ;
    temp = newnode ;
}
printf("Do u want to continue");
scanf("%d" ,&choice);
temp = head  ;
}
while(temp != 0){
    printf("%d",temp->data);
    temp = temp-> next ;
}
return 0;
}
