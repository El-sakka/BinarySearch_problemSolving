# /*
the problem is to find the last or the first occurance
of an array
ex 1,3,10,10,10,14,15
so which 10 will binary search found ?*/

/*
second problem is to count the repeated number in sorted array
ex ,2,2,2,4,4,4,5,5,5,5,5
so how many 2 ? 3
how many 4 ? 3
how many 5 ? 5

her we have 2 solution first using linear search but still
in worst case O(n)
so to made it o(log n)
get the first & last
the the count = last - first +1;
*/
