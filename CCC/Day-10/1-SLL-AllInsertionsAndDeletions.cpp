#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define in(x) scanf(" %d", &x);
#define LinkedListNode LinkedListNode
typedef struct LinkedListNode LinkedListNode;
struct LinkedListNode {
    int val;
    struct LinkedListNode* next;
};


//-------------------- body of the code ------------------------




LinkedListNode* insertAtBeginning(LinkedListNode* head, int val) {
   struct LinkedListNode *node = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
    node->val = val;
    node->next = head;
    head = node;
    return head;

}
LinkedListNode* insertAtEnd(LinkedListNode* head, int val) {
   struct LinkedListNode *node = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
    node->val = val;
    node->next = NULL;
    if(head==NULL)
    {
        head = node;
        return head;
    }
     struct LinkedListNode *temp = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
    temp = head;
    
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = node;
    return head;

}
LinkedListNode* insertAtPosition(LinkedListNode* head, int val, int pos) {
    struct LinkedListNode *new1=(struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
    
    struct LinkedListNode *temp,*pre;
    int k=0;
   // if(!new1)
     //   return;
    new1->val=val;
    new1->next=NULL;
    if(pos==1)
    {
        new1->next=head;
        head=new1;
        return head;
    }
    else
    {
     temp=head;
     for(k=1;k<pos-1;k++)
     {
         temp = temp->next;
     }
        new1->next=temp->next;
        temp->next=new1;
        return head;
        
        
         
    }
}
LinkedListNode* deleteAtBeginning(LinkedListNode* head) {
    if(head==NULL)
    {
        return head;
    }
    
    LinkedListNode *temp,*pre;
    temp = head;
    head = temp->next;
    free(temp);
    return head;

}
LinkedListNode* deleteAtEnd(LinkedListNode* head) {
LinkedListNode *temp,*pre;
    temp = head;
    if(head==NULL)
    {
        return head;
    }
    if (head->next == NULL) 
    { 
        free(head); 
        return NULL; 
    } 
    while(temp->next->next!=NULL)//second last element
    {
        //pre = temp;
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos) {
LinkedListNode *temp,*pre;
    temp = head;
    int k=0;
    if(head==NULL)
    {
        return head;
    }
    if(pos==1)
    {
        head = temp->next;
        free(temp);
        return head;
    }
    else
    {
    // temp=head;
     for(k=1;k<pos-1 && temp!=NULL;k++)
     {
         //pre = temp;
         temp = temp->next;
     }
        if (temp == NULL || temp->next == NULL) 
         return head;
       struct LinkedListNode *next = temp->next->next;
        free(temp->next);
        temp->next = next;
        return head;
        
        
         
    }
    
    return head;
}

//-------------------- tail of the code ------------------------


int rng(int lim) {
    if (lim == 0) return 0;
    return rand()%lim;
}
int a[1005], sz = 0;
void insertt(int val, int pos) {
    if (pos < 0) return;
    if (pos > sz + 1) return;
    sz += 1;
    for (int i = sz; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
}
void erasee(int pos) {
    if (pos > sz) return;
    if (pos < 1) return;
    sz--;
    for (int i = pos; i <= sz; i++)
        a[i] = a[i + 1];
}
int check(LinkedListNode* head) {
    for (int i = 1; i <= sz; i++) {
        if (head == NULL) return 0;
        if (head->val != a[i]) return 0;
        head = head->next;
    }    
    if (head != NULL) return 0;
    return 1;
}
int main() {
    srand(time(NULL));
    int t, n; in(t); in(n);
    while (t--) {
        LinkedListNode* head = NULL;
        sz = 0;
        for (int i = 0; i < n; i++) {
            int type = rng(6);
            if (type == 0) {
                int val = rng(1000);
                head = insertAtBeginning(head, val);
                insertt(val, 1);
                if (!check(head)) {
                    printf("incorrect insertAtBeginning");
                    return 0;
                }
            }

            if (type == 1) {
                int val = rng(1000);
                head = insertAtEnd(head, val);
                insertt(val, sz + 1);
                if (!check(head)) {
                    printf("incorrect insertAtEnd");
                    return 0;
                }
            }

            if (type == 2) {
                int val = rng(1000);
                int pos = rng(sz + 1) + 1;
                head = insertAtPosition(head, val, pos);
                insertt(val, pos);
                if (!check(head)) {
                    printf("incorrect insertAtPosition");
                    return 0;
                }
            }

            if (type == 3) {
                head = deleteAtBeginning(head);
                erasee(1);
                if (!check(head)) {
                    printf("incorrect deleteAtBeginning");
                    return 0;
                }
            }

            if (type == 4) {
                head = deleteAtEnd(head);
                erasee(sz);
                if (!check(head)) {
                    printf("incorrect deleteAtEnd");
                    return 0;
                }
            }

            if (type == 5) {
                int pos = rng(sz)+1;
                head = deleteAtPosition(head, pos);
                erasee(pos);
                if (!check(head)) {
                    printf("incorrect deleteAtPosition");
                    return 0;
                }
            }
        }
    }
    printf("correct");
}
