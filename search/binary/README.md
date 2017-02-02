# Binary Search
Binary search, also known as half-interval search or logarithmic search,
is a search algorithm that finds the position of a target value within a sorted array.
Binary search compares the target value to the middle element of the array;
if they are unequal, the half in which the target cannot lie is eliminated and the
search continues on the remaining half until it is successful.

### Algorithm
![alt tag](images/binary-and-linear-search-animations.gif)

###### Algorithm Generalised

Given an array A of n elements with values or records A0 ... An−1, sorted such that A0 ≤ ... ≤ An−1,
and target value T, the following subroutine uses binary search to find the index of T in A.

	1. Set L to 0 and R to n − 1.
	2. If L > R, the search terminates as unsuccessful.
    3. Set m (the position of the middle element) to the floor (the largest previous integer) of (L + R) / 2.
    4. If Am < T, set L to m + 1 and go to step 2.
    5. If Am > T, set R to m – 1 and go to step 2.
    6. Now Am = T, the search is done; return m.


###### Time Complexity
    Worst-case performance	-- O(log n)
    Best-case performance	-- O(1)
    Average performance	    -- O(log n)
### Sources
This algorithm and its content is taken from [Wikipedia](https://en.wikipedia.org/wiki/Linear_search).
