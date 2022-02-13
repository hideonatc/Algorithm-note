## **Asymptotic Order - Properties**  
* **Transitivity** : If f(n) = Π(g(n)) and g(n) = Π(h(n)), then f(n) = Π(h(n)), where Π = O, Ω, Θ.  
* **Rule of sums** : f(n) + g(n) = Π(max{f(n),g(n)}), where Π = O, Ω, Θ.  
* **Rule of products** : If f(n) = Π(g(n)), h(n) = Π(k(n)), then f(n)*h(n) = Π(g(n)*k(n)), where Π = O, Ω, Θ.  
* **Transpose symmetry** : f(n) = O(g(n)) iff g(n) = Ω(f(n)).  
* **Reflexivity** : f(n) = Π(f(n)), where Π = O, Ω, Θ.  
* **Symmetry** :f(n) = Θ(g(n)) iff g(n) = Θ(f(n)).  
  
## **Polynomial-Time Complexity**  
>O(1) : constant  
>O(logn) : logarithmic  
>O(n^0.5) : sublinear  
>O(n) : linear  
>O(nlogn) : loglinear  
>O(n^2) : quadratic  
>O(n^3) : cubic  
>O(n^4) : quartic  
>not polynomial-time complexity  
>>O(2^n) : exponential  
>>O(n!) : factorial  
  
