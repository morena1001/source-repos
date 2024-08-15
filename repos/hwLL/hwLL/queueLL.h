
template <class T>
class queueLL
{
private:
    class node
    {
    public:
        T info;
        node* next;

        node(T f)
        {
            info = f;
            next = nullptr;
        }
    };
    node* top;

public:
    queueLL()
    {}

    ~queueLL()
    {}

    //add item to back of queue
    // run-time O(n)
    void enqueue(T x)
    {
        node* a = new node(x);
        node* temp = top;

        if (top == nullptr)
            top = a;

        else
        {
            while (temp->next != nullptr)
                temp = temp->next;

            temp->next = a;
        }
    }

    //remove and return first item from queue
    // run-time O(1)
    T dequeue()
    {
        T topInfo = top->info;
        node* temp = top;

        if (top->next == nullptr)
        {
            delete top;
            top = nullptr;
        }

        else
        {
            top = temp->next;
            delete temp;
        }

        return topInfo;
    }

    // checks if queue is empty
    // run-time O(1)
    bool empty()
    {
        if (top == nullptr)
            return true;

        else
            return false;
    }

    //For the final part of the test program, template this class
    //and add a decimate method.
    // run-time O(n)
    void decimate()
    {
        node* temp = top;
        node* prev = temp;
        int count = 1;

        while (temp != nullptr)
        {
            if (count % 10 == 0)
            {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
                count++;
                continue;
            }

            count++;
            prev = temp;
            temp = temp->next;
        }
    }
};



/*class queueLL
{
private:
    class node
    {
    public:
        int info;
        node* next;

        node(int f)
        {
            info = f;
            next = nullptr;
        }
    };
    node* top;

public:
   queueLL()
    {}

    ~queueLL()
    {}

    //add item to back of queue
    // run-time O(n)
    void enqueue(int x)
    {
        node* a = new node(x);
        node* temp = top;

        if (top == nullptr)
            top = a;

        else
        {
            while (temp->next != nullptr)
                temp = temp->next;

            temp->next = a;
        }
    }

    //remove and return first item from queue
    // run-time O(1)
    int dequeue()
    {
        int topInfo = top->info;
        node* temp = top;

        if (top->next == nullptr)
        {
            delete top;
            top = nullptr;
        }

        else
        {
            top = temp->next;
            delete temp;
        }

        return topInfo;
    }

    // checks if queue is empty
    // run-time O(1)
    bool empty()
    {
        if (top == nullptr)
            return true;

        else
            return false;
    }
};*/