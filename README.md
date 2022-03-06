# Sort

This repository includes implementations of a few sort algorithms in `c++` :
- the bubble sort algorithm
- the quick sort algorithm
- a sorting algorithm based on trees
It also includes the `Tree` class, which can sort a `vector`, and tell if an element is stored in it. \
All of this algorithms should work to sort any class which has an overloaded `<<` operator.

# Using it

You can look the `main.cpp`, which is very self explainatory. \
To compile it, you can run :
``` bash
g++ -o test tree/node.cpp tree/tree.cpp main.cpp && ./test
```

# License

This code is published under the `GPL v3` license.