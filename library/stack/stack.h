#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

template<typename T>
class Stack {
private:
    std::vector<T> elements; // Sử dụng vector để lưu trữ các phần tử của stack

public:
    // Thêm một phần tử vào đỉnh stack
    void push(const T& element);

    // Loại bỏ phần tử ở đỉnh stack và trả về giá trị của nó
    T pop();

    // Xem phần tử ở đỉnh stack mà không loại bỏ nó
    T peek() const;

    // Kiểm tra xem stack có rỗng không
    bool isEmpty() const;

    // Trả về kích thước của stack
    size_t size() const;
};

#endif

// #include <iostream>
// #include "stack.h"

// int main() {
//     Stack<int> myStack;

//     myStack.push(1);
//     myStack.push(2);
//     myStack.push(3);

//     std::cout << "Top element: " << myStack.peek() << std::endl; // Should print 3

//     while (!myStack.isEmpty()) {
//         std::cout << "Popping: " << myStack.pop() << std::endl;
//     }

//     // This will throw an exception because the stack is empty
//     try {
//         myStack.pop();
//     } catch (const std::out_of_range& e) {
//         std::cout << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }

