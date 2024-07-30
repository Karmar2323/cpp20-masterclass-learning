#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    //Don't modify anything above this line
    //Your code should go below this line
    for (int number : numbers) {
        if (!(number % 3)) {
            std::cout << number << " ";    
        }
    }

    //Your code should go above this line
    //Don't modify anything below this line
    
    return 0;
}