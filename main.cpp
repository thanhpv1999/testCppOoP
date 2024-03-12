#include <iostream>
#include <iomanip>
#include "./library/point/point.h"
#include "./library/circle/circle.h"
#include "./library2/req/req.h"
#include "./library/squa/squa.h"
#include "./library/linkedList/linkedList.h"

#define VERSION "1.0.2"
#define TAG "main"
using namespace std;

int main(){
    cout << "Hello winDev:" << endl;

    LinkedList list;

    list.append(1);
    list.prepend(0);
    list.append(2);
    list.insertAfter(list.search(1), 1);
    list.insertAfter(list.search(2), 1);

    std::cout << "Danh sach sau khi them: ";
    list.printList();

    list.remove(1);  // Xóa một node với giá trị 1

    std::cout << "Danh sach sau khi xoa: ";
    list.printList();

    // Clear the list
    list.clear();
    std::cout << "Danh sach sau khi xoa toan bo: ";
    list.printList();


    return 0;
}