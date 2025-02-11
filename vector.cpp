#include <vector>
#include<iostream>
//

void part1() {
    //TODO: Implement part 1
    std::cout<<"Part 1 implement"<<std::endl;
    std::cout<<std::endl;

    /**
     * Goal: To check the size and capacity when I use vector
     *       to store a big amount of numbers
     * 
     * One vector
     */

     std::vector <int> vector;
    
     //initialize the vector
     for (int i=0;i<50000;i++){
         vector.push_back(i);
     }
     std::cout<< "After adding elements: Size = " << vector.size() 
     << ", Capacity = " << vector.capacity() << std::endl;
     
     //resize
     vector.resize(vector.size()/2);
     std::cout<< "After resizing: Size = " << vector.size() 
     << ", Capacity = " << vector.capacity() << std::endl;
     
 
     //optimize its memory usage and log the size and capacity again
     vector.shrink_to_fit();
     std::cout<<"After shrink_to_fit(): Size = " << vector.size() 
     << ", Capacity = " << vector.capacity() << std::endl;
     std::cout<<std::endl;
}

void part2() {
    //TODO: Implement part 2
    //TODO: Implement part 2
    /**
     * Goal: To check the memory usage of std::vector<bool> and 
     *      memory_usage_char
     * 
     * 2 vectors
     */
    std::cout<<"Part 2 implement"<<std::endl;
    std::vector<bool> vector_bool;
    std::vector<char> vector_char;

    for (int i=0;i<10000;i++){
        vector_bool.push_back(i);
    }
    for (int i=0;i<10000;i++){
        vector_char.push_back(i);
    }
    
    //The cost + the cost of itself
    std::size_t memory_usage_char = vector_char.size() * sizeof(char)+ sizeof(vector_char);


    //boolean is 1 bits, and it should devide by 8 to get the bytes
    std::size_t memory_usage_bool= (vector_bool.size()+7)/8;

    std::cout<<"Memory usage of std::vector<bool>: "<<memory_usage_bool<<" bytes"<<std::endl;
    std::cout<<"Memory usage of std::vector<char>: "<<memory_usage_char<<" bytes"<<std::endl;
}

int main() {
    part1();
    part2();
    return 0;
}