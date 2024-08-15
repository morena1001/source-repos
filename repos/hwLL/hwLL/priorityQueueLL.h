
template <class T>
class priorityQueueLL
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

    priorityQueueLL()
    {}

    ~priorityQueueLL()
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

    //add item
    // run-time O(n)
    void insert(T x)
    {
        node* a = new node(x);
        node* temp = top;
        node* prev = temp;

        if (top == nullptr)
        {
            top = a;
            return;
        }

        else
        {
            while (temp != nullptr)
            {
                if (temp == top)
                {
                    if (a->info < temp->info)
                    {
                        a->next = temp;
                        top = a;
                        return;
                    }

                    else
                    {
                        prev = temp;
                        temp = temp->next;
                        continue;
                    }
                }

                else
                {
                    if (a->info < temp->info)
                    {
                        prev->next = a;
                        a->next = temp;
                        return;
                    }

                    else
                    {
                        prev = temp;
                        temp = temp->next;
                        continue;
                    }
                }
            }

            temp = a;
            prev->next = a;
        }
    }

    //remove and return smallest item
    // run-time O(1)
    T extractMin()
    {
        T topInfo = top->info;
        node* temp = top;

        top = top->next;

        delete temp;

        return topInfo;
    }
};
