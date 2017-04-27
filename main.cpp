#pragma clang diagnostic push
#pragma ide diagnostic ignored "CannotResolve"
#include <iostream>
#include <climits>
#include <cstring>
#include <vector>
#include <array>
#include <fstream>
//#include <backward/auto_ptr.h>
//#include "coordin.h"
//#include "stock.h"
//#include "myTime.h"
using namespace std;

//struct testStruct {
//    char name[20];
//    int year;
//    bool six;
//};

//struct widget {
//    char brand[20];
//    int type;
//    union {
//        long idNum;
//        char idChar[20];
//    };
//};

//struct inflatable {
//    char name[20];
//    short year;
//};

//char *getName() {
//    char temp[20];
//    cin >> temp;
//    char *p = new char[strlen(temp)+1];
//    strcpy(p,temp);
//    return p;
//}

//struct years {
//    int year;
//};

//struct fish {
//    //char *type;
//    string type;
//    int weight;
//    float len;
//};

//struct candy {
//    string name;
//    float w;
//    int r;
//};

//#define hello(num) (num + 1)

//enum  {one,two,three,four,five};

//void test(int);

//struct returnAry {
//    int *ary;
//};
//
//returnAry testFunc() {
//    returnAry one;
//    for (int i=0;i<5;i++) {
//        one.ary[i] = i*3;
//    }
//    return one;
//}

//void test(int *ary) {
//    for(int i = 0;i< 6;i++) {
//        cout << ary[i] << endl;
//    }
//}

//void test(int *ary,int n) {
//    cout << ary[n] << endl;
//}

//void twoPoint(const int *bP, const int *eP) {
//    const int *p;
//    for (p = bP;p != eP ; p++) {
//        cout << *p << endl;
//    }
//}

//void doubleAry(int (*ary)[4],int size) {
//    for (int i=0;i < size;i++) {
//        for (int j=0;j<4;j++) {
//            cout << ary[i][j] << endl;
//        }
//    }
//}

//char *returnArr(const char *str) {
//
//    char *p = new char[6];
//
//    for (int i=0;i < 6;i+=2) {
//        p[i] = str[i-i/2];
//        p[i+1] = str[i-i/2];
//    }
//    return p;
//}

//struct travelTime {
//    int hours;
//    int mins;
//};

//travelTime totalTime(travelTime one,travelTime two) {
//    travelTime total;
//    total.mins = (one.mins+two.mins)%60;
//    total.hours = (one.hours+two.hours) + (one.mins+two.mins)/60;
//    return total;
//}

//travelTime *totalTime(travelTime *one,travelTime *two) {
//    travelTime *total = new travelTime;
//    total->mins = (one->mins+two->mins)%60;
//    total->hours = (one->hours+two->hours) + (one->mins+two->mins)/60;
//    return total;
//}

//void display(const string *ary) {
//    for (int i=0;i<5;i++) {
//        cout << ary[i] << endl;
//    }
//}

//void displayName(const array<string,3> *names) {
//    for(int i=0;i<3;i++) {
//        cout << (*names)[i] << endl;
//    }
//}

//void countDown(int n) {
//    cout << "couting down..." << n << endl;
//    if (n > 0) {
//        countDown(n-1);
//    }
//    cout << n << "boom" << endl;
//}

//double mu(int num) {
//    double flag = num*num*1.5;
//    return flag;
//}
//
//void showTime(int num,double (*pf)(int)) {
//    cout << num << endl;
//    cout << (*pf)(num) << endl;
//}

//struct map1 {
//    float x;
//    float y;
//};

//char *plot(map1 *);
//
//char *plot(map1 *point) {
//    if (point->x+point->y > 2) {
//        return "yes";
//    }
//    return "no";
//}

//string plot(map1 *);
//
//string plot(map1 *point) {
//    if (point->x+point->y > 2) {
//        return "yes";
//    }
//    return "no";
//}

//int replace(char *str , char ch1 ,char ch2) {
//    int count = 0;
//    while(*str) {
//        if (*str == ch1) {
//            *str = ch2;
//            count ++;
//        }
//        str ++;
//    }
//    return count;
//}

//void f1(int *a);
//const char *f2(const int *one, const int *two);
//typedef void (*p1)(int *);
//typedef const char *(*p2)(const int *,const int *);

//int mul(int num,int r) {
//    if (num < 0) {
//        return 0;
//    }else if (num == 1) {
//        return r;
//    } else {
//        return mul(num-1,num*r);
//    }
//}

//inline double test(double x) {return x*x;};

//#define test(x) (x*x)

//void stove(int &&n) {
//    cout << n << endl;
//    n += 6;
//}

//char *hello() {
//    return "hello";
//}
//
//
//void test(char *(*pf)()) {
//    cout << (*pf)() << endl;
//}

//char *hello() {
//    return "helldo";
//}

//void test(char *(&pf)()) {
//    cout << (&pf)() << endl;
//}

//template <typename T>
//void selfSwap(T &a,T &b) {
//    T temp;
//    temp = a;
//    a = b;
//    b = temp;
//}

//char may(const char &ch) {
//    return ch-3;
//}

//template <class T>
//T lesser(T &a,T &b) {
//    return a<b?a:b;
//}
//
//int lesser(int &a,int &b) {
//    return a<b?a:b;
//}

//template <class T1,class T2>
//auto test(T1 a,T2 b) -> decltype(a+b) {
//    return a+b;
//};

//struct box {
//    char *maker;
//    float h;
//    float w;
//    float l;
//    float volume;
//};
//
//void testOne(const box &stru) {
//    cout << stru.maker << endl;
//    cout << stru.volume << endl;
//}
//
//void testTwo(box &stru) {
//    stru.volume = stru.h*stru.w*stru.l;
//    cout << stru.volume << endl;
//}

//#include "test.h"
//
//void callOne(test &cls) {
//    cout << cls <<endl;
//}
//
//void callTwo(test cls) {
//    cout << cls <<endl;
//}

//#include "Queue.h"

//class CExample {
//private:
//    int a;
//public:
//    //构造函数
//    CExample(int b)
//    {
//        a = b;
//        cout<<"creat: "<<a<<endl;
//    }
//    //拷贝构造
//    CExample(const CExample& C)
//    {
//        a = C.a;
//        cout<<"copy"<<endl;
//    }
//    //析构函数
//    ~CExample() {
//        cout<< "delete: "<<a<<endl;
//    }
//    void Show () {
//        cout<<a<<endl;
//    }
//};
//
////全局函数，传入的是对象
//void g_Fun(CExample C) {
//    cout<<"test"<<endl;
//}

//#include "Tv.h"

//double hmean(double a,double b) {
//    if (a == -b) {
//        throw "error";
//    }
//    return 2.0/(a+b);
//}

//#include "SelfThrowClass.h"
//
//double oneMean(double a,double b) {
//    if (a == -b) {
//        throw OneThrow(a,b);
//    }
//    return 2.0/(a+b);
//}
//
//double twoMean(double a,double b) {
//    if (a < 0) {
//        cout << "hello" << endl;
//        throw TwoThrow(a,b);
//    }
//    return 2.0/(a+b);
//}

//#include <new>
//#include <cstdlib>
//struct Big {
//    double stuff[200000];
//};

//#include <new>
//#include <cstdlib>
//struct Big {
//    double stuff[20000];
//};

//#include <memory>
//class Report {
//private:
//    string str;
//public:
//    Report(const string s) : str(s) {
//        cout << "create" << endl;
//    }
//    ~Report() {
//        cout << "delete" << endl;
//    }
//    void comment() const {
//        cout << str << endl;
//    }
//};

//#include <memory>

//#include <iterator>
//#include <vector>
//#include <set>

//#include "Stack.h"
//#include "ArrayTp.h"

//#include "tempMemb.h"

int main() {

    cout << "hello" << endl;

//    beta<double> he(3.5,3);
//    he.show();
//    cout << he.blab(10,2.3) << endl;
//    cout << he.blab(10.3,3);

//    ArrayTp<int,3> testAry(4);
//    testAry[2] = 3;
//    testAry[1] = 0;
//
//    for(int i=0;i<3;i++) {
//        cout << testAry[i] << endl;
//    }

//    typedef int myType;
//    //Stack<string> st;
//    Stack<myType> st;
//    char ch;
//    myType po;
//    while(cin >> ch && toupper(ch) != 'Q') {
//        while (cin.get() != '\n') {
//            continue;
//        }
//        if (! isalpha(ch)) {
//            cout << '\a';
//            continue;
//        }
//        switch (ch) {
//            case 'A':
//            case 'a':
//                cout << "add:";
//                cin >> po;
//                if (st.isFull()) {
//                    cout << "full" << endl;
//                } else {
//                    st.push(po);
//                }
//                break;
//            case 'P':
//            case 'p':
//                cout << "pop";
//                if (st.isEmpty()) {
//                    cout << "empty" << endl;
//                } else {
//                    st.pop(po);
//                }
//                break;
//            case 'S':
//            case 's':
//                st.getItems();
//                break;
//
//        }
//    }
//    cout << "by" << endl;


//    string s1[] = {"one","two","three"};
//    string s2[] = {"four","five","six"};
//
//    //
//    set<string> A(s1,s1+3);
//    set<string> B(s2,s2+3);
//
//    //结合
//    set_union(A.begin(),A.end(),B.begin(),B.end());
//    //交叉
//    set_intersection(A.begin(),A.end(),B.begin(),B.end());
//    //差别
//    set_difference(A.begin(),A.end(),B.begin(),B.end());
//    //插入
//    A.insert("xxx");



//    int ary[] = {3,4,23,6,4};
//    ostream_iterator<int,char> out_iter(cout," ");
//    vector<int> dice(5);
//    copy(ary,ary+5,dice.begin());
//    copy(dice.begin(),dice.end(),out_iter);
//    cout << endl;
//    copy(dice.rbegin(),dice.rend(),out_iter);

//    shared_ptr<string> ary[3] {
//            shared_ptr<string> (new string("one")),
//            shared_ptr<string> (new string("two")),
//            shared_ptr<string> (new string("three"))
//
//    };
//    shared_ptr<string> pwin;
//    pwin = ary[2];
//
//    for (shared_ptr<string> item: ary){
//        cout << *item << endl;
//    }

//    {
//        auto_ptr<Report> pc(new Report("one-p"));
//        pc->comment();
//    }
//    {
//        shared_ptr<Report> pc(new Report("two-p"));
//        pc->comment();
//    }
//    {
//        unique_ptr<Report> pc(new Report("two-p"));
//        pc->comment();
//    }
//    {
//        Report *pc = new Report("three-p");
//        pc->comment();
//        delete pc;
//    }

//    char a = 'A';
//    cout << int(a) << endl;

//    char a[] = "abc";
//    int *b = (int*)a;
//    cout << *b << endl;
//    cout << b << endl;
//    cout << a << endl;

//    char a[] = "ab";
//    short *b = (short*)a;
//    cout << *b << endl;
//    cout << b << endl;
//    cout << a << endl;

//    int a = 12;
//    float *b = (float*)&a;
//    cout << b << endl;
//    cout << *b << endl;
//    cout << float(a) << endl;

//    Big *pB = new (nothrow)Big[10000];//返回0说明new失败
//    cout << pB << endl;

//    Big *pS;
//    try {
//        pS = new Big[100000];
//    } catch(bad_alloc &ba) {
//        cout << "bad" << endl;
//        cout << ba.what() << endl;//std::bad_alloc
//        exit(EXIT_FAILURE);
//    }
//
//    cout << "ok" << endl;
//    delete []pS;




//    try {
//        cout << oneMean(10,-10) << endl;
//        //cout << twoMean(-3,10) << endl;
//    } catch(OneThrow &err) {
//        err.msg();
//    } catch(TwoThrow &err) {
//        err.msg();
//    }


//    try {
//        cout << hmean(10,-11);
//    } catch(const char *s) {
//        cout << s << endl;
//    }


//    Tv s1;
//    s1.setting();
//    s1.onOff();
//    s1.chanUp();
//    s1.volUp();
//    s1.setting();
//
//    Remote c;
//    c.chanUp(s1);
//    c.volUp(s1);
//    c.setChannel(s1,40);
//
//    s1.setting();
//
//    Tv s2(Tv::On);
//    s2.setting();
//    c.onOff(s2);
//    s2.setting();

//    int i;
//    int b;
//    int c = 3;
//    cout << &i << endl;
//    cout << &c << endl;

//int i=0;
//    while(i < 30) {
//        i++;
//        cout << rand()%2 << endl;
//    }

//    CExample test(1);
//    //传入对象
//    g_Fun(test);

//    Queue *line = new Queue(10);
//    Item item;
//    item.setFrontName("qinzixuan");
//    line->enQueue(item);
//
//    item.setFrontName("luopiyao");
//    line->enQueue(item);
//
//    cout << line->queueCount() << endl;
//    cout << line->getFront()->getFrontName() << endl;
//    line->deQueue(item);
//    cout << line->queueCount() << endl;
//    cout << line->getFront()->getFrontName() << endl;

//    int one = 10,two = 20;
//    test oneClass(one,two);
//    callOne(oneClass);
//    callTwo(oneClass);

//    myTime oneTime(5,22);
//    myTime twoTime(4,40);
//    oneTime.show();
//    twoTime.show();
//    myTime allTime;
//    allTime = oneTime + twoTime;
//    allTime.show();
//    myTime *allTime;
//    allTime = oneTime-twoTime;
//    (*allTime).show();
//    delete allTime;

//    enum {test = 10};
//    double ary[test];
//    ary[3] = 2.0;
//    cout << ary[3] << endl;

//    stock oneClass("qinzixuan",12,20.0);
//    oneClass.show();
//    oneClass.upDate(2.0);
//
//    stock twoClass;
//    twoClass.show();

//    cout << sizeof(double) << endl;

//    rect *rp = new rect{120,80};
//    polar *op = new polar;
//
//    op = rectToPolar(rp);
//    delete rp;
//    showPolart(op);
//    delete op;

//    box *hi = new box{"qinzixuan",2,3,5,0};
//    testOne(*hi);
//    testTwo(*hi);
//    delete hi;

//    int a = 2;
//    double b = 4.5;
//    cout << test(a,b) << endl;

//    int a = 1,b=2;
//    double a1=1.2,b1=0.3;
//    cout << lesser(a,b) << endl;
//    cout << lesser(a1,b1) << endl;
//    cout << lesser<>(a,b) << endl;
//    cout << lesser<int>(a,b) << endl;

//    char ch = may('D');
//    cout << ch <<endl;

//    int a1 = 1;
//    int b1 = 3;
//    selfSwap(a1,b1);

//    test(hello);

//    test(hello);

//    int n = 3;
//    int y = 4;
//    stove(n+y);
//    cout << n << endl;
//    cout << y << endl;

//    int ra = 110;
//    int *p = &ra;
//    int &ro = *p;
//    int b = 50;
//    p = &b;
//
//    cout << &ra <<endl;
//    cout << &ro <<endl;
//    cout << &b <<endl;
//    cout << p <<endl;

//    int one = 110;
//    int &two = one;
//    cout << one << " " << two << endl;
//    two ++;
//    cout << one << " " << two << endl;
//    cout << &one << " " << &two << endl;

//    int c = 3;
//    cout << test(c++) << endl;  //12

//    cout << test(2.3) << endl;

//    cout << mul(5,1) << endl;

//    p1 ap[5];
//    p2 (*pa)[10];

//    char hi[] = {"qinzixuan"};
//    cout << replace(hi,'n','k');

//    map1 *mapP = new map1{1.2,8.5};
//    string str = plot(mapP);
//    cout << str << endl;

//    showTime(5, mu);

//    countDown(4);

//    array<string,3> names = {"one","two","three"};
//    displayName(&names);

//    string list[5];
//    for(int i=0;i<5;i++) {
//        getline(cin,list[i]);
//    }
//    display(list);

//    travelTime *day1 = new travelTime{4,50};
//    travelTime *day2 = new travelTime{3,20};
//
//
//    travelTime *allTime = totalTime(day1,day2);
//    cout << allTime->hours << ":" << allTime->mins << endl;

//    travelTime day1 = {3,50};
//    travelTime day2 = {4,20};
//
//    travelTime allTime = totalTime(day1,day2);
//    cout << allTime.hours << ":" << allTime.mins << endl;

//    char *str = "121";
//    char *p = returnArr(str);
//    cout << p << endl;
//    delete []p;

//    char one[] = "qinzixuan";
//    char *p = "qinzixuan";
//    cout << strlen(one) << endl;
//    cout << strlen(p) << endl;
//    cout << strlen("qinzixuan") << endl;

//    int ary[][4] = {{1,2,3,4},{1,5,6,12},{4,3,2,39}};
//    doubleAry(ary,3);


//    int ary[5] = {3,4,5,6,7};
//    twoPoint(ary,ary+5);

//    int ary[5] = {3,4,5,6,7};
//    test(ary,0);
//    test(ary+2,0);

//    int ary[6] = {1,2,3,4,1,2};
//    test(ary);

//    returnAry aryContent = testFunc();
//    cout << aryContent.ary[2] << endl;

//    test(10);

//    int line = 0;
//    char ch;
//    while (cin.get(ch) && ch != 'Q') {
//        if (ch == '\n') {
//            line ++;
//        }
//    }
//    cout << line;

//    string fileName;
//    cin >> fileName;
//    ifstream inF;
//    inF.open(fileName);
//    if (!inF.is_open()) {
//        cout << "error" << endl;
//        exit(EXIT_FAILURE);
//    }
//
//    double value;
//
//    while(inF >> value) {
//        cout << value;
//    }
//    if (inF.eof()) {
//        cout << "eof" << endl;
//    } else if (inF.fail()) {
//        cout << "fail" << endl;
//    } else {
//        cout << "don't no" << endl;
//    }
//
//    inF.close();

//    string autoM;
//    autoM = "nihao";
//    int year = 20;
//    double a_P = 20.340234234;
//
//    ofstream outF;    //输出到文件
//    //保存在cmake-build-debug
//      //有则打开，无则创建
//    outF.open("hello.txt");
//
//    outF << fixed;    //用普通方式输出浮点数
//    outF.precision(4);    //保留小数点后n位
//    outF.setf(ios_base::showpoint);
//    outF << autoM <<endl;
//    outF << year << endl;
//    outF << a_P << endl;
//    outF.close();

//    int i = 0;
//    while(i < 5) {
//        if (++i < 5) {
//            cout << i + 1 << endl;
//        }
//    }

//    int num;
//    cin >> num;
//    switch (num) {
//        case one:
//            cout << "one" << endl;
//            break;
//        case two:
//            cout << "two" << endl;
//            break;
//        case three:
//            cout << "three" << endl;
//            break;
//        case four:
//            cout << "four" << endl;
//            break;
//        case five:
//            cout << "five" << endl;
//            break;
//    }

//    char ch;
//    cin.get(ch);
//    while(ch!='.') {
//        if(ch == '\n') {
//            cout << ch;
//        } else {
//            cout << ch+1;
//        }
//        cin.get(ch);
//    }

//    int sum = 0;
//
//    while(1) {
//        int temp = 0;
//        cout << "please input" << endl;
//        cin >> temp;
//        if(temp == 0) {
//            break;
//        }
//        sum += temp;
//        cout << sum << endl;
//    }

//    int x = (1,124);
//    cout << x << endl;

//    char ch;
//    int count = 0;
//    cin.get(ch);
//    while(cin.fail() == false) {
//        cout << ch;
//        count ++;
//        cin.get(ch);
//    }
//    cout << endl << count << endl;

//    int testAry[5] = {5,4,3,2,1};
//
//    for (int item : testAry) {
//        cout << item << endl;
//    }
//
//    for (int &item : testAry) {
//        item *= 0.5;
//    }
//
//    for (int item : testAry) {
//        cout << item << endl;
//    }

//    string test = "?1243";
//    test[0] = '2';
//    cout << test << endl;

//    cout << hello(10) <<endl;

//    candy hello = {
//            "qinzixuan",
//            1.0,
//            123
//    };
//    cout << hello.name <<endl;

//    fish *p = new fish;
//    p->len = 20;
//    cout << p->len <<endl;

//    int size;
//    cin >> size;
//    vector<int> hello(size);

//    float treacle[5] = {1,2,3,4,5};
//    float *p = treacle;
//    cout << *p << endl;
//    cout << *(p+4);

//    double ted = 1.123;
//    double *pt;
//    pt = &ted;
//    cout << *pt ;

//    enum response {Yes = 1,No = 0,Maybe = 2};

//    fish mini;
//    mini.type = "haochiyu";
//    mini.weight = 20;
//    mini.len = 10;
//    cout << mini.type << mini.weight << mini.len;

//    string testS = "qinzixuan";
//    cout << testS;

//    char *ary;
//    ary = "nihao";
//    cout << ary << endl;

//    int len = 5;
//    int *ary = new int[len];
//
//    for (int i = 0;i < 5;i++) {
//        ary[i] = 2*i+1;
//        cout << ary[i] << endl;
//    }
//
//    int even = ary[0] + ary[len-1];
//    cout << even << endl;
//
//    delete []ary;

//    array<char,30> actor;

//    char *actor = new char[30];
//    short *betsie = new short[100];
//    actor[1] = 'a';
//    cout << actor[1];
//    delete []actor;
//    delete []betsie;


//    int a1[3] = {1,2,3};
//    vector<int> a2 = {1,2,3};
//    array<int,3> a3 = {3,4,5};
//    array<int,3> a4;
//    a4 = a3;


//    years s1,s2,s3;
//    s1.year = 1998;
//    years *pa = &s2;
//    pa->year = 1999;
//    years trio[3];
//    trio[0].year = 2003;
//    cout << trio->year << endl;
//    const years * ary[3] = {&s1,&s2,&s3};
//    cout << ary[0]->year << endl;
//    const years **ppa = ary;
//    auto ppb = ary;
//    cout << (*ppa)->year << endl;
//    cout << (*(ppb+1))->year << endl;

//    char *name;
//
//    name = getName();
//    cout << name << " at " << (int *)name << endl;
//    delete []name;
//
//    name = getName();
//    cout << name << " at " << (int *)name << endl;
//    delete []name;

//    inflatable *sp = new inflatable;
//
//    cin.get(sp->name,20);
//    cout << (*sp).name << endl;
//    cin >> (*sp).year ;
//    cout << sp->year;
//    delete sp;

//    char animal[20] = "bear";
//    const char *bird = "wren";
//    char *ps;
//
//    cout << animal << endl;
//    cout << bird << endl;
//
//    cin >> animal;
//    ps = animal;
//    cout << ps << endl;
//    cout << (int *)animal << endl;
//    cout << (int *)ps << endl;
//
//    ps = new char[strlen(animal) + 1];
//    strcpy(ps,animal);
//    cout << (int *)animal << endl;  //强转显示地址
//    cout << (int *)ps << endl;
//    delete []ps;
//    int size;
//    cin >> size;
//    int *p = new int[size];
//    *p = 1;
//    *(p+1) = 3;
//    for (int i =0;i < 2;i ++) {
//        cout << *(p+i) << endl;
//    }
//
//    delete []p;

//    int one[3] = {1,2,3};
//
//    int *p = one;
//
//    cout << sizeof(one) << endl;
//    cout << sizeof(p) << endl;
//    cout << one << endl;
//    cout << &one << endl;

//    double *p = new double[3];
//
//    p[0] = 1.0;
//    p[1] = 2.0;
//    p[3] = 3.0;
//
//    cout << p[0] << endl;
//    p += 1;
//    cout << p[0] << endl;
//    p -= 1; //使指针指回原来的地址
//    delete []p;

//    int upData = 6;
//    int *addData;
//    addData = &upData;
//
//    cout << upData << "  " << *addData << endl;
//    cout << &upData << "  " << addData << endl;
//    *addData += 1;
//    cout << upData;

//    widget prize;
//    for (int i =0;i < 2 ;i ++) {
//        prize.type = i;
//        i == 0 ? cin >> prize.idChar : cin >> prize.idNum;
//        i == 0 ? cout << prize.idChar : cout << prize.idNum;
//    }


//    testStruct oneS[2] = {
//            {"one",10,1},
//            {"two",20,2}
//    };
//
//    cout << oneS[0].name << "   " << oneS[1].name << endl;

//    testStruct oneS = {
//            "qinzixuan",
//            21,
//            1
//    };
//
//    testStruct twoS = {
//            "python",
//            20,
//            0
//    };
//
//    cout << oneS.name << endl;
//    cout << twoS.name << endl;

//    cout << R"(ni hao \n)" << endl;

//    const int days = 24*60*60;
//    const int hours = 60*60;
//    const int mins = 60;
//    long input;
//    cin >> input;
//
//    int day = input / days;
//    input %= days;
//    int hour = input / hours;
//    input %= hours;
//    int min = input / mins;
//    int s = input % mins;
//
//    cout << day<<endl;
//    cout << hour<<endl;
//    cout << min<<endl;
//    cout << s<<endl;

//    char a = 88;
//    cout << a;
//
//    cout.put(char(88));
//    cout << char(88);
//    cout << (char)88;
//    cout.put((char)88);

//    float a = 2.34e22f;
//    float b = a+1.0f;
//    cout.setf(ios_base::fixed,ios_base::floatfield);
//    cout << b-a <<endl;
//    cout << b << endl;

//    float one = 10.0/3.0;
//    double two = 10.0/3.0;
//    const float three = 1.0e6;
//
//    //让cout不用e表示法输出数据
//    cout.setf(ios_base::fixed,ios_base::floatfield);
//    cout << one*three <<endl;
//    cout << two*three << endl;
//    cout << three << endl;

//    char hello = 'A';
//    cout << hello << endl;
//    cout << 'A' << endl;
//    cout.put(hello);

//    int num = 42;
//    cout << num << endl;
//    cout << hex;
//    cout << num << endl;
//    cout << oct;
//    cout << num << endl;

//    int hello(11);
//    int hello{11};
//    int hello = {11};
//    cout << hello << endl;

//    int nInt = INT_MAX;
//    short nShort = SHRT_MAX;
//    long nLong = LONG_MAX;
//    long long nLLong = LLONG_MAX;
//
//    cout << sizeof(nInt) << endl;
//    cout << sizeof(nShort) << endl;
//    cout << sizeof(nLong) << endl;
//    cout << sizeof(nLLong) << endl;
//
//    cout << nInt << endl;
//    cout << nShort << endl;
//    cout << nLong << endl;
//    cout << nLLong << endl;
//
//    cout << CHAR_BIT << endl;
    return 0;
}

//void test(int n) {
//    cout << n << endl;
//}

#pragma clang diagnostic pop