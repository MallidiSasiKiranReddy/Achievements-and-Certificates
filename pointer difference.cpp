#include <iostream>
void func_old(int *ptr)
{
    std::cout << *ptr << std::endl;
}
void func_new(const int &ptr)
{
    
    std::cout << ptr << std::endl;
}
int main()
{
    int a = 5;
    func_old(&a);
    int b=4;
    func_new(b);
    return 0;
}