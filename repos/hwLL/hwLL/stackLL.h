
class stackLL
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

    stackLL()
    {}

    //Take care of memory leaks...
    ~stackLL()
    {}

    //return true if empty, false if not
    // run-time O(1)
    bool empty()
    {
        if (top == nullptr)
            return true;

        else
            return false;
    }

    //add item to top of stack
    // run-time O(1)
    void push(int x)
    {
        node* a = new node(x);

        if (empty())
        {
            top = a;
        }

        else
        {
            a->next = top;
            top = a;
        }
    }

    //remove and return top item from stack
    // run-time O(1)
    int pop()
    {
        int topInfo = top->info;

        if (top->next == nullptr)
        {
            delete top;
            top = nullptr;
        }

        else
        {
            node* temp = top->next;
            delete top;
            top = temp;
        }

        return topInfo;
    }

    //add item x to stack, but insert it
    //right after the current ith item from the top
    //(and before the i+1 item).
    // run-time O(n)
    void insertAt(int x, int i)
    {
        node* temp = top;
        node* prev = temp;
        node* a = new node(x);

        int location = 0;

        while (temp->next != nullptr)
        {
            if (i == location)
            {
                if (i == 0)
                {
                    top = a;
                    a->next = temp;
                }

                else
                {
                    prev->next = a;
                    a->next = temp;
                }

                return;
            }

            prev = temp;
            location++;
            temp = temp->next;
        }

        temp->next = a;
    }
};