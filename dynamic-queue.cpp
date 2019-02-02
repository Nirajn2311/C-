#include <iostream.h>
#include <conio.h>

struct node
{
	int data;
	node *next;
};

class queue
{
  private:
	node *front, *rear;

  public:
	queue()
	{
		front = rear = NULL;
	};
	void queueins();
	void queuedel();
	void queuedisp();
};

void queue::queueins()
{
	node *ptr;
	ptr = new node;
	cout << "Enter data: ";
	cin >> ptr->data;
	ptr->next = NULL;
	if (rear == NULL)
	{
		front = rear = ptr;
	}
	else
	{
		rear->next = ptr;
		rear = ptr;
	}
}

void queue::queuedel()
{
	node *ptr;
	ptr = front;
	if (front == NULL)
	{
		cout << "QUEUE UNDERFLOW!!!";
	}
	else
	{
		cout << "Data deleted: " << ptr->data;
		front = front->next;
		delete ptr;
		if (front == NULL)
		{
			rear == NULL;
		}
	}
}

void queue::queuedisp()
{
	node *ptr;
	ptr = front;
	if (front == NULL)
	{
		cout << "No elements";
	}
	else
	{
		cout << "Queue elements" << endl;
		while (ptr != NULL)
		{
			cout << ptr->data;
			ptr = ptr->next;
		}
	}
}

void main()
{
	clrscr();
	char ans;
	int opt;
	queue q1;
	do
	{
		cout << endl
			 << "QUEUE PROGRAM";
		cout << endl
			 << "1) Insert an element into queue";
		cout << endl
			 << "2) Delete an element from queue";
		cout << endl
			 << "3) Display queue";
		cout << endl
			 << "Enter your option: ";
		cin >> opt;
		switch (opt)
		{
		case 1:
			q1.queueins();
			break;

		case 2:
			q1.queuedel();
			break;

		case 3:
			q1.queuedisp();
			break;

		default:
			cout << "INVALID OPTION";
			break;
		}
		cout << endl
			 << "Do you want to continue(y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	getch();
}
