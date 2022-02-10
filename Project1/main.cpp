#include <iostream>
#include "my_math/addition.h"
#include "my_math/division.h"
#include "my_print/print_result.h"


int main() {

    float first_no, second_no, result_add, result_div;

    std::cout << "Enter first number : ";
    std::cin >> first_no;
    std::cout << "Enter second number : ";
    std::cin >> second_no;


    result_add = addition(first_no, second_no);
    result_div = division(first_no, second_no);

    printResult("Addition : ", result_add);
    printResult("Division : ", result_div);
    return 0;

}