#include <iostream>
/* Coding exercise 10. 
 Find out if collection of integers is sorted in ascending order.
 Set variable sorted to true if order is good, otherwise store false.
*/

bool is_collection_sorted(int numbers[], unsigned int collection_size) {
/* Solution start */
    bool sorted{true};
    for (int i{}; i < collection_size-1; i++) {
        if(numbers[i] > numbers[i+1]) {
            sorted = false;
            break;
        }
    }
/* Solution end */
    return sorted;
}

int main(){
    unsigned int data_size{12};
    //int data[12]{3,3,4,2,1,8,6,3,6,7,4,2};
    int data[12]{2,3,4,12,13,18,26,33,36,37,44,52};
    
    std::cout << "data array:" << std::endl;
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl << std::boolalpha;
    std::cout << "Sorted : " << is_collection_sorted(data, data_size);
    return 0;
}