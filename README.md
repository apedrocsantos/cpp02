## CPP02

### Ad-hoc polymorphism (function overload)

With function overloading, multiple functions can have the same name with different parameters. Multiple functions can have the same name as long as the number and/or type of parameters are different.

``` CPP
int plusFunc(int x, int y);
double plusFunc(double x, double y);
```

### Operator overload

+(1, 1) - functional notation (prefixed notation) (same as 1 + 1 (infixed notation)).
1.+(1)
1 1 + (post fixed notation (polish reverse notation))

`std::ostream & operator<<(std::ostream & o, Sample const & cp) {
	o << cp.getValue(); return o
}` - stream redirection output

### Orthodox Canonical Form

`MyClass::Myclass();` - Class constructor.\
`MyClass::~MyClass();` - Class destructor.
```Cpp
MyClass::MyClass(const MyClass & that) //Copy constructor - creates a copy of an instance.
{
	*this = that;
};

MyClass &MyClass=(const MyClass & that) //Copy assignment operator - copies the values of an instance to an already existing one and returns the altered instance.
{
	if (this != &that)
	{
		this->_value = that.getValue();
		this->_other_value = that.getOtherValue();

	}
	return (*this);
}
```
More [here](https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/), [here](https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three) and [**here**](https://cplusplus.com/articles/y8hv0pDG/).
