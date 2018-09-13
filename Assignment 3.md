1.a. Translate into English: (M → H)∧(S →C)
    If math is easy then homework is done and if it is sunny then camping is fun.
    
1.b. Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
    (S ^ H) -> (M v C)
    
2.a. Use a truth table to determine whether this is a tautology, contradiction, or neither: (¬B → ¬A) → ((¬B → A) → B)
```
(¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B) | (¬B → ¬A) → ((¬B → A) → B)
|---|---|--- |--- | -------- | ------- | ---------------- | --------------------------
| T | T | F  | F  | T        | T       | T                | T
| T | F | F  | T  | F        | T       | F                | T
| F | T | T  | F  | T        | T       | T                | T
| F | F | T  | T  | T        | F       | T                | T

Tautology

2.b. Use a truth table to determine whether this is a tautology, contradiction, or neither: ((A → B)∧(B → ¬A)) → A
```
((A → B)∧(B → ¬A)) → A
```

| A | B | ¬A | A → B | B → ¬A | (A → B)∧(B → ¬A) | ((A → B)∧(B → ¬A)) → A
|---|---|--- | ----- | ------ | ---------------- | ----------------------
| T | T | F  | T     | F      | F                | T
| T | F | F  | F     | T      | F                | T
| F | T | T  | T     | T      | T                | F
| F | F | T  | T     | T      | T                | F

Neither

##3.a. - [ ] (p ∧ q) → r  <=> p → (q → r)
     - [ ] (p ^ q)' v r <=> p' v (q' v r) Implication x3
     - [ ]  p' v q' v r  <=> p' v q' v r   De Morgan's + Associative
     
3.b. - [ ] (q ∨ r ) → p        <=> (q → p) ∧ (r → p)
     - [ ] (q v r )' v p       <=> (q' v p) ^ (r' v p) Implication x3
     - [ ] (q' ^ r') v p       <=> (q' v p) ^ (r' v p) De Morgan's
     - [ ] (q' v p) ^ (r' v p) <=> (q' v p) ^ (r' v p) Distributive
     
4.a. 
