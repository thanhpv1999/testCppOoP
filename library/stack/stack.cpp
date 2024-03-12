#include "stack.h"

// Thêm một phần tử vào đỉnh stack
template<typename T>
void Stack<T>::push(const T& element) {
    elements.push_back(element);
}

// Loại bỏ phần tử ở đỉnh stack và trả về giá trị của nó
template<typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack::pop(): stack is empty");
    }
    T topElement = elements.back();
    elements.pop_back();
    return topElement;
}

// Xem phần tử ở đỉnh stack mà không loại bỏ nó
template<typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack::peek(): stack is empty");
    }
    return elements.back();
}

// Kiểm tra xem stack có rỗng không
template<typename T>
bool Stack<T>::isEmpty() const {
    return elements.empty();
}

// Trả về kích thước của stack
template<typename T>
size_t Stack<T>::size() const {
    return elements.size();
}
