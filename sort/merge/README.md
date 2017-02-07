# Merge Sort
Mergesort is a divide and conquer algorithm that was invented by John von Neumann in 1945.
With worst-case time complexity being Ο(n log n), it is one of the most respected algorithms. Merge sort first divides the array into equal halves and then combines them in a sorted manner.

### Algorithm
![alt tag](images/Merge-sort.gif)
<br/>First divide the list into the smallest unit (1 element), then compare each element with the adjacent list to sort and merge the two adjacent lists. 
Finally all the elements are sorted and merged.

###### Algorithm Generalised

The steps to be followed are :-

   Step 1 − if it is only one element in the list it is already sorted, return.<br/>
   Step 2 − divide the list recursively into two halves until it can no more be divided.<br/>
   Step 3 − merge the smaller lists into new list in sorted order.

###### Time Complexity
Time complexity of this algorithm is same for all the cases and is O(n log(n)).
	
### Sources
This algorithm and its content is taken from [Wikipedia](https://en.wikipedia.org/wiki/Merge_sort).
