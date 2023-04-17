#include <iostream>

void error_func1() {
    float array[1];
    std::cout << "val 2 is :" << array[2] << std::endl;
    return;
}

void* error_func2() {
    void* local_ptr;
    return local_ptr;
}

void error_func3() {
    int *p1;
    int *p3 = p1;
    int *p2 = nullptr;
    if (p3) {
        std::cout << "value of nullptr is:" << *p2 << std::endl;
    }
}


int main(void) {
    error_func1();
    error_func2();
    error_func3();
    return (EXIT_SUCCESS);
}