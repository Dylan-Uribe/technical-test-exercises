#include <iostream>

void fizz_buzz() {

    for(int i = 1; i <= 50; i++) {

        if(i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if(i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        }
        else if(i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }
    }
}

int main() {

    fizz_buzz();

    return 0;
}
