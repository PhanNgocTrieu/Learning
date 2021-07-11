#include <iostream>
#include <cassert>
class IntArray
{
private:
    int *m_array{};
    int m_length{};
public:
    IntArray(int length) // constructor
    {
        assert(length > 0);

        m_array = new int[static_cast<std::size_t>(length)] {};
        m_length = length;
    }
    ~IntArray() // Destructor
    {
        // Dynamically delete the array we allocated earlier
        delete[] m_array;
    }

    void setValue(int index, int value) 
    {
        m_array[index] = value;
    }
    int getValue(int index)
    {
        return m_array[index];
    }

    int getLength()
    {
        return m_length;
    }
};

int main()
{
    IntArray ar(10); // allocate 10 integers
    for (int i {0}; i < ar.getLength(); ++i)
        ar.setValue(i,i+1);
    std::cout << "The value of element 5 is: " << ar.getValue(5) << "\n";
    return 0;
}