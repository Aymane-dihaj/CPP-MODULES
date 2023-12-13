#include "Array.hpp"

int main() {

    Array<float> *ptr = new Array<float>(5);

    (*ptr)[0] = 65;
    (*ptr)[1] = 32;
    (*ptr)[2] = 81;
    (*ptr)[3] = 500;
    (*ptr)[4] = 10;

    try {
        
        for(size_t i = 0; i < ptr->size(); i++)
            std::cout << "index: " << i << " [" << (*ptr)[i] << "] " << std::endl;
        
    } catch (std::exception &error) {
        std::cout << error.what() << '\n';
    }

    delete ptr;
    
    return 0;
}