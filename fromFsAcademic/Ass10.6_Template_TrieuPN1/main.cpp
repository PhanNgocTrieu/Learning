#include <iostream>
#include "Student.h"
#include "Stack.h"
#include "Queue.h"
#include "TemplateStack.h"
#include "TemplateQueue.h"
// #include "Student.cpp"
// #include "Stack.cpp"
// #include "Queue.cpp"


using namespace std;


void printConsole()
{
    cout << "********************CONSOLE******************" << endl;
    cout << "*  1. Result of Using Stack Implementation  *" << endl;
    cout << "*  2. Result of Using Queue Implementation  *" << endl;
    cout << "*  3. Using Stack Template Implementation   *" << endl;
    cout << "*  4. Using Queue Tempalte Implementation   *" << endl;
    cout << "*********************************************" << endl;
    
}

int main()
{
    // Students Infor for manage! | Data
    Student sv1{"John", 22, "17DT1"};
    Student sv2{"Trang", 22, "17DT3"};
    Student sv3{"Jop", 22, "17DT2"};
    Student sv4{"Nhan", 22, "17DT1"};
    Student sv5{"Hoan", 22, "17DT2"};
    Student sv6{"Lit", 22, "17DT1"};
    Student sv7{"Nam", 22, "17DT3"};
    Student sv8{"Nhan", 22, "17DT1"};
    Student sv9{"Toan", 22, "17DT2"};
    Student sv10{"Linh", 22, "17DT1"};
    Student sv11{"Tien", 22, "17DT1"};
    Student sv12{"Nhat", 22, "17DT2"};
    Student sv13{"Duc", 22, "17DT1"};
    Student sv14{"My", 22, "17DT2"};
    Student sv15{"Loan", 22, "17DT3"};

    Stack svList_Stack; // using stack
    

    cout << endl << "*********************** ASSIGMENT 1 ********************" << endl;
    // Using Stack - Set datas:
    svList_Stack.push_back(sv1);
    svList_Stack.push_back(sv2);
    svList_Stack.push_back(sv3);
    svList_Stack.push_back(sv4);
    svList_Stack.push_back(sv5);
    svList_Stack.push_back(sv6);
    svList_Stack.push_back(sv7);
    svList_Stack.push_back(sv8);
    svList_Stack.push_back(sv9);
    svList_Stack.push_back(sv10);
    cout << endl << "*********** Pop and Print 10 students *************" << endl;
    while(!svList_Stack.isEmpty())
    {
        cout << svList_Stack.peek() << "\n";
        svList_Stack.pop_back();
    }
    if(svList_Stack.isEmpty())
    {
        cout << "Empty Stack!" << endl;
    }

    cout << endl << "********************* Assigment 2 *********************" << endl;
    cout << endl << "******************* Queue of Student ******************" << endl;
    Queue svList_Queue;
    svList_Queue.Enqueue(sv1);
    svList_Queue.Enqueue(sv3);
    svList_Queue.Enqueue(sv5);
    svList_Queue.Enqueue(sv7);
    svList_Queue.Enqueue(sv14);
    svList_Queue.Enqueue(sv11);
    svList_Queue.Enqueue(sv12);
    svList_Queue.Enqueue(sv10);
    svList_Queue.Enqueue(sv12);
    svList_Queue.Enqueue(sv6);
    svList_Queue.printQueue();


    cout << endl << "******************* After dequeue 5 students ******************" << endl;
    svList_Queue.Dequeue();
    svList_Queue.Dequeue();
    svList_Queue.Dequeue();
    svList_Queue.Dequeue();
    svList_Queue.Dequeue();
    svList_Queue.printQueue();

    cout << endl << "******************* After enqueue 10 students ******************" << endl;
    

    try
    {
        svList_Queue.Enqueue(sv2);
        svList_Queue.Enqueue(sv4);
        svList_Queue.Enqueue(sv8);
        svList_Queue.Enqueue(sv9);
        svList_Queue.Enqueue(sv14);
        svList_Queue.Enqueue(sv11);
        svList_Queue.Enqueue(sv12);
        svList_Queue.Enqueue(sv10);
        svList_Queue.Enqueue(sv13);
        svList_Queue.Enqueue(sv1);
    }
    catch(const char* msg)
    {
        std::cerr << msg << '\n';
    }
    svList_Queue.printQueue();


    cout << endl << "******************* Assigment 3 ******************" << endl;
    cout << endl << "******************* Stack of int ******************" << endl;
    cout << endl << "****** Popping all of elements and printing it*****" << endl;
    // declare container
    STACK<int> stack_int;
    //set container's values:
    stack_int.push_back(3);
    stack_int.push_back(4);
    stack_int.push_back(5);
    stack_int.push_back(6);
    stack_int.push_back(7);
    stack_int.push_back(9);
    stack_int.push_back(32);
    stack_int.push_back(321);
    stack_int.push_back(213);
    stack_int.push_back(124);
    cout << "Stack of Int: ";
    while (!stack_int.isEmpty())
    {
        try{
            cout << stack_int.peek() << " ";
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }
        stack_int.pop_back();
    }
    cout << endl;


    cout << endl << "******************* Queue of double ******************" << endl;
    cout << endl << "******************* List of 10 double Queue *********" << endl;
    QUEUE<double> double_queue;
    // set data
    double_queue.Enqueue(53.23);
    double_queue.Enqueue(223.23);
    double_queue.Enqueue(2134.2);
    double_queue.Enqueue(221.2133);
    double_queue.Enqueue(543.223);
    double_queue.Enqueue(5323.123);
    double_queue.Enqueue(53.223);
    double_queue.Enqueue(534.13123);
    double_queue.Enqueue(533.223);
    double_queue.Enqueue(531.243);
    double_queue.print();
    cout << endl;

    cout << endl << "******************* After Dequeuing ***********" << endl;
    cout << "After dequeuing: ";
    double_queue.Dequeue();
    double_queue.Dequeue();
    double_queue.Dequeue();
    double_queue.Dequeue();
    double_queue.Dequeue();
    for (int idex = 0; idex < double_queue.Size(); idex++)
    {
        cout << double_queue[idex];
    }
    try
    {
        double_queue.Enqueue(563.23);
        double_queue.Enqueue(2243.23);
        double_queue.Enqueue(21334.2);
        double_queue.Enqueue(22431.2133);
        double_queue.Enqueue(5434.223);
        double_queue.Enqueue(534523.123);
        double_queue.Enqueue(54533.223);
        double_queue.Enqueue(534543.13123);
        double_queue.Enqueue(533435.223);
        double_queue.Enqueue(53231.243);
    }
    catch(const char* msg)
    {
        std::cerr << "\n" <<msg << '\n';
    }
    cout << "Queue: after add 10 more: ";
    double_queue.print();
    cout << endl;
    
    


    return 0;
}
