class Search:
    def __init__(self):
        # initialize the variables which stores the status and index of the searched elements.
        self.res={}
        self.res['status'] = False
        self.res['index'] = -1

    def binary_search(self, arr, ele):
        """
        simple binary search algorithm implementation in a sorted array.
        """

        # re-initialize before each method call
        self.__init__()

        # initializing the low and high pointers with a initial value
        low=0
        high=len(arr)-1

        # loop should continue untill the lower pointer exceeds the high pointer.
        while low<=high:

            # finding the index of the middle element
            mid=(low+high)//2

            # if element found, return the result
            if arr[mid] == ele:
                self.res['status'] = True
                self.res['index'] = mid
                break

            else:
                # if ele is greater than middle element, move the search to the upper bound half of the array
                if arr[mid]<ele:
                    low = mid+1

                # if element is less than the middle element, the search in the lower bound half of the array    
                else:
                    high = mid-1

        # return the result of the search
        return self.res


a = [1,2,3,4,5,9,10,11,12]
x = Search()

ele = 1
print ('array : '+str(a))
print('Searched element : '+str(ele))
print(x.binary_search(a,ele))

ele = 12
print ('\narray : '+str(a))
print('Searched element : '+str(ele))
print(x.binary_search(a,ele))

