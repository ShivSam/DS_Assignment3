#include<iostream>

class Stack{
private:
    int Size=0, top, *stack;

public:
    Stack(){
        std::cout<<"Please enter the size of the stack"<<std::endl;
        std::cin>>Size;

        stack = new int [Size];
        top= 0;
    }
    ~Stack(){
        delete[] stack;
    }

    void push(int value){
        if(top >= Size)
            std::cout<<"Stack is full"<<std::endl;
        else{
            stack[top] = value;
            top++;
        }
    }

    void pop(){
        if (top != 0) {
            stack[top] = 0;
            top--;
        }
        else
            std::cout<<"Underflow"<<std::endl;
    }

    void display() const {
        if(top == 0)
            std::cout<<"Stack's empty"<<std::endl;
        else {
            for (int i = 0; i < top; i++)
                std::cout << (stack[i]) << "\t";
            std::cout << std::endl;
        }
    }
};

int main(){
    bool iterate=true;
    short choice;
    int value;
    Stack object;

    while(iterate){
        std::cout<<"Enter your choice"<<std::endl;
        std::cout<<"1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT"<<std::endl;
        std::cin>>choice;

        switch (choice){
            case 1:
                std::cout<<"Enter the value"<<std::endl;
                std::cin>>value;
                object.push(value);
                break;

            case 2:
                object.pop();
                break;

            case 3:
                object.display();
                break;

            case 4:
                iterate= false;
                break;

            default:
                std::cout<<"Wrong choice"<<std::endl;
        }
    }
}