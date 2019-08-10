Q.IMPLEMENT QUEUE USING LINKLIST

#include<stdio.h>
#include<stdlib.h>
struct queuenode
{
    int data;
    struct queuenode *next;
};

struct queuenode *createqueue(struct queuenode *front,int data)
{
    if(front==NULL)
    {
        struct queuenode *nnode=NULL;
        nnode=(struct queuenode*)malloc(sizeof(struct queuenode));
        nnode->data=data;
        nnode->next=NULL;
        return nnode;
    }
    else
    {
        struct queuenode *nnode=NULL;
        nnode=(struct queuenode*)malloc(sizeof(struct queuenode));
        nnode->data=data;
        nnode->next=front;
        return nnode;
    }
}

struct queuenode *enqueue(struct queuenode *front,int data)
{
    if(front==NULL)
    {
        struct queuenode *nnode=NULL;
        nnode=(struct queuenode*)malloc(sizeof(struct queuenode));
        nnode->data=data;
        nnode->next=NULL;
        return nnode;
    }
    else
    {
        struct queuenode *nnode=NULL;
        nnode=(struct queuenode*)malloc(sizeof(struct queuenode));
        nnode->data=data;
        nnode->next=front;
        return nnode;
    }
}

struct queuenode *dequeue(struct queuenode *front)
{
    struct queuenode *q;
    struct queuenode *temp=front;
    while(temp->next!=NULL)
    {
        q=temp;
        temp=temp->next;
    }
    q->next=NULL;
    free(temp);
}

void peek(struct queuenode *front)
{
   struct queuenode *temp=front;
   if(front==NULL)
{
   return;
}
else
{
printf("%d",temp->data);
}
}



void printdata(struct queuenode *front)
{
    struct queuenode *temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int main()
{
    struct queuenode *front=NULL;
    front=createqueue(front,50);
    front=createqueue(front,40);
    front=createqueue(front,30);
    front=createqueue(front,20);
    front=createqueue(front,10);
    front=createqueue(front,70);
    printdata(front);
    printf("\n");

    front=enqueue(front,60);
    printdata(front);
    printf("\n");

    dequeue(front);
    printdata(front);
    printf("\n");

    peek(front);
    printf("\n");   
    

}


/*output
vaishnavi@pucsd:~/ppatest2$ gcc queue.c 
vaishnavi@pucsd:~/ppatest2$ ./a.out 
70	10	20	30	40	50	
60	70	10	20	30	40	50	
60	70	10	20	30	40	
60
vaishnavi@pucsd:~/ppatest2$ */
