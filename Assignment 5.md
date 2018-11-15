## Part 1: (10 points)

1. Show that the square root of 2 is irrational.

 Using contradiction, assume radical 2 is rational and can be expressed as b/a, where b and a have no common factors.
 - [ ] 2^(1/2) = b/a
 - [ ] 2 = b^2/a^2
 - [ ] b^2 = 2a^2
 
 b^2 is even so b must be even and divisible by 4. So q^2 and q must be even also. This is a contradiction that b and a must have no common factors so the square root of 2 cannot be rational.
 
 2. If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
 
 Exhaustive Proof.
 - [ ] 25 = 5 * 5 = 16 + 9 = (4 * 4) + (3 * 3)
 - [ ] 100 = 10 * 10 = 36 + 64 = (6 * 6) + (8 * 8)
 - [ ] 169 = 13 * 13 = 144 + 25 = (12 * 12) + (5 * 5)
 
 3. The sum of two odd integers is even.  Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1	
 
 Direct Proof.
  - [ ] Let x = 2n + 1 and y = 2m + 1
  - [ ] x + y = 2(n + m + 1)
  - [ ] Let k = n + m + 1
  - [ ] x + y = 2k
  - [ ] 2k is even by definition, therefore x + y is even
 
4. The sum of an even integer and it's square is even

Direct Proof.
- [ ] Let x = 2n and y = x^2 = 4n^2
- [ ] x + y = 2n + 4n^2
- [ ] x + y = 2(n + 2n)
- [ ] Let k = n + 2n
- [ ] x + y = 2k
- [ ] 2k is even by definition, therefore x + y is even

 5. If n squared is odd, then n is odd
 
 Contraposition.
 - [ ] If n is even then n squared is even
 - [ ] Let n = 2m
 - [ ] n * n = 4m^2
 - [ ] Let k = 2m^2
 - [ ] n * n = 2k Which is even by definition, by contrapositive law, If n squared is odd then n is odd.
 
 ## Part 2: (10 points)
 
1. Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)

- [ ] Base Case: n = 1
- [ ] 4*1-3 = 1(2*1-1)
- [ ] 1 = 1 true
- [ ] Inductive Hypothesis: Assume true for k show k + 1 is true
- [ ] k(2k-1) + 4k+1 = (k+1)(2(k+1)-1)
- [ ] 2k^2 -k+4k+1 = (k+1)(2k+1)
- [ ] 2k^2 +3k+1 = 2k^2 +3k+1 
- [ ] It has been proven when k=1, therefore the statment is true for n

2. Prove that for any positive integer number n, n^3 + 2n is divisible by 3			

- [ ] Base Case: n = 1
- [ ] 1^3 + 2 * 1 = 3

3. Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers
		Hint: 4^(3+1) = 4 * 4^3
		Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1   
  

