// CPP program to 
// illustrate how to avoid 
// memory leak

#include <iostream>
using namespace std;
  
// function to see memory handling

  
// function with memory leak
void func_to_show_mem_leak_take_place()
{
    int* ptr = new int(5);
  
    // body
  
    // return without deallocating ptr
    return;
}

void func_to_handle_mem_leak()
{
    int* ptr = new int(5);
  
    // body
  
    // Now delete pointer ptr using delete
    delete (ptr);
}
  
// Driver code
int main()
{
    // call function with memory leak:
    func_to_show_mem_leak_take_place(); // this one would have memory leak because of forgetting delete allocated memory    

    // Call function to handle
    // the memory leak
    func_to_handle_mem_leak();
  
    return 0;
}