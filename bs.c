
None selected 

Skip to content
Using Gmail with screen readers
in:sent 
Enable desktop notifications for Gmail.
   OK  No thanks
Conversations
8.9 GB of 15 GB used
Terms · Privacy · Program Policies
Last account activity: 10 hours ago
Details
#include <stdio.h>
#include <stdbool.h>

int Accept(int A[], int n)
{
	int i=0;
	bool c;
	while(i<n)
	{
		printf("\n%d: ", i + 1);
		c = scanf("%d", &A[i]);
		printf("%d %d",c,A[i]);
		if (c == 0)
		{
			printf("\nInvalid input2");
			return 0;
		}
		else if (i >= 1 && A[i - 1] > A[i])
		{
			printf("\nNot sorted in ascending order");
			return 0;
		}
		i++;
	}
	return 1;
}
int Bs(int A[], int n, int x)
{
	int l = 0, r = n, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (x == A[mid])
			return mid;
		else if (x > A[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}
void main()
{
	int A[58], n, x;
	bool c = 0;
	printf("\nEnter no. of elements: ");
	c = scanf("%d", &n);
	printf("\n**Note: Enter the elements one by one and in ascending order**\n\t%d\n",n);
	if (c == 1)
	{
		c = Accept(A, n);
		if (c == 1)
		{
			printf("\nenter no. to be searched: ");
			scanf("%d", &x);
			int index = Bs(A, n, x);
			if (index == -1)
				printf("\nnot found %d", index);
			else
				printf("\nelement found at %d", index+ 1);
		}
	}
	else
		printf("\ninvalid input1");
}
Document.txt
Displaying Document.txt.
