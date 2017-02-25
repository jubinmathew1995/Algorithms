class Sort:

    def merge(self, arr1, arr2):
        """

                Merges the two sorted lists
        """
        arr3 = []
        while len(arr1) != 0 and len(arr2) != 0:
            if arr1[0] < arr2[0]:
                arr3.append(arr1[0])
                arr1.remove(arr1[0])
            else:
                arr3.append(arr2[0])
                arr2.remove(arr2[0])
        if len(arr1) == 0:
            arr3 += arr2
        else:
            arr3 += arr1
        return arr3


    def mergesort(self, x):
        """

            Recursively sorts the first half and second half of the list.
        """
        if len(x) == 0 or len(x) == 1:
            return x
        else:
            middle = int(len(x)/2)
            a = self.mergesort(x[:middle])
            b = self.mergesort(x[middle:])
            return self.merge(a,b)



m = [154,3,30,5,9,1,11,19]
x = Sort()
print ('unsorted list : '+str(m))
print('Sorted list using Merge Sort : '+str(x.mergesort(m)))

