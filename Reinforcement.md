## Summary Of Notation.

> - s  - state
> - a  - action
> - S  - set of all non-terminal state
> - S+ - set of all states including the terminal state



### Week 1
**Chapter 2**

`Multi-arm Bandits `
---------------------
- Evaluative Feedback and Instructive Feedback.
- Conflict between exploration and exploitation.
- At=argmax(Qt(a)); how to select an action.
- Greedy v/s e-Greedy
- Optimistic Initial Values ~ ` Method is only suited for stationary problems.`
- Stochastic approximation theory ~ `Some formuals are there. I don't know how they were derived.`
- Upper-Confidence-Bound Action Selection ~ `e-Greedy randomly picks up an action for exploration but this method
chooses action baesd on how close their estimates are to being amximal and the unvertainties in those estimates.`
- Associative Search ~ `There is no need to associate different actions with different situations.(Non-associateive)`
- **Gradient Bandit** algorithms estimate not action values, but action preferences, and favor the more preferred actions in a graded probabalistic manner using a soft-max  distribution. 
- Each action affects the immediate reward in **N-Armed Bandit Problem** problem if actions are allowed to affect the next situation as well as the reward, then we have the full reinforcement learning problem. Also **N-Armed Bandit Problem** is non associative search.

### Week 2 and Week 3
**Chapter 3**

`Finite Markov Decision Processess`
------------------------------------
- If the state and action spaces are finite for a Reinforcement Learning markov property, then it is called a finite MDP. Finite MDPs are particularly important to the theory of reinforcement learning. 
- There is always at least one policy that is better than or equal to all other policies. This is called an optimal policy. 
- State-action pair (s,a) gives the expected return for taking action **a** in state **s** and thereafter following an optimal policy. 
- A policy's value function assign to each state, or state-action pair, the expected return from that state, or state-action pair, given that the agent uses the policy. 
- The optimal value functions assign to each state, or state-action pair, the largest expected return achievable by any policy.
- A policy whose value functions are optimal is an optimal policy.