# Linear Search
linear search or sequential search is a method for finding a target value within a list.
It sequentially checks each element of the list for the target value until a match is found
or until all the elements have been searched.

### Algorithm
![alt tag](images/linear_search.gif)

###### Algorithm for the example

Linear Search ( Array A, Value x)

    1. Set i to 1
    2. if i > n then go to step 7
    3. if A[i] = x then go to step 6
    4. Set i to i + 1
    5. Go to step 2
    6. Print Element x Found at index i and go to step 8
    7. Print element not found
    8. Exit



###### Algorithm Generalised

Given a list L of n elements with values or records L0 ... Ln−1, and target value T,
the following subroutine uses binary search to find the index of the target T in L.

    1. Set i to 0.
    2. If Li = T, the search terminates successfully; return i.
    3. Increase i by 1.
    4. If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.

	
###### Time Complexity
    Worst-case performance	-- O(n)
    Best-case performance	 -- O(1)
    Average performance	   -- O(n)
### Sources
This algorithm and its content is taken from [TutorialsPoint](https://www.tutorialspoint.com/data_structures_algorithms/linear_search_algorithm.htm)
and [Wikipedia](https://en.wikipedia.org/wiki/Linear_search).
