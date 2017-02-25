#include<stdio.h>
void main()
{
    int n,i,a[20];
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        a[i]=rand()%1000;

    printf("The array before sorting \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    mergesort(a,0,n-1);

    printf("\nThe array after sorting\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void mergesort(int a[],int low,int high)
{
    int mid;

    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);		// Recursion to sort first half of the array
        mergesort(a,mid+1,high);	// Recursion to sort second half of the array
        merge(a,low,mid,high);		// Merging of two sorted sub-arrays
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i=low,k=low;
    int j=mid+1;
    /*We need a Temporary array to store the new sorted part*/
	int c[20];
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i=i+1;
        }
        else
        {
            c[k]=a[j];
            j=j+1;
        }
        k=k+1;
    }

    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        c[k]=a[j];
        k++;
        j++;
    }
	/* Copy back the sorted array to the original array */
    for(i=low;i<=high;i++)
        a[i]=c[i];
}
