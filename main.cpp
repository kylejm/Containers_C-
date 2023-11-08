#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <string>

void array(){

    int array_a[10]; // Allocates memory on the stack

    int* array_b = new int[10]; // Allocates memory on the heap
    delete[] array_b; // Need to deallocate

    // Lets try using the container array

    std::array<int, 5> c;

    // Lets try using an iterator

    for (std::array<int, 5>::iterator i = c.begin(); i != c.end(); ++i){
        *i = 1;
        //std::cout << *i << std::endl;
    }

    // Or we can use auto

    for (auto i = c.begin(); i != c.end(); ++i){
        *i = 2;
        //std::cout << *i << std::endl;
    }

    for (auto i : c){
        i = 3;
        //std::cout << i << std::endl;
    }

}

void vector(std::vector<int> vec_input){

    // Can be dynmacially allocated
    // Because of this we cannot assume that there are any valid pointers to this memory

    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    /*
    std::cout << vec.size() << std::endl;
    std::cout << vec[0] << std::endl;
    std::cout << vec[1] << std::endl;
    std::cout << vec[2] << std::endl;
    */

    // whether we call the input vector with an & in front does not seem to matter to how we push back elements

    vec_input.push_back(1);
    vec_input.push_back(2);
    vec_input.push_back(3);

    /*
    std::cout << vec_input.size() << std::endl;
    std::cout << vec_input[0] << std::endl;
    std::cout << vec_input[1] << std::endl;
    std::cout << vec_input[2] << std::endl;
    */

}

void lists (){

    // unlike vectors we can add to the front or the back of the list

    std::list<int> numbers;

    numbers.push_front(0);
    numbers.push_back(1);
    numbers.push_front(-1);

    for (auto i : numbers){
        std::cout << i << std::endl;
    }
    std::cout << numbers.size() << std::endl;
    // std::cout << numbers[1] << std::endl; cannot do this


}

int main(){

    //std::cout << "Starting Container Demo\n" << std::endl;

    array();
    std::vector<int> vec_input;
    vector(vec_input);
    lists();


    return 0;


}
