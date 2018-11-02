
int f = 0, r = 0, sz = 512;     //f入队游标，r出队游标，sz队大小
int queue[sz];                  //队存储空间

void enqueue(int item)          //环形队列，当数组游标到达sz后，游标变为0
{
    f %= sz;
    queue[f++] = item;
}
int dequeue(void)
{
    r %= sz;
    return queue[r++];
}
int is_empty(void)
{
    return f == r;
}
int is_full(void)
{
    return (f+1)%sz == r; 
}
