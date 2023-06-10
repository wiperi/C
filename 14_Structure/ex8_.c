/* 8.巨人航空公司的机群由 12 个座位的飞机组成。它每天飞行一个航
班。根据下面的要求，编写一个座位预订程序。
a.该程序使用一个内含 12 个结构的数组。每个结构中包括：一个成员
表示座位编号、一个成员表示座位是否已被预订、一个成员表示预订人的
名、一个成员表示预订人的姓。
b.该程序显示下面的菜单：
To choose a function, enter its letter label:
a) Show number of empty seats
b) Show list of empty seats
c) Show alphabetical list of seats
d) Assign a customer to a seat assignment
e) Delete a seat assignment
f) Quit
c.该程序能成功执行上面给出的菜单。选择d)和e)要提示用户进行额外
输入，每个选项都能让用户中止输入。 
d.执行特定程序后，该程序再次显示菜单，除非用户选择f)。 */

#include <stdio.h>
#include <stdbool.h>
#define STRLEN 80
typedef struct {
    int seat_id;
    bool isbooked;
    char register_first_name[STRLEN];
    char register_second_name[STRLEN];
} seat;


