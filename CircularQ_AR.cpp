#include <iostream>
#include "dv_queue_array.h"
int main(){
    CircularQ obj;
    //obj.display();
    //obj.remove();
    //obj.display();

    obj.insert(18);
    obj.insert(28);
    obj.insert(38);
    obj.insert(48);
    obj.insert(57);
    //obj.display();
    //obj.insert(68);
    //obj.display();
    obj.remove();
    obj.remove();
    obj.remove();
    obj.insert(90);
    std::cout<<"here it is:\n";
    obj.display();
}