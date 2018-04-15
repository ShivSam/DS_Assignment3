#include<iostream>
using namespace std;
class queue
{
public:
    int arr[100], i , item, size, front=-1, rear=-1;
    void insert() {
        cout<<"enter the size of an array";
        cin>>size;
    }
    void push() {
        if (rear==size-1)
            cout<<"overflow";
        else {
            cout<<"enter the element to be pushed into the queue";
            cin>>item;
            arr[rear]=item;
        }
        if(front==-1&&rear==-1){
            front=0;
            rear=0;
        }
        else
            rear=rear+1;
    }
    void display() {
        cout<<"elements presents in the array";
        for(i=front;i<=rear;i++)
            cout<<arr[i];
    }
};

int main() {
    int  choice;                    //used for selection push, pop operations
    char cont;                      //used for continuity of the program
    queue q;
    q.insert() ;                    //object creation or instantiation
    do {
        cout<<"\nSelect any operation\n1. PUSH \n2. POP \n3. DISPLAY\n4. EXIT"<<endl;
        cin>>choice;
        switch(choice) {
            case 1 :
                q.push() ;
                break;

                //  case 2:
                //  q.pop();
                //  break;

            case 3:
                q.display();
                break;

            case 4:
                exit(0);

            default:
                cout<<"PLEASE ENTER A VALID CHOICE :)"<<endl;
        }
        cout<<"Do you want to continue?\npress Y or N to exit"<<endl;
        cin>>cont;
    }
    while(cont=='Y'||cont=='y');
}