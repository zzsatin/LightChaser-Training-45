#include<stdio.h>
typedef struct {
    char name[20];
    int score;
} Student;  //结构体起别名为Student
int main() {
    Student stu[3];  
    int i;
    for (i = 0; i < 3; i++) {
        printf("请输入第%d个学生的姓名和成绩: ", i + 1);//输入学生姓名和成绩
        scanf("%s %d", stu[i].name, &stu[i].score);
    }
    printf("学生信息如下:\n");
    for (i = 0; i < 3; i++) {
        printf("姓名: %s, 成绩: %d\n", stu[i].name, stu[i].score);
    }
    return 0;
}