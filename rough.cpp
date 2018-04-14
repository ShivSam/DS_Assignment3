#include<iostream>
using namespace std;
struct node
{
    node*prev;
    int num ;
    node*next;
}*start = NULL;
class stackk
{
public :
    int h , i,c=0;
    node* item , *l=NULL;
    void create()
    {
        cout<<"ENTER THE SIZE OF THE STACK";
        cin>>h;
        for(i=0;i<h;i++)
        {
            item= new node;
            cout<<"ENTER THE VALUES IN THE NODE";
            cin>>item->num;
            item->next=NULL;
            item->prev=NULL;

            if(start==NULL)
            {
                start=item;
                l=item;
            }
            else
            {
                l->next=item;
                item->prev=l;
                l=item;

            }
        }
    }

    void display()
    {
        node*temp;
        temp=l;
        cout<<"\nThe stack is\n";
        while(temp !=NULL)
        {
            cout<<temp->num<<" ->";
            temp=temp->prev;
        }
        cout<<"NULL\n";
    }

    void push() {
        node*item;
        item = new node;
        cout<<"\nENTER THE VALUE TO BE ADDED IN THE STACK";
        cin>>item->num;
        l->next=item;
        item->prev=l;
        l=item;
        display();
    }

    void pop()
    {
        cout<<"the popped element is";
        cout<<l->num;
        l=l->prev;
        display();
    }
};
int main()
{
    int  choice;              //used for selection push, pop operations
    char cont;                      //used for continuity of the program
    stackk s;                        //object creation or instantiation
    s.create();
    s.display();

    do {
        cout<<"\nSelect any operation\n1. PUSH \n2. POP \n3. DISPLAY\n4. EXIT"<<endl;
        cin>>choice;
        switch(choice) {
            case 1 :
                s.push() ;
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
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