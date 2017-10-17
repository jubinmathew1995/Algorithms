#include<iostream>
using namespace std;
class bubble_sort
{
    int length;
    public:
        // class constructor
        bubble_sort()
        {
            length=-1;
        }
        // used to SET the array's length/size
        void setlength(int x)
        {
            length=x;
        }
        // used to GET the array's length/size
        int getlength()
        {
            return length;
        }
        //sorts the given unsorted array.
        void bsort(int arr[])
        {
            // Checks if the length of the array is specified or not.
            if(getlength()==-1)
            {
                cout<<"Error, Array length not specified";
                return;
            }
            // initialize the temperary variables.
            int i=0,j=0,temp=0;

            // this loop is used to traverse all the array elements
            for(i=0; i<getlength()-1;i++)
            {
                // this loop is used to check for adjacent elements.
                for(j=0;j<getlength()-i-1;j++)
                {
                  // if the adjacent elements are NOT in sorted order
                  if (arr[j]>arr[j+1])
                  {
                    // NOT in order, then SWAP the elements.
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                  }
                }
            }
            return;
        }
};
int main()
{
    bubble_sort x;
    int a[]={1,13,5,17,9};
    int b[]={-3,0,12,-2,10};
    int len=5;

    x.setlength(len);

    // case 1
    cout<<"unsorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";
    x.bsort(a);
    cout<<"\nSorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";

    // case 2
    cout<<"\n\nunsorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<b[i]<<" ";
    x.bsort(b);
    cout<<"\nSorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
