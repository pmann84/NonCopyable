# C++ Non Copyable Macro #

### What is this repository for? ###

This is a macro to make a class non-copyable. It defines the copy and move constructors and assignment operators as deleted.

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