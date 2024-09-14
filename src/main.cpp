#include<iostream>
#include<string>

int factorial(int num) {
    if (num == 0) { return 1; }
    else { return num*factorial(num - 1); }
}

int main(int argc, char *argv[]) {
    std::string number_argument = argv[1];

    int number = std::stoi(number_argument);

    try {
        if ( number < 0 ) { throw 1; };
    }
    catch(int num_exception) {
        std::cout << "Error: Number must be positive." << std::endl;
        return 1;
    }

    std::cout << factorial(number) << std::endl;

    return 0;
}
