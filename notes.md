### 734. Sentence Similarity
- Hashmap

### 737. Sentence Similarity II
- Union-find, Hashmap
- Uses recursive approach to find() ultimate parent using hashmap

### 482. License Key Formatting
- reverse traverse strings for shorter solution

### 2. Add two numbers
- Traverse linked list, initialise node
- pointer to address
- constructor for struct

### 445. Add Two Numbers II
- Additions to new list in one traversal
- Reverse Linked List in second traversal
- sync traverse through linked list of different lengths

### 222. Count Complete Tree Nodes
- brute force: Tree traversal = O(N)
- find index of elements of last row using depth
- check if exists function, finding mid decreasing depth recursion
- binary search within binary search = O((log N)^2)

### 146. LRU Cache
- hashmap of key( doubly linked list of pair of (key, value))
- using iterator for list

### 4. Median of Two Sorted Arrays

### 56. Merge Intervals
- handling vector of vector of int
- sort with comparator
- intervals start and end conditions
- while inside for

### 84. Largest Rectangle in Histogram
- monotonic stack to remove heights larger than current
- check largest while popping
- pop all in the end (add height 0 or -1 to the histogram at the end)
- using index in stack

### 5. Longest Palindromic Substring
- Traversal of string
- odd and even length palindrome

### 124. Binary Tree Maximum Path Sum
- similar to diameter
- check negatives
- return max of left sum, right sum, self (if both negative)
- global max path passing down the tree
- tree traversal

### 1007. Minimum Domino Rotations For Equal Row
- keep 2 counts for both arrays
- initial conditions for fixing values to compare

### 378. Kth Smallest Element in a Sorted Matrix
- priority queue with comparator (using class)
- pair (int, pair (int, int))
- traversing on matrix grid
- sorted matrix, adding to minheap: right only on first row, adding down on all elements

### 238. Product of Array Except Self
- running product
- traversing array forward and reverse
- exclude current index

### 200. Number of Islands
- DFS for grid of 1s and 0s
- check if visited using another grid passed by reference

### 3. Longest Substring Without Repeating Characters
- hash map for alphabet taking frequency
- while inside for
- start and end pointers
- char arithmetic

### 252. Meeting Rooms
- sort with comparator function

### 253. Meeting Rooms II
- priority queue (occupied rooms) with end times
- pop and push if room empty
- push if room busy

### 12. Integer to Roman
- use string to store order of ones and fives
- count tens, hundreds, thousands place

### 53. Maximum Subarray
- running sum while checking for negatives

### 235. Lowest Common Ancestor of a Binary Search Tree
- tree traversal with void return value

### 103. Binary Tree Zigzag Level Order Traversal
- level order traversal using bfs with queues
- use previous count for size of new level while popping from queue
- reverse alternate vectors while appending to result vector
- use result vector size for alternating reverse odd/even

### 21. Merge Two Sorted Lists
- manipulation of pointers
- can be done in place by pointing to nodes directly

### 338. Counting Bits
- https://www.geeksforgeeks.org/count-set-bits-in-an-integer/

### 19. Remove Nth Node From End of List
- linked list traversal
- two pointers
- start second pointer after n iterations of first pointer

### 20. Valid Parantheses
- stack of char
- open pushed, matching close pop
- check if stack empty at end

### 104. Maximum Depth of Binary Tree
- queue of nodes
- for loop inside while runs one level of tree
- depth increases on every level

### 191. Number of 1 Bits
- hamming weight
- use bitwise & while >>

### 206. Reverse Linked List
- iterative: prev, curr next
- change next for curr and move the chain ahead by one

### 190. Reverse Bits
- right shift num, get remainder 
- left shift result, add remainder

### 217. Contains Duplicate
- use set

### 371. Sum of Two Integers
- use & for carry
- use ^ for addition without carry
- use unsigned int for carry and <<

### 141. Linked List Cycle
- slow and fast pointers
- if they meet then true else false

### 121. Best Time to Buy and Sell Stock
- keep min val, max diff in loop

### 300. Longest Increasing Subsequence
- brute force: backtracking, 2^n, recursion for all possible combinations
- use indices in place of values
- memoization: convert recursion to memoisation
- dp of single array: bottom up storing lis up till curr index
- use max of max
- print path/values: storing indices

### 526. Beautiful Arrangement
- backtracking
- fix value at position, recursion for next position
- reduce space by swapping
- base condition : all positions fixed, add one arrangement/permutation

### 1130. Minimum Cost Tree From Leaf Values
1. DP
 - store max of each interval
 - dp(left, right) = minimize(max[left...i] * max[i+1...right] + dp(left, i) + dp(i+1, right))
 - use memoization for storing \[left\]\[right\]
1. One pass (Greedy + linked list ?)
 - https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/discuss/339959/One-Pass-O(N)-Time-and-Space
 - *problem translation*: remove min from two neigbours with cost a * b (to form a node), until whole tree is formed
 - minimize this cost
 - use stack to find min cost(neighbor a, neighbor b), pop min element
 - elements in stack represent sub-trees with max vals
 - finally, ascending order, merge trees in order (from top of stack) and add cost

#### Tips
- check limits, use long long
- iteration > recursion (use stack)
- Convert recursion to DP (using memoization) wherever possible
- use static comparator for sort
- comparator for priority queue
- string handling using strtok and istringstream
- recursive traversal for trees
- send values from leaves to roots using recursion and global variable
- k + sorted = priority queue
