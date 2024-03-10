#include <iostream>
#define size 20
using namespace std;
int que[size];
int rear = -1, front = -1;

void enqueue(int val)
{
    if (rear == size - 1)
    {
        cout << "# Overflow" << endl;
    }
    rear += 1;
    que[rear] = val;
    cout << "# Inserted Successfully!!" << endl;
    if (front == -1)
    {
        front++;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "# Underflow" << endl;
    }
    else
    {
        cout << "# The value deleted is: " << que[front] << endl;
        front++;
        cout << "# Deleted Successfully!!";
        cout << "\n";
    }
}
void peek()
{
    if (front == -1 || front > rear)
    {
        cout << "# No element found" << endl;
    }
    else
    {
        cout << que[front] << " is on the peek" << endl;
    }
}

string isEmpty()
{
    if (front == -1 || front > rear)
    {
        return "> YES";
    }
    else
    {
        return "> NO";
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << que[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int ch, val;
    while (true)
    {
        cout<<"***************************************************"<<endl;
        cout << "1 =====> Enqueue Operation" << endl;
        cout << "2 =====> Dequeue Operation" << endl;
        cout << "3 =====> Display the Queue" << endl;
        cout << "4 =====> Show Peek value" << endl;
        cout << "5 =====> Check Queue is Empty or not" << endl;
        cout << "6 =====> Exit" << endl;
        cout<<"***************************************************"<<endl;
        cout << "Enter the option: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> val;
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            enqueue(val);
            cout << "-----------------------------"<<endl;
            break;
        case 2:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            dequeue();
            cout << "-----------------------------"<<endl;
            break;
        case 3:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            display();
            cout << "-----------------------------"<<endl;
            break;
        case 4:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            peek();
            cout << "-----------------------------"<<endl;
            break;
        case 5:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << isEmpty() << endl;
            cout << "-----------------------------"<<endl;
            break;
        case 6:
            exit(0);
        default:
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "Invalid option\nEnter again\n";
            cout << "-----------------------------"<<endl;
            break;
        }
    }
    return 0;
}