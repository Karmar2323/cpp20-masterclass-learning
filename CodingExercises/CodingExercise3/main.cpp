#include <iostream>
#include <cmath>




double hexagon_area(){
    
    //Your code will go below this line
    double side{6.7};
   
    double hex_area = 3 * std::sqrt(3) / 2 * std::pow(side,2);

    //Your code will go above this line
    
    return hex_area;
}
int main(){
    std::cout << "area is " << hexagon_area() << std::endl;
    return 0;
}