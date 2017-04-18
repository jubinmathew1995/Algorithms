#include<iostream>
using namespace std;
class insertion_sort
{
    int length;
    public:
        // class constructor
        insertion_sort()
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
        void isort(int arr[])
        {
            int indexPosition,valueToInsert;

            for(int i=1;i<getlength();i++)
            {
                // value to be inserted at a specific index.
                valueToInsert = arr[i];
                indexPosition = i;

                // finding the index where it is to be placed.
                while ((arr[indexPosition-1] > valueToInsert)&&(indexPosition>0))
                {
                    arr[indexPosition] = arr[indexPosition-1];
                    indexPosition -= 1;
                }

                // placing the element at that index.
                arr[indexPosition] = valueToInsert;
            }
        }
};
int main()
{
    insertion_sort x;
    int a[]={1,13,5,17,9};
    int b[]={-3,0,12,-2,10};
    int len=5;

    x.setlength(len);

    // case 1
    cout<<"unsorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";
    x.isort(a);
    cout<<"\nSorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";

    // case 2
    cout<<"\n\nunsorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<b[i]<<" ";
    x.isort(b);
    cout<<"\nSorted array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
