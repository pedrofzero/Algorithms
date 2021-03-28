# bubble sort

### It is a simple algorithm, although terrible performance wise. The process goes about  stepping through the list, comparing adjacent elements and swapping them if their order is incorrect. 

### The optimized code includes a swapped variable to track whether a change has been made in the list's order, so that, in case that the list is already sorted, we don't run into O(n<sup>2</sup>) time complexity.
<!-- ### There are two files, one being faster than the other. Though it's obvious that the slower solution is less viable, they're fairly similar so I decided to keep both.

### The main difference between the two is a variable that keeps track of whether a change has been made in the array's order.
-->
---

## this algorithm should not be used due to:

* ### its **speed**, having in account the worst case scenario is O(n<sup>2</sup>). the best scenario would be O(n) if and only if the list is already sorted.
* ### its **inefficiency**. you are not likely to run in trouble using this sorting algorithm if you are working in a small project.

