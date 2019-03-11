# C++ Non Copyable Macro #

### What is this repository for? ###

This is a macro to make a class non-copyable. It defines the copy and move constructors and assignment operators as deleted.

This is similar to the Q_DISABLE_COPY macro or others, however, these macros are usually just used to define the constructors and operators as private only, so these would be called in the `private` section of your class. This macro however uses the delete operator to tell the compiler to not generate the default constructors and operators.

### How do I get set up? ###

Copy this code straight into your project!

### Example Usage ###
```c++
class MyClass
{
public:
	MyClass() = default;
	~MyClass() = default;
	NON_COPYABLE(MyClass)
}
```