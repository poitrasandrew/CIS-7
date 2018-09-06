1. p  -> q  <=> q' -> p'
   p' v  q  <=> q' -> p'   Implication
   q  v  p' <=> q' -> p'   Commutative
   q' -> p' <=> q' -> p'   Implication
   
2. (p -> r) ^ (q -> r) <=> (p v q) -> r
   (p' v r) ^ (q' v r) <=> (p v q) -> r         Implication
   (p' v r) ^ (q' v r) <=> (p v q)' v r         Implication
   (p' v r) ^ (q' v r) <=> (p' ^ q') v r        De Morgan
   (p' v r) ^ (q' v r) <=> (p' v r) ^ (q' v r)  Distributive
   
3. (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
   give an example where this is not valid
   
   x = Animals
   A(x) = x is mammals
   B(x) = x is reptiles
   
   There exists an animal where it is a mammal and there exists an animal where it is a reptile.
   Not equivalent to.
   There exists an animal that is both a mammal and a reptile.
