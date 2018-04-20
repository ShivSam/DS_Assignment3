//Queue (using array) Interface
class QArray{
protected:
    short front, rear, Size;
    int* intTypeQ;

public:
    QArray()                                //default constructor
            : front(-1), rear(-1), Size(0), intTypeQ(nullptr) {}

    //pure virtual functions
    virtual void insert(int value) = 0;
    virtual void remove() = 0;
    virtual void display() = 0;
};


//for Linear queue
class LinearQ : public QArray{
public:
    LinearQ(){
        std::cout<<"Enter the Size of the Queue"<<std::endl;
        std::cin>>Size;
        intTypeQ = new int[Size];           //memory allocation of queue
    }
    LinearQ(short Sz){
        Size = Sz;
        intTypeQ = new int[Size];           //memory allocation of queue
    }

    void insert(int value) override {
        if(rear == -1){
            intTypeQ[++rear] = value;
            front++;
        }
        else if(rear == Size - 1)
            std::cout<<"Overflow"<<std::endl;
        else
            intTypeQ[++rear] = value;
    }
    void remove() override {
        if(front == -1 || front == rear + 1)
            std::cout<<"Underflow"<<std::endl;
        else
            front++;
    }
    void display() override {
        int i=front;
        while(i <= rear)
            std::cout<<intTypeQ[i++]<<"  ";
        std::cout<<std::endl;
    }
};

//for Circular queue
class CircularQ : public QArray{
private:
    bool cyclic;
    short count;

    CircularQ()
            : cyclic(false), count(0){
        std::cout<<"Enter the size of the queue"<<std::endl;
        std::cin>>Size;

        intTypeQ = new int[Size];           //Queue allocation
    }

    void insert(int value){
        if(count == Size-1 || rear == front == -1)
            std::cout<<"Overflow"<<std::endl;
        else if(fornt == -1 && rear == -1){
            intTypeQ[++rear] = value;
            front++;
            count++;
        }
        else if( rear == Size - 1){
            rear = 0;
            queue[rear] = value;
            count++;
        }
        else{
            queue[++rear] = value;
            count++;
        }
    }


    void remove(){
        if(count == 0)
            std::cout<<"Underflow"<<std::endl;
        else if( front == Size -1)
            front = 0;
        else
            front++;
    }
};
//Array implementation Ends


/************** Implementation via Linked List ***********************/
//Queue unit structure
struct QElement{
    int data = 0;
    short priority = 3;
    QElement* next = nullptr;
};

//Interface
class QLList{
protected:
    short counter, Size;
    QElement* start, * front, *rear;

public:
    QLList() : counter(0), Size(0), start(nullptr), front(nullptr), rear(nullptr){}
    //Member Functions
    virtual void insert(int value, short prior = 3){
        if(counter == Size)
            std::cout<<"Overflow"<<std::endl;
        else{
            QElement* New_Elem = new QElement;
            New_Elem->data = value;
            New_Elem->priority = prior;
            if( start == nullptr){
                start = New_Elem;
                front = New_Elem;
                rear = New_Elem;
                counter++;
            }
            else{
                if(New_Elem->priority > rear->priority){
                    rear->next = New_Elem;
                    rear = New_Elem;
                }
                else if(New_Elem->priority < front->priority){
                    New_Elem->next = front;
                    front = New_Elem;
                    start = front;
                }
                else {
                    QElement *traverse = start;
                    while (traverse->next != nullptr && traverse->next->priority <= New_Elem->priority)
                        traverse = traverse->next;
                    New_Elem->next = traverse->next;
                    traverse->next = New_Elem;
                }
                counter++;
            }
        }
    };
    virtual void remove(){
        if(front == nullptr)
            std::cout<<"Underflow"<<std::endl;
        else{
            front = front->next;
            delete start;
            start = front;
        }
    };
    virtual void display(){
        if(start == nullptr)
            std::cout<<"No element"<<std::endl;
        else{
            QElement* traverse = front;
            while(traverse != nullptr) {
                std::cout << traverse->data << "\t";
                traverse = traverse->next;
            }
            std::cout<<std::endl;
        }
    };
};

//Linear Queue Class
class LinearQL : public QLList{
public:
    LinearQL(){
        std::cout<<"Enter the size of Linear queue"<<std::endl;
        std::cin>>Size;
    }
};

//Circular Queue Class
class CircularQL : public QLList{
public:
    CircularQL(){
        std::cout<<"Enter the size of Circular queue"<<std::endl;
        std::cin>>Size;
    }
    //Member functions overriding
    void remove() override {
        if(counter == 0)
            std::cout<<"Underflow"<<std::endl;
        else{
            front = front->next;
            delete start;
            start = front;
            counter--;
        }
    }
};

class PriorityQL : public QLList{
public:
    PriorityQL(){
        std::cout<<"Enter the size of Priority queue"<<std::endl;
        std::cin>>Size;
    }
};