#include <iostream.h>
#include <conio.h>

struct stack
{
	int data;
};

void main()
{
	clrscr();
	int top = -1, opt, size = 5;
	char ans;
	stack s[5];
	do
	{
		cout << endl
			 << "Stack Program";
		cout << endl
			 << "1) Push data into stack";
		cout << endl
			 << "2) Pop data from stack";
		cout << endl
			 << "3) Display stack";
		cout << endl
			 << "Enter your option: ";
		cin >> opt;
		switch (opt)
		{
		case 1:
			if (top >= size - 1)
			{
				cout << "STACK OVERFLOW!!!";
			}
			else
			{
				top++;
				cout << "Enter data: ";
				cin >> s[top].data;
			}
			break;

		case 2:
			if (top == -1)
			{
				cout << "STACK UNDERFLOW!!!";
			}
			else
			{
				cout << "Deleted data: " << s[top].data;
				top--;
			}
			break;

		case 3:
			if (top == -1)
			{
				cout << "No elements";
			}
			else
			{
				cout << "Stack Elements";
				for (int i = top; i >= 0; i--)
				{
					cout << endl
						 << s[i].data;
				}
			}
			break;

		default:
			cout << "INVALID OPTION!!!";
			break;
		}
		cout << endl
			 << "Do you want to continue(y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	getch();
}