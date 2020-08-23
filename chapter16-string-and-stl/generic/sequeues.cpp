#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <forward_list>
#include <iostream>
#include <stack>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    list<int> li;
    queue<int> que;
    deque<int> dequ;
    forward_list<int> flist;
    priority_queue<int> pqueue;
    stack<int> s;
    array<int, 5> arr;

    // vec.insert();
    // li.push_back();
    pqueue.push(15);
    pqueue.push(8);
    pqueue.push(20);
    pqueue.push(9);

    while (!pqueue.empty())
    {
        int val = pqueue.top();
        pqueue.pop();
        cout << val << endl;
    }

    arr[0] = 99;


    
    


    
    return 0;
}
