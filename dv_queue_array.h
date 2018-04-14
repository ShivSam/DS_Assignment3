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

    void insert(int value) {
        if(rear == -1){
            intTypeQ[++rear] = value;
            front++;
        }
        else if(rear == Size - 1)
            std::cout<<"Overflow"<<std::endl;
        else
            intTypeQ[++rear] = value;
    }
    void remove() {
        if(front == -1 || front == rear + 1)
            std::cout<<"Underflow"<<std::endl;
        else
            front++;
    }
    void display(){
        int i=front;
        while(i <= rear)
            std::cout<<intTypeQ[i++]<<"  ";
        std::cout<<std::endl;
    }
};