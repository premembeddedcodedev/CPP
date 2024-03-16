#include <iostream>
class A {
public:
    ~A()
    {
            std::cout << "~A() called.\n";
    }
};

void f(A &a)
{
    // a running out of scope...
	std::cout << "running out of scope";
}

int main()
{
    A a;
    std::cout << "calling f()\n";
    f(a);
    std::cout << "done calling f()\n";
    return 0;
}
