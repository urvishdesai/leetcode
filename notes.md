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

####Tips
- check limits, use long long
- iteration > recursion (use stack)
- Convert recursion to DP wherever possible
- use static comparator for sort
- comparator for priority queue
- string handling using strtok and istringstream
