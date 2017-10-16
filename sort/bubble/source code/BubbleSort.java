package bubblesort;

public class BubbleSort {
    private int length;
    // class constructor
    BubbleSort()
    {
        length = -1;
    }
    // used to SET the array's length/size
    public void setLength(int x)
    {
        length = x;
    }
    // used to GET the array's length/size
    public int getLength()
    {
        return length;
    }
    
    public void bsort(int[] arr)
    {
        // Checks if the length of the array is specified or not.
        if(getLength() == -1)
        {
            System.out.println("Error, Array length not specified");
            return;
        }
        // initialize the temperary variables.
        int i=0, j=0, temp=0;

        // this loop is used to traverse all the array elements
        for(i=0; i<getLength()-1; i++)
        {
            // this loop is used to check for adjacent elements.
            for(j=0; j<getLength()-i-1; j++)
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
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BubbleSort x = new BubbleSort();
        int[] a = {1, 13, 5, 17, 9};
        int[] b = {-3, 0, 12, -2, 10};
        int len = 5;
        
        x.setLength(len);

        // case 1
        System.out.print("unsorted array ele : ");
        for(int i=0; i<x.getLength(); i++)
            System.out.print(a[i] + " ");
        x.bsort(a);
        System.out.print("\nSorted array ele : ");
        for(int i=0; i<x.getLength(); i++)
            System.out.print(a[i] + " ");

        // case 2
        System.out.print("\nunsorted array ele : ");
        for(int i=0; i<x.getLength(); i++)
            System.out.print(b[i] + " ");
        x.bsort(b);
        System.out.print("\nSorted array ele : ");
        for(int i=0; i<x.getLength(); i++)
            System.out.print(b[i] + " ");
        System.out.println();
    }
    
}