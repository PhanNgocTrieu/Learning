#include <iostream>
#include <array>
#include <cassert>

class Stack
{
private:
    int track{}; // keep the track of stack 
    std::array<int,10> stack{};  // stack defination
public:
    void reset()
    {
        track = 0;
    }
    bool push(int data)
    {
        stack[track] = data; 
        track++;

        // if (track == 10)
        //{
        //    return false;
        //}
        return (track < static_cast<int>(stack.size()));

    }
    
    //A public member function named pop() that pops a value off the stack and returns it.
    //If there are no values on the stack, the code should exit via an assert.
    int pop()
    {
        assert(track > 0);
        int temp {stack[track]};
        stack[track] = 0;
        track--;
        return temp;
    }
    void print()
    {
        std::cout << "( ";
        for (int i = {0}; i < track; i++)
        {
            std::cout << stack[i] << " ";
        }
        std::cout << ") \n";
    }
};

int main()
{
    Stack st;
    st.reset();
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(8);
    
    st.print();


    st.pop();
    st.pop();

    st.print();


    return 0;
}