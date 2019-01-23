#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node N;

struct node{
    int data;
    struct node* next;
};
N* addatb(N* h,int newdata)
{
    N*newptr=(N*)malloc(sizeof(N));
    newptr->data=newdata;
    newptr->next=NULL;
    if(h==NULL)
    {
        return newptr;
    }
    else
    {
        newptr->next=h;
        h=newptr;
        return h;
    }
}
void print(N* head) {
if(head!=NULL)
{
    printf("%d",head->data);
    if(head->next) printf("->");
    print(head->next);
}
    else
        return;
}
int main() {
    N* head=NULL;
   //head=(struct N*)malloc(sizeof(struct(N));
    int n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        head=addatb(head,x);
    }
    print(head);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
