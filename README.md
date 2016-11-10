Project 04 - Key-Value Store II
===============================

This [project] implements a variety of [map] backends for a basic [key-value
store].

[project]:          https://www3.nd.edu/~pbui/teaching/cse.30331.fa16/project04.html
[map]:              https://en.wikipedia.org/wiki/Associative_array
[key-value store]:  https://en.wikipedia.org/wiki/Key-value_database

Members
-------

Michael McRoskey (mmcrosk1)
Troy Prince (tprince)
David Mellitt (dmellitt)

Questions
---------

**1) What is complexity of each of the map backends (ie. Unordered, Chained, Open)? For each implementation, briefly explain the average, and worst case complexities of inserting and searching using the particular method in terms of Big-O notation.**

**UNORDERED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O( 1 ) | O( N ) |
| SEARCH      | O( 1 ) | O( 1 ) | O( N ) |

**CHAINED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O( 1 ) | O(logN)|
| SEARCH      | O( 1 ) | O( 1 ) | O(logN)|

**OPEN**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O( 1 ) | O( N ) |
| SEARCH      | O( 1 ) | O( 1 ) | O( N ) |

**2) Using map_bench, benchmark all eight map backends for when NITEMS is:**

| BACKEND          | NITEMS     | INSERT     | SEARCH     |
|------------------|------------|------------|------------|
| 	      unsorted |         10 |     0.0000 |     0.0000 |
| 	        sorted |         10 |     0.0000 |     0.0000 |
| 	           bst |         10 |     0.0000 |     0.0000 |
| 	        rbtree |         10 |     0.0000 |     0.0000 |
| 	         treap |         10 |     0.0001 |     0.0000 |
|        unordered |         10 |     0.0010 |     0.0000 |
| 	 chained-0.500 |         10 |     0.0000 |     0.0000 |
| 	 chained-0.750 |         10 |     0.0000 |     0.0000 |
| 	 chained-1.000 |         10 |     0.0000 |     0.0000 |
| 	 chained-5.000 |         10 |     0.0000 |     0.0000 |
| 	 chained-10.00 |         10 |     0.0000 |     0.0000 |
| 	 chained-100.0 |         10 |     0.0000 |     0.0000 |
| 	      open-0.5 |         10 |     0.0000 |     0.0000 |
| 	      open-0.6 |         10 |     0.0000 |     0.0000 |
| 	      open-0.7 |         10 |     0.0000 |     0.0000 |
| 	      open-0.8 |         10 |     0.0000 |     0.0000 |
| 	      open-0.9 |         10 |     0.0000 |     0.0000 |
| 	      open-1.0 |         10 |     0.0000 |     0.0000 |
| 	      unsorted |        100 |     0.0003 |     0.0002 |
| 	        sorted |        100 |     0.0005 |     0.0001 |
| 	           bst |        100 |     0.0002 |     0.0001 |
| 	        rbtree |        100 |     0.0002 |     0.0001 |
| 	         treap |        100 |     0.0002 |     0.0001 |
|        unordered |        100 |     0.0001 |     0.0000 |
| 	 chained-0.500 |        100 |     0.0001 |     0.0001 |
| 	 chained-0.750 |        100 |     0.0001 |     0.0001 |
| 	 chained-1.000 |        100 |     0.0001 |     0.0001 |
| 	 chained-5.000 |        100 |     0.0001 |     0.0001 |
| 	 chained-10.00 |        100 |     0.0001 |     0.0001 |
| 	 chained-100.0 |        100 |     0.0001 |     0.0000 |
| 	      open-0.5 |        100 |     0.0001 |     0.0000 |
| 	      open-0.6 |        100 |     0.0001 |     0.0000 |
| 	      open-0.7 |        100 |     0.0000 |     0.0000 |
| 	      open-0.8 |        100 |     0.0000 |     0.0000 |
| 	      open-0.9 |        100 |     0.0001 |     0.0000 |
| 	      open-1.0 |        100 |     0.0000 |     0.0000 |
| 	      unsorted |       1000 |     0.0200 |     0.0192 |
| 	        sorted |       1000 |     0.0464 |     0.0014 |
| 	           bst |       1000 |     0.0016 |     0.0014 |
| 	        rbtree |       1000 |     0.0017 |     0.0008 |
| 	         treap |       1000 |     0.0013 |     0.0011 |
|        unordered |       1000 |     0.0007 |     0.0004 |
| 	 chained-0.500 |       1000 |     0.0010 |     0.0005 |
| 	 chained-0.750 |       1000 |     0.0012 |     0.0005 |
| 	 chained-1.000 |       1000 |     0.0006 |     0.0006 |
| 	 chained-5.000 |       1000 |     0.0005 |     0.0005 |
| 	 chained-10.00 |       1000 |     0.0006 |     0.0006 |
| 	 chained-100.0 |       1000 |     0.0005 |     0.0005 |
| 	      open-0.5 |       1000 |     0.0007 |     0.0003 |
| 	      open-0.6 |       1000 |     0.0007 |     0.0003 |
| 	      open-0.7 |       1000 |     0.0008 |     0.0003 |
| 	      open-0.8 |       1000 |     0.0008 |     0.0003 |
| 	      open-0.9 |       1000 |     0.0009 |     0.0003 |
| 	      open-1.0 |       1000 |     0.0007 |     0.0007 |
| 	      unsorted |      10000 |     2.0003 |     1.9423 |
| 	        sorted |      10000 |     4.1846 |     0.0178 |
| 	           bst |      10000 |     0.0184 |     0.0175 |
| 	        rbtree |      10000 |     0.0188 |     0.0097 |
| 	         treap |      10000 |     0.0179 |     0.0179 |
|        unordered |      10000 |     0.0069 |     0.0035 |
| 	 chained-0.500 |      10000 |     0.0168 |     0.0071 |
| 	 chained-0.750 |      10000 |     0.0126 |     0.0070 |
| 	 chained-1.000 |      10000 |     0.0141 |     0.0049 |
| 	 chained-5.000 |      10000 |     0.0101 |     0.0066 |
| 	 chained-10.00 |      10000 |     0.0079 |     0.0075 |
| 	 chained-100.0 |      10000 |     0.0098 |     0.0099 |
| 	      open-0.5 |      10000 |     0.0122 |     0.0030 |
| 	      open-0.6 |      10000 |     0.0127 |     0.0029 |
| 	      open-0.7 |      10000 |     0.0089 |     0.0032 |
| 	      open-0.8 |      10000 |     0.0099 |     0.0036 |
| 	      open-0.9 |      10000 |     0.0152 |     0.0042 |
| 	      open-1.0 |      10000 |     0.0362 |     0.0033 |
| 	      unsorted |     100000 |        inf |        inf |
| 	        sorted |     100000 |        inf |        inf |
| 	           bst |     100000 |     0.2527 |     0.2257 |
| 	        rbtree |     100000 |     0.2496 |     0.1217 |
| 	         treap |     100000 |     0.1898 |     0.2036 |
|        unordered |     100000 |     0.0730 |     0.0521 |
| 	 chained-0.500 |     100000 |     0.1708 |     0.0704 |
| 	 chained-0.750 |     100000 |     0.2389 |     0.0637 |
| 	 chained-1.000 |     100000 |     0.1755 |     0.0671 |
| 	 chained-5.000 |     100000 |     0.2058 |     0.0717 |
| 	 chained-10.00 |     100000 |     0.2294 |     0.0955 |
| 	 chained-100.0 |     100000 |     0.1219 |     0.1285 |
| 	      open-0.5 |     100000 |     0.1133 |     0.0448 |
| 	      open-0.6 |     100000 |     0.1338 |     0.0443 |
| 	      open-0.7 |     100000 |     0.1552 |     0.0476 |
| 	      open-0.8 |     100000 |     0.1036 |     0.0428 |
| 	      open-0.9 |     100000 |     0.1383 |     0.0592 |
| 	      open-1.0 |     100000 |     1.2625 |     0.0422 |
| 	      unsorted |    1000000 |        inf |        inf |
| 	        sorted |    1000000 |        inf |        inf |
| 	           bst |    1000000 |     2.9996 |     2.8059 |
| 	        rbtree |    1000000 |     3.0514 |     1.4122 |
| 	         treap |    1000000 |     2.5333 |     2.4359 |
|        unordered |    1000000 |     0.9538 |     0.6105 |
| 	 chained-0.500 |    1000000 |     1.7828 |     0.7491 |
| 	 chained-0.750 |    1000000 |     2.2658 |     0.7812 |
| 	 chained-1.000 |    1000000 |     1.7532 |     0.8099 |
| 	 chained-5.000 |    1000000 |     2.3356 |     0.9897 |
| 	 chained-10.00 |    1000000 |     2.6211 |     1.1687 |
| 	 chained-100.0 |    1000000 |     4.2306 |     1.6935 |
| 	      open-0.5 |    1000000 |     1.1917 |     0.4800 |
| 	      open-0.6 |    1000000 |     1.1740 |     0.4762 |
| 	      open-0.7 |    1000000 |     1.3064 |     0.4954 |
| 	      open-0.8 |    1000000 |     1.4037 |     0.4822 |
| 	      open-0.9 |    1000000 |     1.8762 |     0.5050 |
| 	      open-1.0 |    1000000 |    17.9720 |     1.1618 |
| 	      unsorted |   10000000 |        inf |        inf |
| 	        sorted |   10000000 |        inf |        inf |
| 	           bst |   10000000 |    33.0250 |    33.6250 |
| 	        rbtree |   10000000 |    30.5560 |    14.5780 |
| 	         treap |   10000000 |    25.7080 |    28.8740 |
|        unordered |   10000000 |     9.7905 |     6.6894 |
| 	 chained-0.500 |   10000000 |    27.0820 |     8.1496 |
| 	 chained-0.750 |   10000000 |    22.4870 |     8.9494 |
| 	 chained-1.000 |   10000000 |    27.6030 |     9.2237 |
| 	 chained-5.000 |   10000000 |    24.0270 |    10.1260 |
| 	 chained-10.00 |   10000000 |    24.3310 |    12.3950 |
| 	 chained-100.0 |   10000000 |    41.2590 |     0.0000 |
| 	      open-0.5 |   10000000 |    14.7750 |     5.7210 |
| 	      open-0.6 |   10000000 |    12.2970 |     5.5376 |
| 	      open-0.7 |   10000000 |    12.7070 |     6.1139 |
| 	      open-0.8 |   10000000 |    14.4970 |     6.1466 |
| 	      open-0.9 |   10000000 |    17.8130 |     6.2004 |
| 	      open-1.0 |   10000000 |        inf |        inf |


**3) Using frequencies, compute the word count on at least three texts from Project Gutenberg using all eight different backends. Record the elapsed time and memory usage of each experiment in a Markdown table:**

| Backend     | Text                  | File Size | Time (seconds)| Mem  (Mb) |
|-------------|-----------------------|-----------|---------------|-----------|
|    unsorted |               Beo.txt |      294K |         6.271 |  2.117188 |
|      sorted |               Beo.txt |      294K |        12.902 |  2.167969 |
|         bst |               Beo.txt |      294K |         0.182 |  1.796875 |
|      rbtree |               Beo.txt |      294K |         0.168 |  1.753906 |
|       treap |               Beo.txt |      294K |         0.204 |  1.785156 |
|   unordered |               Beo.txt |      294K |         0.115 |  1.761719 |
|     chained |               Beo.txt |      294K |         0.136 |  5.992188 |
|        open |               Beo.txt |      294K |         0.115 |  3.789062 |
|    unsorted |              Tale.txt |      788K |        21.373 |  3.230469 |
|      sorted |              Tale.txt |      788K |        59.915 |  3.265625 |
|         bst |              Tale.txt |      788K |         0.534 |  2.382812 |
|      rbtree |              Tale.txt |      788K |         0.492 |  2.347656 |
|       treap |              Tale.txt |      788K |         0.587 |  2.355469 |
|   unordered |              Tale.txt |      788K |         0.313 |  2.468750 |
|     chained |              Tale.txt |      788K |         0.378 | 16.355469 |
|        open |              Tale.txt |      788K |         0.320 | 12.777344 |
|    unsorted |               Mis.txt |      3.2M |       191.403 |  6.292969 |
|      sorted |               Mis.txt |      3.2M |       728.664 |  6.343750 |
|         bst |               Mis.txt |      3.2M |         2.111 |  5.031250 |
|      rbtree |               Mis.txt |      3.2M |         2.050 |  5.007812 |
|       treap |               Mis.txt |      3.2M |         2.489 |  5.031250 |
|   unordered |               Mis.txt |      3.2M |         1.199 |  5.750000 |
|     chained |               Mis.txt |      3.2M |         1.484 | 56.804688 |
|        open |               Mis.txt |      3.2M |         1.296 | 48.808594 |

**4) After you have performed your benchmarks:**

- Discuss the relative performance of each of the new map implementation and try to explain the differences.

- What effect did NITEMS, load factor, and File Size have on the performance of each hash table backend in your experiments in terms of execution time and memory usage?

- In your opinion, which of the eight map backends is the best? Justify your conclusion by examining the trade-offs for the chosen backend and based on your experimental results.


Individual Group Contributions
------------------------------

**Michael McRoskey** (mmcrosk1): Implemented unordered.cpp. Worked on map.h, chained.cpp, map_bench.cpp, frequencies.cpp, and made a benchmark_table.sh script for README.md.

**Troy Prince** (tprince): 

**David Mellitt** (dmellitt): open.cpp, debugging, README


