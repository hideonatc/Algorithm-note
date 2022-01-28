## **Algorithm**
**"finite,definite,effective procedure,with output"**

* finite: stop in finite steps  
* definite: must be clear  
* effective: basic and feasible  
* procedure: steps in logical order  
* output: must have (input: may have)  

## The Stable Matching Problem
**"Given the preference lists of n men and n women, find a stable matching if one exists."**  

* Perfect matching : Everyone is matched monogamously.  
* Stability : No incentive for some pair to undermine assignment by joint action.  

**Gale-Shapley Algorithm**  
 

```
1.  initialize each person to be free  
2.  while(some man m is free and hasn't proposed to every woman)do   
3.      w = highest ranked woman in m's list to whom m hasn't yet proposed  
4.      if(w is free)then  
5.          (m,w) become engaged  
6.      else if(w prefer m to her fiance m')then  
7.      (m,w) become engaged  
8.      m' become free  
9.  return the set S of engaged pairs
```  
* Male-optimal (Female-pessimal)  
* Termination : at most n^2 iterations  
* Perfection : everyone get married  
* Stablility : marriages are stable 

### **(Weighted) Interval Scheduling**  
---
**"Given set of jobs with start times and finish times (and weight) to find Max. cardinality (weight) subset of mutually compatible jobs."**  

### **Bipartite Matching**  
---
**"Given a bipartite graph, find Max. cardinality matching."**  

### **Independent Set**  
---
**"Given a graph, find Max. cardinality independent set."**  

### **Competitive Facility Location**  
---
**"Given a graph with weighted nodes, two players alternatively selecting nodes, and the dots aren't allowed to be chosen if its neighbor has been selected, find the Max. score players can get."**  

## **Solvability**  
* **Efficiently solvable**  
 * Interval Scheduling : nlogn greedy algorithm  
 * Weighted Interval Scheduling : nlogn dynamic programming  
 * Bipartite Matching : n^k max-flow based algorithm  

* **Hard**  
 * Independent Set : NP-complete  
 * Competitive Facility Location : PSPACE-complete
