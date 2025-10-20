#include <iostream>
using namespace std;
#define MAX 5
 
//Deklarasi Double Stack
class DStack
{
    private:
        int top1;
        int top2;
        int jaka[MAX];
 
    public:
        DStack();
        void pushA(int  item);
        void pushB(int  item);
        int  popA (int *item); 
        int  popB (int *item);
 
};

//inisialisasi Doble Stack
DStack::DStack()
{
    top1 = -1;
    top2 = MAX;
}

//Operasi push pada Stack1
void DStack::pushA(int item)
{
    if (top2 == top1 + 1)
    {
        cout << "\nStack Overflow Stack1";
        return;
    }
    top1++;
    jaka[top1] = item;
    cout << " \nItem disisipkan di Stack 1 : "<< item;
}

//Operasi push pada Stack2
void DStack::pushB(int item)
{
    if (top2 == top1 + 1)
    {
        cout << "\nStack Overflow Stack 2";
        return;
    }
    top2--;
    jaka[top2] = item;
    cout << " \nItem disisipkan di Stack 2 : "<< item;
}

//Operasi pop pada Stack1
int DStack::popA(int *item)
{
    if (top1 == -1)
    {
        cout << "\nStack Underflow Stack1\n";
        return -1;
    }
    *item = jaka[top1--];
    // top1--;
    return 0;
}

//Operasi pop pada Stack2
int DStack::popB(int *item)
{
    if (top2 == MAX)
    {
        cout << "Stack Underflow Stack2\n";
        return -1;
    }
    *item = jaka[top2++];
    // top2++;
    return 0;
}

//Program utama
int main()
{
    // DStack ds;
    int item = 0;
    DStack s = DStack();

    s.pushA(10);
    s.pushA(20);
    s.pushA(30);
    s.pushB(40);
    s.pushB(50);
    s.pushB(60); // Stack Overflow

    if(s.popA(&item) == 0)
    // if (item != -1)
        cout <<" \nMenghapus Item dari Stack 1: "<< item;

    if(s.popA(&item) == 0)
    // if (item != -1)
        cout << " \nMenghapus Item dari Stack 1: "<< item;

    if(s.popA(&item) == 0)
    // if (item != -1)
        cout << " \nMenghapus Item dari Stack 1: "<< item;

    if(s.popB(&item) == 0)
    // if (item != -1)
        cout <<" \nMenghapus Item dari Stack 2: "<< item;

    if(s.popB(&item) == 0)
    // if (item != -1)
        cout << " \nMenghapus Item dari Stack 2: "<< item;

    if(s.popA(&item) == 0)
    
        cout << " \nMenghapus Item dari Stack 2: "<< item;
    cout << endl;
    return 0;
}