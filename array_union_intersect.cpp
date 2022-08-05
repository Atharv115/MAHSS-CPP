// Code contributed By Hemanshini
#include <iostream>
using namespace std;

// GIVE A UNION B AND A INTERSECT B FROM 2 ARRAYS A AND B

int main()
{
	int A[5], B[5], C[10], D[10];
	int i, j, k = 0, l = 0, temp;

	// getting values
	cout << "give 5 values for A\n";
	for (i = 0; i < 5; i++)
		cin >> A[i];

	cout << "give 5 values for B\n";
	for (i = 0; i < 5; i++)
		cin >> B[i];

	// A intersect B
	cout << "\nintersect\n";

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i] == B[j])
			{
				C[k++] = A[i];
			}
		}
	}

	for (i = 0; i < k; i++)
	{
		cout << C[i] << " ";
	}

	// A union B
	cout << "\nunion\n";

	for (i = 0; i < 5; i++)
	{
		temp = 0;
		for (j = 0; j < l; j++)
		{
			if (D[j] == A[i])
			{
				temp = 1;
			}
		}

		if (temp == 0)
		{
			D[l++] = A[i];
		}
	}

	for (i = 0; i < 5; i++)
	{
		temp = 0;
		for (j = 0; j < l; j++)
		{
			if (D[j] == B[i])
			{
				temp = 1;
			}
		}

		if (temp == 0)
		{
			D[l++] = B[i];
		}
	}

	for (i = 0; i < l; i++)
	{
		cout << D[i] << " ";
	}
}
