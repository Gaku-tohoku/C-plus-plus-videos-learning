#include <stdio.h>
/*
 通过回调函数的性质模拟早晨被叫醒的场景
 注意：闹钟和父母的行为是被抽象的
 共同的行为是，到一个时间点被触发。
 */
/************************************************************************/
/* 定义回调函数                                                                     */
/************************************************************************/
/*闹钟的行为*/
int clock(int time)
{
    if (time == 6)
    {
        printf("零零零零。。。。\n");
        return 1;
    }
    else
    {
        printf("我不出声，只是看着你。。。\n");
        return 0;
    }
    
}
/*父母的行为*/
int parent(int time)
{
    if (time >= 6)
    {
        printf("太阳晒屁股了，快起床！\n");
        return 1;
    }
    else
    {
        printf("我是不叫醒呢，不叫醒呢，还是不叫醒呢。。。\n");
        return 0;
    }
    
}
/************************************************************************/
/* 定义主调函数                                                                     */
/************************************************************************/
/*触发唤醒*/
int weakup(int(*p_func)(int), int time)
{
    if (!p_func(time)) /*没有到时间*/
    {
        printf("zzzzzzzzzzzzzzzzz\n");
        return 0;
    }
    else
    {
        if (time == 6)
        {
            printf("再睡一会儿。。。\n");
            return 0;
        }
        else
        {
            printf("好吧，你赢了，我起床。。。");
            return 1;
        }
    }
    
}

/*处理主框架，决定主调函数使用哪个函数指针*/
int main(int argc, char** argv)
{
    for (int i = 0; i <= 24; i++)
    {
        printf("当前时间：%d\n", i);
        if (weakup(clock, i))
        {
            break;
        }
        
        if (weakup(parent, i))
        {
            break;
        }
    }
    return 0;
}
