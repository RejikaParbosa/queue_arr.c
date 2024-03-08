// Implementation of Queue using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int queue_arr[MAX];
int rear=-1;
int front=-1;

insert()
{
	int added_item;
	if(rear==MAX-1)
		printf("Queue Overflow\n");
	else
	{
		if(front==-1)
			front=0;
		printf(" Input the element for adding in queue: ");
		scanf("%d",&added_item);
		rear=rear+1;
		queue_arr[rear]=added_item;
	}
}

del()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow\n");
		return;
	}
	else
	{
		printf("Element deleted from queue is: %d\n",queue_arr[front]);
		front=front+1;
	}
}


display()
{
	int i;
	if(front==-1)
		printf("Queue is empty\n");
	else
	{
		printf("Queue is:\n");
		for(i=front;i<=rear;i++)
			printf("\n %d",queue_arr[i]);
		printf("\n");
	}
}

main()
{
	int choice;
	while(1)
	{
		printf("\n");
		printf("\tMENU\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
		}
	}
}

