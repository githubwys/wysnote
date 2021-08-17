#include <iostream>
#include <queue>
using namespace std;

//方法1
struct tmp1 //运算符重载<
{
    int x;
    tmp1(int a) { x = a; }
    bool operator<(const tmp1 &a) const
    {
        return x < a.x; //大顶堆
    }
};

//方法2
struct tmp2 //重写仿函数
{
    bool operator()(tmp1 a, tmp1 b)
    {
        return a.x < b.x; //大顶堆
    }
};

int main()
{
    tmp1 a(1);
    tmp1 b(2);
    tmp1 c(3);
    priority_queue<tmp1> d;
    d.push(b);
    d.push(c);
    d.push(a);
    while (!d.empty())
    {
        cout << d.top().x << '\n';
        d.pop();
    }
    cout << endl;

    priority_queue<tmp1, vector<tmp1>, tmp2> f;
    f.push(b);
    f.push(c);
    f.push(a);
    while (!f.empty())
    {
        cout << f.top().x << '\n';
        f.pop();
    }
}
// #include <cstdio>
// #include <queue>
// using namespace std;
// struct node
// {
//     int x, y;
//     bool operator<(const node &a) const
//     {
//         if (x > a.x)
//             return 1;
//         else
//             return 0;
//         //return x < a.x;
//     }
// } k;
// priority_queue<node> q;
// int main()
// {
//     k.x = 10, k.y = 100;
//     q.push(k);
//     k.x = 12, k.y = 60;
//     q.push(k);
//     k.x = 14, k.y = 40;
//     q.push(k);
//     k.x = 6, k.y = 80;
//     q.push(k);
//     k.x = 8, k.y = 20;
//     q.push(k);
//     while (!q.empty())
//     {
//         node m = q.top();
//         q.pop();
//         printf("(%d,%d) ", m.x, m.y);
//     }
// }