class Search:
    def __init__(self):
        # status becomes true and index element index is stored if element is found
        self.res = {}
        self.res['status'] = False
        self.res['index'] = -1
        
    def linear_search(self, arr, ele):
        """
        General linear search, on unordered list
        """
        # Re-Initialize the parateters before the procedure call
        self.__init__()
        
        # start at position 0
        pos = 0
        
        # go untill the end of the list
        while pos < len(arr):

            # if match
            if arr[pos] == ele :
                self.res['status'] = True
                self.res['index'] = pos
                break

            # else move to the next element
            else:
                pos = pos+1

        # returns the object containing the status and the index of the searched element 
        return self.res

a = [1,2,3,4,5,9,10,11,12]
x = Search()

ele = 3
print ('array : '+str(a))
print('Searched element : '+str(ele))
print(x.linear_search(a,ele))

ele = 20
print ('\narray : '+str(a))
print('Searched element : '+str(ele))
print(x.linear_search(a,ele))
