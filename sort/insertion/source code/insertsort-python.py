class Sort:

    def insertsort(self, x):
        """

            input: takes a array of integer elements as input.
            output: return a sorted array.
            desc: sorts the given array using insertion sort algorithm.
        """
        for i in range(1,len(x)):
            # storing the element and its index, that is to be inserted.
            ele = x[i]
            index = i

            # finding the index where the element is to be inserted,
            # and shifting rest of the elements.
            while x[index-1] > ele and index>0:
                x[index] = x[index-1]
                index = index - 1

            # inserting the element at the calculated index.
            x[index] = ele

        # return the sorted array.
        return x


m = [154,3,30,5,9,1,11,19]
x = Sort()
print ('unsorted list : '+str(m))
print('Sorted list using Insertion Sort : '+str(x.insertsort(m)))
