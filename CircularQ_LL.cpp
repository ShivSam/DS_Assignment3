#include <iostream>
#include <dv_queue_array.h>

int main() {
    short choice = 0;
    bool resume = true;
    int val = 0;

    CircularQL obj;

    while(resume){
        std::cout<<"Enter your choice\n1 PUSH\n2 POP\n3 DISPLAY\n4 EXIT"<<std::endl;
        std::cin>>choice;
        switch (choice){
            case 1:
                std::cout<<"Node Value?"<<std::endl;
                std::cin>>val;
                obj.insert(val);
                break;

            case 2:
                obj.remove();
                break;

            case 3:
                obj.display();
                break;

            case 4:
                resume = false;
                break;

            default: std::cout<<"Check your choice"<<std::endl;
        }
    }
    return 0;
}
