class Sort:
    def __init__(self):
        # initialize the variables which stores the status and sorted list of elements.
        self.res={}
        self.res['status'] = False
        self.res['sorted'] = []

    def bubble_sort(self, arr):
        """
        simple bubble sort algorithm implementation in a unsorted array.
        """

        # re-initialize before each method call
        self.__init__()

        # finding the length of the list
        length = len(arr)

        # loop through all the elements of the specified list..
        for i in range(0,length-1):

            # looping through all the adjacent elements to determine the corrent order
            for j in range(0,length-1):

                # checking the adjacemt pair of elements for the correct order
                if arr[j]>arr[j+1] :

                    # if NOT in corrent order SWAP the elements.
                    temp = arr[j+1]
                    arr[j+1] = arr[j]
                    arr[j] = temp

        # storing the result in the result object.
        self.res['status'] = True
        self.res['sorted'] = arr

        # return the result of the Sorting
        return self.res


a = [1,15,9,4,13,9,0,11,12]
x = Sort()

print ('Unsorted array : '+str(a))
# can access the status of the sorting using Sort.bubble_sort(LIST_OBJECT)['status']
# can access the status of the sorting using Sort.bubble_sort(LIST_OBJECT)['sorted']
print(x.bubble_sort(a))


b = [-11,15,30,-4,13,9,0,-1,12]
print ('Unsorted array : '+str(b))
print(x.bubble_sort(b))
