1. Definition:
"Only 1 instance of class can be existed at a time and provide a global access to it."


2. Singleton                             vs                    Monostate:
- Only 1 instance exist                                      - Class my or may not be instantiated
- Support lazy instantiation                                 - Not support lazy instance
- Require static instance method                             - All attributes are static
- Can support inheritance & polymorphism                     - Static methods cannot be overridden
- Existing classes can be made singletons                    - Difficult to change existing classes to monostate


3. Issues:
- Its name used directlty => violate SOLID principle (Dependencies Inversion Principle)
- Hard to make mock object for UT

4. Pros:
- Class itself controls the instantiation process
- Better than global variable
- Can allow multiple instances but limited

5. When to use it?
- Only 1 instance should be used because:
  => Mutiple instances cause data corruption
  => managing global or shared state
  => muliple instances are not required