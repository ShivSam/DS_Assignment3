#include <iostream>
#include "dv_queue_array.h"

int main() {
    LinearQ obj(3);
    obj.display();
    obj.insert(5);
    obj.insert(3);
    obj.insert(8);
    obj.insert(7);
    obj.remove();
    obj.remove();
    obj.display();
    return 0;
}