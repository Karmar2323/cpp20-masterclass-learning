#include <iostream>

double get_value() {
    double value;
    std::cin >> value;
    return value;
}

int main(){
    double width;
    double length;
    double height;
    double base_area;
    double volume;

    std::cout << "Welcome to box calculator. ";
    std::cout << "Please type in length, width and height information: " << std::endl;
    std::cout << "length: ";
    length = get_value();
    std::cout << "width: ";
    width = get_value();
    std::cout << "height: ";
    height = get_value();
    
    base_area = width * length;
    volume = base_area * height;
    std::cout << "The base area is: " << base_area << std::endl;
    std::cout << "The volume is: " << volume << std::endl;

    return 0;
}