#include <iostream>
#include <cstdlib>

/* dynamic_cast<type> (expr) − The dynamic_cast performs a runtime cast that
verifies the validity of the cast. If the cast cannot be made, the cast fails
and the expression evaluates to null. A dynamic_cast performs casts on polymorphic
types and can cast a A* pointer into a B* pointer only if the object being pointed
to actually is a B object. */

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


void identify(Base& p);
void identify(Base *p);
Base *generate(void);