# Bloom Filter


A Bloom filter is a <b>highly efficient</b> data structure which tests membership of an element in O(1) time. Adding a new element to the filter is also in O(1) time. 
<em>(P.S The O(1) part is not really true - depends on how efficient your hash function is and the type of the input).</em> <br>

The <b>catch</b> in the Bloom filter is that it can generate false positives - i.e an element that isn't in the filter on querying can still return positive. <br>

This implementation is for strings only. Will add tests to add more clarity on usage.
