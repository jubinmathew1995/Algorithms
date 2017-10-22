/*
 * QUICKSORT
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int MAX = 1000;

//prototypes
int partition(int a[], int low ,int high);
void quicksort(int a[], int low ,int high);

int main()
{
	int a[MAX],n,i;
	srandom(time(NULL));

	printf("Enter the number of elements :");
	scanf("%d",&n);

	printf("The array elements are : ");
	for(i = 0; i < n; i++)
	{
		a[i] = random()%1000;
		printf("%d\t", a[i]);
	}
	
	quicksort(a,0,n-1);

	printf("\nThe sorted array is : ");

	for(i = 0; i < n; i++)
		printf("%d\t", a[i]);

	return 0;
}

int partition(int a[], int low ,int high)
{
	int i,j,pivot,temp;
	pivot = a[low];
	i = low;
	j = high + 1;
	while(i <= j)
	{
		do
			i++;
		while(pivot >= a[i]);

		do
			j--;
		while(pivot < a[j]);
		if(i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	}
	temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	return j;
}

void quicksort(int a[], int low ,int high)
{
	int mid;
	if(low < high)
	{
		//find the mid of the array
		mid = partition(a,low,high);

		//sort the lower half
		quicksort(a,low,mid - 1);

		//sort the upper half
		quicksort(a,mid + 1,high);
	}
}
