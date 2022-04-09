1. Definition:
"Define a family of algorithms, encapsulate one and make them interchangeable.
Strategy lets the algorithm vary independently from client that use it"

2. Cons:
- Number of classes increase in the app
- Client must understand how the strategies differ and which one to use

3. Pros:
- Alternative to inheritance
- Alternative to conditional statements
- Each strategy provides a different implementation of the same behavior

4. When to use it?
- A class is tightly coupled with different algorithms
- Need different variants of an algorithm
- Many behavior of class are represented through conditional statements