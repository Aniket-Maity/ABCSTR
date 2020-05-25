# Problem statement
------------------------
# This is a codeChef medium level problem
------------------------
Mike likes strings. He is also interested in algorithms. A few days ago he discovered for himself a very nice problem:

You are given an AB-string S. You need to count the number of substrings of S, which have an equal number of 'A'-s and 'B'-s.

Do you know how to solve it? Good. Mike will make the problem a little bit more difficult for you.

You are given an ABC-string S. You need to count the number of substrings of S, which have an equal number of 'A'-s, 'B'-s and 'C'-s.

A string is called AB-string if it doesn't contain any symbols except 'A' or 'B'. A string is called ABC-string if it doesn't contain any symbols except 'A', 'B' or 'C'.

* Input
The first line of the input contains an ABC-string S.

* Output
Your output should contain the only integer, denoting the number of substrings of S, which have an equal number of 'A'-s, 'B'-s and 'C'-s.

* The answer can go above a 32-bit integer. Please, use 64-bit integers for storing and processing data.

* Constraints
1 ≤ |S| ≤ 1 000 000; where |S| denotes the length of the given ABC-string.

* Example
* Input:
* ABACABA

* Output:
* 2
* Explanation
In the example you should count S[2..4] = "BAC" and S[4..6] = "CAB".
