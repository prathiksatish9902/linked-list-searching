#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *newnode;
struct node *temp;
//head = 0;
int choice =1 ;

struct node* createNode(struct node * head){
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == 0)
        {
            printf("Memory allocation failed\n");
            return head ;
        }
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue (0,1)?");
        scanf("%d",&choice);
    }
    return head;
}
struct node* searchElement( struct node* head){
    int num;
    printf("enter the search element: \n");
    scanf("%d",&num);
    struct node* temp = head;
    if(temp == NULL){
        printf("empty list");
        return ;
    }
    else{
        temp = head;
        while(temp != NULL && temp->data != num)
        {
                temp = temp->next;
        }
        if(temp == NULL)
        {
            printf("Element not found\n");
            return head;
        }
        else
        {
            printf("Element found:%d",temp->data);
            return head;
        }
    }
    return head;
}
struct node* searchNode(struct node* head){
    int pos , i = 1;
    temp = head;
    printf("enter the position: \n");
    scanf("%d",&pos);
    while(i<pos){
        temp = temp->next;
        i++;
    }
    printf("%d",temp->data);
}

int display(struct node * head,int count){
    struct node *temp;
    temp = head;
    while(temp != 0)
    {
        printf("%d",temp->data);
        temp = temp->next;
        ++count;
    }
    printf("\ncount = %d",count);
    return count;
}
int main()
{
    struct node *head = 0;
    int choice =1,option = 1 ;
    int count = 0;
    while(choice)
    {
        printf("\n1.create node\n");
        printf("2.search value by element\n");
        printf("3.search value by node\n");
        printf("4.Display\n");
        printf("5.exit\n");
        printf("enter your choice:");
        scanf("%d",&option);
        switch(option){
        case 1 :
            head = createNode(head);
            break;
        case 2:
            head = searchElement(head);
            break;
        case 3:
            head = searchNode(head);
            break;
        case 4:
            count = display(head,count);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
