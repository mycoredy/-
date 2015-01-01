/*4. 学生成绩管理系统
现有学生成绩信息文件1（1.txt），内容如下（数据可以自拟）
姓名    学号   语文  数学   英语    
张明明  01     67    78      82
李成友  02     78    91      88
张辉灿  03     68    82      56
王露    04     56    45      77
陈东明  05     67    38      47
….      ..      ..     ..       …
学生成绩信息文件2（2.txt）,内容如下:
姓名    学号   语文  数学   英语    
陈果    31     57    68      82
李华明  32     88    90      68
张明东  33     48    42      56
李明国  34     50    45      87
陈道亮  35     47    58      77
….      ..      ..     ..       …
试编写一管理系统，要求如下：
1) 实现对两个文件数据进行合并，生成新文件3.txt
2) 抽取出三科成绩中有补考的学生并保存在一个新文件4.txt
3) 对合并后的文件3.txt中的数据按总分降序排序(至少采用两种排序方法实现)
4) 输入一个学生姓名后,能查找到此学生的信息并输出结果(至少采用两种查找方法实现)
5) 要求使用结构体，链或数组等实现上述要求。*/
#include <iostream>
#include <string>
using namespace std;
class Manger
{   public :
           string name;
            int number;
            int chinese;
            int math;
            int english;
            void read_txt();
            void stu_merge();
            void  make_up();
            void sort_1();
            void sort_2();
            void  stu_find();
}





























