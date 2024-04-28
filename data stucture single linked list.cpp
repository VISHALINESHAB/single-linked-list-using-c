#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
}*head;

void display(struct node*head) {
    
    while(head != NULL) {
    	
        printf("%d ", head->data);
        head=head->next;
    }
}

void insertatbegin(struct node** head) {
    struct node* f = (struct node*)malloc(sizeof(struct node));
    if(f == NULL) {
        puts("Memory allocation fails");
        return;
    }
    int input;
    puts("Enter the data");
    scanf("%d", &input);
    f->data = input;
    if(*head == NULL) {
        f->next = NULL;
        *head = f;
    } else {
        f->next = *head;
        *head = f;
    }
}


void insertatmid(struct node* temp) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    int input, n, i;
    puts("enter the data");
    scanf("%d", &input);
    puts("enter the position");
    scanf("%d", &n);
    for (i = 1; i < n - 1; i++) {
        temp = temp->next;
    }
    p->data = input;
    p->next = temp->next;
    temp->next = p;
}

void insertatend(struct node* temp) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    int input;
    puts("enter the data");
    scanf("%d", &input);
    while(temp->next != NULL) {
        temp = temp->next;
    }
    p->data = input;
    p->next = NULL;
    temp->next = p;
}


  void search(){struct node*temp=head;
int v=0,count=0,q;
 puts("enter the number");
    scanf("%d",&q);
while(temp!=NULL){
	temp=temp->next;
		count++;
	if(temp->data==q)
	{
	v=1;
	;
	break;
	}}
		if(v=1)
	{
	puts("element found");
	printf("%d\n",count);}
	else
	puts("element not found");
	
	

	
}
 totalnumber(){struct node*temp=head;
 int O=0;
 while(temp!=NULL){
 	
 	temp=temp->next;
 	O++;
 }
 	printf("%d",O);
 	
 }
 void di(){
 	if (head==NULL)
 	puts("the pointer");
 	else
 	head=head->next;
 	
 }
 void dl(){struct node*prev;
 	struct node* temp = head;
while(temp->next!=NULL){
	prev=temp;
  temp = temp->next;
}
prev->next = NULL;
 }
 void dm(){ int i,position;
 puts("enter the position");
 scanf("%d",&position);
 struct node*temp=head;
 	for( i=2; i< position; i++) {
  if(temp->next!=NULL) {
    temp = temp->next;
  }
}

temp->next = temp->next->next;
 }
	
	

int main() {
    struct node* ptr, *ptr2, *ptr3;
    ptr3 = (struct node*)malloc(sizeof(struct node));
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr2 = (struct node*)malloc(sizeof(struct node));
    head = (struct node*)malloc(sizeof(struct node));
    int a;
    //initialising
    head->data = 1;
    ptr->data = 1;
    ptr2->data = 2;
    ptr3->data = 3;
    
    head->next = ptr;
     
    //connecting
    ptr->next = ptr2;
    ptr2->next = ptr3;
    ptr3->next = NULL;
    
    while(1)
	{
	   printf("the operations performed in linked list \n\n1.to display\n2.to insert at begin \n3.to insert at mid \n4.to insert at end \n5.delete begin\n6.delete mid\n7.delete at last ");
   puts("\n8.search the position of a number\n 9.total numbers" );
    scanf("%d", &a);
    switch(a) {
        case(1):
            display(head);
            break;
        case(2):
            insertatbegin(&head);
            display(head);
            break;
        case(3):
            insertatmid(head);
            display(head);
            break;
        case(4):
            insertatend(head);
            display(head);
            break;
            case(5):
            di();
            display(head);
            break;
            case(6):
            dm();
            display(head);
            break;
            case(7):
            dl();
            display(head);
            break;
            
           
            case(8):
            search();
            break;
            case(9):
            totalnumber();
            break;
            
            
            
            
        default:
            puts("thank you");
            break;
    }
	}
    return 0;
}


