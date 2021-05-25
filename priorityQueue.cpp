#include <iostream>
#include <queue>
using namespace std;
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    priority_queue<int> pq;
    pq.push(30);
    pq.push(80);
    pq.push(20);
    pq.push(90);
    pq.push(60);
    pq.push(10);
    cout << "The priority queue gquiz is : ";
    showpq(pq);
    pq.pop();
    showpq(pq);
    return 0;
}