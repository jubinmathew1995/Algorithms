#include<iostream>
using namespace std;
class linear_search
{
    bool status;
    int index,length;
    // sets the status of the searched element,
    // ONLY SHOULD be used inside the class
    void setstatus(bool x)
    {
        status=x;
    }
    // sets the index of the searched element,
    // ONLY SHOULD be used inside the class
    void setindex(int x)
    {
        index=x;
    }
    public:
        // class constructor
        linear_search()
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
        void lsearch(int arr[],int ele)
        {
            if(getlength()==-1)
            {
                cout<<"Error, Array length not specified";
                return;
            }
            int i=0;
            re_init();
            while(i<getlength())
            {
                if(arr[i]==ele)
                {
                    setstatus(true);
                    setindex(i);
                    return;
                }
                else
                    i++;
            }

        }
};
int main()
{
    linear_search x;
    int a[]={1,3,5,2,4};
    int ele=4,len=5;
    x.setlength(len);
    cout<<"array ele : ";
    for(int i=0;i<x.getlength();i++)
        cout<<a[i]<<" ";

    x.lsearch(a,ele);
    cout<<"\n\nSearched element : "<<ele<<endl;
    cout<<"status : "<<x.getstatus()<<endl;
    cout<<"index : "<<x.getindex();

    ele=15;
    x.lsearch(a,ele);
    cout<<"\n\nSearched element : "<<ele<<endl;
    cout<<"status : "<<x.getstatus()<<endl;
    cout<<"index : "<<x.getindex();
    return 0;
}
