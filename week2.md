## **Efficiency**  
* **platform-independent**  
* **instance-independent**  
* **worst-case focused** : A bound on the largest possible running time the algorithm could have.  
### **Scaling Efficiency**
* **Polynomial running time** :   There exists Const. c>0 and d>0 S.T.  on every input of size N, its running time is bounded by (cN)^d computational steps.  
---  
### **Asymptotic Order of Growth**  
Let T(n) be a function to describe the worst-case running time of a certain algorithm on a input of size n.  
* **Asymptotic upper bound** : T(n) ∈ O(f(n)) if there exist Const. c>0 and n0>=0 S.T. for all n>=n0 we have T(n)<=cf(n)  
* **Asymptotic lower bound** : T(n) ∈ Ω(f(n)) if there exist Const. c>0 and n0>=0 S.T. for all n>=n0 we have T(n)>=cf(n)  
* **Asymptotic tight bound** : T(n) ∈ Θ(f(n)) if T(n) is both O(f(n)) and Ω(f(n)).  
