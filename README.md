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
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**CHAINED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**OPEN**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**2) Using map_bench, benchmark all eight map backends for when NITEMS is:**

| BACKEND              | NITEMS     | INSERT     | SEARCH     |
|----------------------|------------|------------|------------|
|             unsorted |         10 |        0.0 |        0.0 |
|                  ... |        ... |        ... |        ... |

NOTE for Troy/David: run ./benchmark_table.sh to produce outputted table

**3) Using frequencies, compute the word count on at least three texts from Project Gutenberg using all eight different backends. Record the elapsed time and memory usage of each experiment in a Markdown table:**

| Backend     | Text                  | File Size | Elasped Time  | Memory    |
|-------------|-----------------------|-----------|---------------|-----------|
| Unsorted    | Beowulf.txt           | 0         | 0             |           |
| ...         | ...                   | ...       | ...           | ...       |

**4) After you have performed your benchmarks:**

- Discuss the relative performance of each of the new map implementation and try to explain the differences.

- What effect did NITEMS, load factor, and File Size have on the performance of each hash table backend in your experiments in terms of execution time and memory usage?

- In your opinion, which of the eight map backends is the best? Justify your conclusion by examining the trade-offs for the chosen backend and based on your experimental results.


Individual Group Contributions
------------------------------

**Michael McRoskey** (mmcrosk1): Implemented unordered.cpp. Worked on map.h, chained.cpp, map_bench.cpp, frequencies.cpp, and made a benchmark_table.sh script for README.md.

**Troy Prince** (tprince): 

**David Mellitt** (dmellitt):


