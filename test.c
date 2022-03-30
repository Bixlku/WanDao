#include <iostream>
using namespace std;
typedef struct _point
{
    int x;
    int y;
} point; //定义类，给类一个别名
struct _hello
{
    int x, y;
} hello; //同时定义类和对象
int main()
{
    point pt1;
    pt1.x = 2;
    pt1.y = 5;
    cout << "ptpt1.x=" << pt1.x << "pt.y=" << pt1.y << endl;
    // hello pt2;
    // pt2.x = 8;
    // pt2.y =10;
    // cout<<"pt2pt2.x="<< pt2.x <<"pt2.y="<<pt2.y <<endl;
    //上面的hello pt2;这一行编译将不能通过. 为什么?
    //因为hello是被定义了的对象实例了.
    //正确做法如下: 用hello.x和hello.y
    hello.x = 8;
    hello.y = 10;
    cout << "hellohello.x=" << hello.x << "hello.y=" << hello.y << endl;
    return 0;
}
