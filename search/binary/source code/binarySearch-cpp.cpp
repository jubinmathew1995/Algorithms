#include<iostream>
using namespace std;
class binary_search
{
    bool status;
    int index,length;
    // sets the status of the searched element, ONLY SHOULD be used inside the class
    void setstatus(bool x)
    {
        status=x;
    }
    // sets the index of the searched element, ONLY SHOULD be used inside the class
    void setindex(int x)
    {
        index=x;
    }
    public:
        // class constructor
        binary_search()
        {
            status=false;
            index=-1;
            length=-1;
        }
        // Used to re-initialize the parameters
        void re_init()
        {
            status=false;
            index=-1;
        }
        // used to set the array's length/size
        void setlength(int x)
        {
            length=x;
        }
        // used to get the array's length/size
        int getlength()
        {
            return length;
        }
        // used to get the searched element status
        bool getstatus()
        {
            return status;
        }
        // used to get the searched element index
        int getindex()
        {
            return index;
        }
        //searches the element in the specified array
        void bsearch(int arr[],int ele)
        {
            if(getlength()==-1)
            {
                cout<<"Error, Array length not specified";
                return;
            }
            int i=0,low=0,high=getlength(),mid=0;
            re_init();
            while(low<=high)
            {
                mid=(low+high)/2;
                if(arr[mid]==ele)
                {
                    status=true;
                    index=mid;
                    break;
                }
                else
                {
                    if(arr[mid]<ele)
                        low=mid+1;
                    else
                        high=mid-1;
                }
            }
        }
};
int main()
{
    binary_search x;
    int a[]={1,3,5,7,9};
    int ele=1,len=5;
    x.setlength(len);
    cout<<"array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";

    x.bsearch(a,ele);
    cout<<"\n\nSearched element : "<<ele<<endl;
    cout<<"status : "<<x.getstatus()<<endl;
    cout<<"index : "<<x.getindex();

    ele=9;
    x.bsearch(a,ele);
    cout<<"\n\nSearched element : "<<ele<<endl;
    cout<<"status : "<<x.getstatus()<<endl;
    cout<<"index : "<<x.getindex();
    return 0;
}
