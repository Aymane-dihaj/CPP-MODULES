#include "Base.hpp"


Base *generate(void)
{
	srand(time(NULL));
	int		random;
	Base	*generate;

	random = rand() % 3;
	switch(random)
	{
		case 0: generate = new A; break;
		case 1: generate = new B; break;
		case 2: generate = new C; break;
	}
	return (generate);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "Pointer is A class" << std::endl;
	if (b)
		std::cout << "Pointer is B class" << std::endl;
	if (c)
		std::cout << "Pointer is C class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "P is pointing to an A object" << std::endl;		
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "P is pointing to an B object" << std::endl;
			
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "P is pointing to a C object" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		
	}
	
}