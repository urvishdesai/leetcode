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
- hashmap of key( doubly linked list: deque of pair of (key, value))
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
- Traversal of string: expand from middle
- odd and even length palindrome

### 124. Binary Tree Maximum Path Sum
- similar to diameter
- check negatives
- return max of (left sum, right sum, self (if both negative))
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
- manipulation / rewiring of pointers
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
- bfs: for loop inside while runs one level of tree
- depth increases on every level

### 191. Number of 1 Bits
- hamming weight
- use bitwise & while >>

### 206. Reverse Linked List
- iterative: prev, curr next
- change next for curr and move the chain ahead by one
- recursive: give me a reverse from my next, base case for single node (already reversed)

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
- dp of single array: bottom up storing LIS up till curr index
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

### 70. Climbing Stairs
- recursive [n-1] + [n-2]
- memoize recursion
- bottom up till n

### 198. House Robber
- recursive max([n-1], [n-2] + [n])
- memoize recursion
- bottom up till n-1

### 256. Paint House
- dp array with index for each color

### 1025. Divisor Game
- play in mind for few divisors
- boils down to simple solution

### 746. Min Cost Climbing Stairs
- dp = min(cost[n-1] + dp[n-1], cost[n-2] + dp[n-2])

### 33. Search in Rotated Sorted Array
- if statement to find sorted array, compare mid to end and start
- if statement to check if value lies in sorted array

### 23. Merge k Sorted Lists
- priority queue with comparator
- handle nodes without space
- use prehead->next
- check if null while pushing

### 523. Continuous Subarray Sum
- running sum
- take running sum mod k
- store in hashmap
- check for special cases '0'

### 430. Flatten a Multilevel Doubly Linked List
1. Stack (easy to implement)
 - push next, then child
 - keep prev = curr, curr = stack.pop()
 - set prev->next and curr->prev in the end, check if prev exists
2. Recursion
 - take child and carry it in the arguments until NULL is found

### 1055. Shortest Way to Form String
- increment pointers to source and target
- increment total when source pointer resets

### 332. Reconstruct Itinerary
- post-order dfs
- add destinations to the front

### 529. Minesweeper
- dfs for empty 'E' squares

### 698. Partition to K Equal Sum Subsets
- sort in descending order
- make k buckets
- keep inserting elements into buckets and backtrack

### 42. Trapping Rain Water
1. store maxleft and maxright at each index get min(l,r) - height
2. two pointers, compare which is smaller, left(->) right(<-), calc area while traversal

### 88. Merge Sorted Array
- use two pointers and merge
- save space by starting from back

### 96. Unique Binary Search Trees
- # of trees with i-1 values on left * # trees with n-i values on right

### 329. Longest Increasing Path in a Matrix
- DFS with memoization
- no need for passing direction, since traversing increasing order

### 131. Palindrome Partitioning
- bactrack on partition cut
- for in recursion

### 132. Palindrome Partitioning II
- to implement
- see both submissions
- eliminate ispalindrome function

### 152. Maximum Product Subarray

### 11. Container With Most Water

### 1057. Campus Bikes

### 139. Word Break
- recursion with for loop
- find prefix string and apply recursion for remaining part
- memoize array at start index

### 140. Word Break II

### 208. Implement Trie (Prefix Tree)

### 79. Word Search

### 212. Word Search II

### 127. Word Ladder

### 126. Word Ladder II

### 221. Maximal Square

### 456. 132 Pattern

### 322. Coin Change

### 518. Coin Change 2

### Maximize value of k coins from n stacks
http://notexponential.com/633/maximize-value-of-coins-from-k-stacks-of-n-coins-each

### 554. Brick Wall
- Hashmap of < gaps, value >, traversal
- Optimize by iterating over possible gap values

### 415. Add Strings
- Reverse traversal
- reverse() function for string
- Optimization by not adding leading zeros directly

### 22. Generate Parentheses

### 301. Remove Invalid Parentheses

### 76. Minimum Window Substring

### 4. Median of Two Sorted Arrays

### 297. Serialize and Deserialize Binary Tree

### 279. Perfect Squares

### 64. Minimum Path Sum

### 120. Triangle

### 1110. Delete Nodes And Return Forest

#### Tips
- check limits, use long long
- iteration > recursion (use stack)
- Convert recursion to DP (using memoization) wherever possible
- use static comparator for sort
- priority queue = maxheap, comparator: return a < b;
- heap is a complete binary tree
- complete binary tree (eg. heap) can be implemented using an array
- recursive traversal for trees
- send values from leaves to roots using recursion and global variable
- k + sorted = priority queue
- DP: recursion -> memoization -> bottom-up
- Read until EOF: while(cin>>x)
- KMP: https://leetcode.com/problems/shortest-palindrome/discuss/60113/Clean-KMP-solution-with-super-detailed-explanation

#### Standard codes:
- Recursion -> iteration, DFS

- Two pointers (start, end) while inside for

- Backtracking, Memoization

- BFS

- Binary Search

- Tree recursion operations (Max sum, Diameter)

- Linked list -> reverse, (fast, slow)

- Toposort

- Union-find

- Trie

- string handling using strtok and istringstream
"""
#include <iostream>
#include <sstream>

std::string input = "abc,def,ghi";
std::istringstream ss(input);
std::string token;

while(std::getline(ss, token, ',')) {
    std::cout << token << '\n';
}
"""

- comparator for priority queue (Class Compare)

- sort comparator