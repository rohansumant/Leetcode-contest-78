Solutions to Leetcode contest 78 along with my thoughts on some problems.

Problem C: ♥♥♥

I found this problem to be extremely beautiful. The key observation here draws upon the fact that probability distributions converge as your sample size increases. However, since the problem can tolerate error < 1e-6 we can effectively limit the value of N to values where a straightforward iterative solution can give a 'correct' answer.

Problem D:

This problem is damn good too. The trick is to note the array can be compressed by reducing the count of each element to its parity. Once that is done and if the total xor is non-zero, it is relatively straight-forward to see that the only way you can get a zero xor is by erasing all elements. Hence the answer is the parity of the length of remaining elements. Note that addition of a 0 needs to be handled seperately.
