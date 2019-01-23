#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node N;

struct node{
    int data;
    struct node* next;
};

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
N* addinm(N* h,int newdata)
{
    N* newptr=(N*)malloc(sizeof(N));
    newptr->data=newdata;
    newptr->next=h->next;
//    newptr->next=h->next->next;
    h->next=newptr;
    return h;
}
int main() {
N* head=NULL;
    int n,x,i,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x==0)
        head=addatb(head,y);
        else
            head=addinm(head,y);
    }
    print(head);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}