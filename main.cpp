#include <iostream>
using namespace std;

// Global Variable
int top{-1};

// Class Stack
class stackArray
{

private:
    int size;
    int *array;
    int length;

public:
    stackArray() = default;
    stackArray(int length)
        : size{100}, length{length}
    {
        array = new int[size];
    }

    void pushStack(int value)
    {
        if (top >= size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            array[top] = value;
        }
    }

    void popStack()
    {
        if (top <= -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "Elemen yang di popping : " << array[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (top >= 0)
        {
            cout << "Data element pada stack  : ";
            // Display element
            for (int i = top; i >= 0; i--)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    ~stackArray()
    {
        delete[] array;
    }
};

int main()
{

    int manyArray{};

    cout << "Banyak element array yang akan dialokasikan : ";
    cin >> manyArray;

    stackArray stack1{manyArray};

    stack1.pushStack(10);
    stack1.pushStack(20);
    stack1.pushStack(30);
    stack1.pushStack(40);
    stack1.pushStack(50);
    stack1.pushStack(60);

    cout << "\nElement Stack sebelum popping : " << endl;
    stack1.display();
    stack1.popStack();
    cout << "\nElement Stack setelah popping : " << endl;
    stack1.display();
    return 0;
}
