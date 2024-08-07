#include <iostream>
/* Coding exercise 9. Eliminate duplicates, then print the number and values 
of remaining unique integers in the array (of less than 30 items). */

void unique_numbers(int numbers[], unsigned int collection_size) {
/* Solution start */
    const unsigned int MAX_SIZE{30}; // collection_size is less
    unsigned int unique_count{collection_size}; // count of unique numbers
    int filtered[MAX_SIZE]; // array for unique numbers, up to [unique_count-1] relevant
    bool unique_found[MAX_SIZE]; //at first: all true; at the recurring numbers: false
    for (int i{0}; i < MAX_SIZE; i++) {
        unique_found[i] = true;
    }

    for (int i{0}; i < collection_size; i++) {
        //compare to following numbers in collection,
        //if same number is found, mark that as false
        for (int j{i+1}; j < collection_size; j++) {

            if (!unique_found[j] || !unique_found[i]) {
                continue; // comparison was made earlier
            }
            if (numbers[i] == numbers[j]) {
                unique_found[j] = false;
                unique_count--;
            }
        }
    }

    std::cout << "The collection contains " << unique_count << " unique numbers, ";
    std::cout << "they are : ";
    for (int i{0}, j{0}; i < collection_size; i++) {
        if (unique_found[i]) {
            filtered[j] = numbers[i]; // copy values to new array
            std::cout << filtered[j++] << " ";
        }
    }
/* Solution end */
}

int main(){
    unsigned int data_size{12};
    int data[12]{3,3,4,2,1,8,6,3,6,7,4,2};
    
    std::cout << "data array:" << std::endl;
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    unique_numbers(data, data_size);
    return 0;
}