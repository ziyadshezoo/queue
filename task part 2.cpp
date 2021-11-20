#include<stdio.h>
int queue[5];
int MXSZ=5;
int rear=-1;
int front=-1;
int isFull()
{
	if (rear==MXSZ-1)
	{
		return 1;
	}
	else
	return 0;
}
int isEmpty()
{
	if (front<=-1||front>rear)
	{
		return 1;
	}
	else
	return 0;
	
}
int inque(int data)
{
	if(!isFull())
	{
		rear+=1;
		queue[rear]=data;
	}
	else	
	printf("overflow\n");
}
int deque()
{int data;
	if(!isEmpty())
	{
		data=queue[front];
		front+=1;
		return data;
	}
	else
	printf("underflow");
}
int peek()
{
	if (!isEmpty())
	return queue[front];
else
return 0;
}
int getRear()
{
	if(!isEmpty())
	{
		return queue[rear];
	}
	else
	return 0;
}
int display()
{
	if(isEmpty())
	printf("underflow");
	else
	for (int i =front;i<=rear;i++)
	printf("%d\n",queue[i]);
}
int main()
{front++;
inque(5);
inque(4);
inque(3);
inque(2);
inque(32);
inque(54);
inque(53);
display();
return 0;
}
