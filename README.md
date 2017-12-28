# Bloom Filter

A Bloom filter is a highly efficient data structure which tests membership of an element in O(1) time. Adding a new element to the filter is also in O(1) time. (P.S The O(1) part is not really true - depends on how efficient your hash function is and the type of the input). 

The catch in the Bloom filter is that it can generate false positives - i.e an element that isn't in the filter on querying can still return positive. 

Right now, a simple implementation for strings are done. Will extend for the general case and add tests.
