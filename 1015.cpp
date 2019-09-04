#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
typedef struct student {
    int id;
    int d;
    int c;
} Student;
bool cmp(Student &t1, Student &t2)
{
    if ((t1.d+t1.c) != (t2.d+t2.c)) {
        return (t1.d+t1.c)>(t2.d+t2.c);
    }
    else {
        if (t1.d != t2.d) return t1.d>t2.d;
        else return t1.id<t2.id;
    }
}
int main()
{
    int N, L, H, i, cnt;
    cnt = 0;
    int id, d, c;
    scanf("%d %d %d", &N, &L, &H);
    vector<Student> test1;
    vector<Student> test2;
    vector<Student> test3;
    vector<Student> test4;
    Student stu;
    for (i = 0; i < N; i ++) {
        cin >> id >> d >> c;
        stu.id = id, stu.d = d, stu.c = c;
        if (d < L || c < L) {
            cnt ++;
            continue;
        }
        else if (d >= H && c >= H) test1.push_back(stu);
        else if (d >= H) test2.push_back(stu);
        else if (d >= c) test3.push_back(stu);
        else test4.push_back(stu);
    }
    sort(test1.begin(), test1.end(), cmp);
    sort(test2.begin(), test2.end(), cmp);
    sort(test3.begin(), test3.end(), cmp);
    sort(test4.begin(), test4.end(), cmp);
    vector<Student>::iterator p;
    cout << N-cnt << endl;
    p = test1.begin();
    while (p != test1.end()) {
        printf("%d %d %d\n", (*p).id, (*p).d, (*p).c);
        ++ p;
    }
    p = test2.begin();
    while (p != test2.end()) {
        printf("%d %d %d\n", (*p).id, (*p).d, (*p).c);
        ++ p;
    }
    p = test3.begin();
    while (p != test3.end()) {
        printf("%d %d %d\n", (*p).id, (*p).d, (*p).c);
        ++ p;
    }
    p = test4.begin();
    while (p != test4.end()) {
        printf("%d %d %d\n", (*p).id, (*p).d, (*p).c);
        ++ p;
    }
}

