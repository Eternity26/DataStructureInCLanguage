# 线性表
### 顺序表和链表的比较
|特点|顺序表|链表|
|---|---|---|
|逻辑结构|都属于线性结构，都是线性表|都属于线性结构，都是线性表|
|存储|顺序存储，随机存取，存储密度高|链式存储，不可随机存取，存储密度低|
|创建|需要分配大片存储空间 如果分配空间过小则不便拓展容量，分配空间过大则浪费空间|只需分配一个头结点(也可不用)和一个头指针，扩展容量方便|
|能否改变容量|静态分配无法改变容量，动态可以但时间代价高|改变容量方便|
|销毁|更改length=0 并且对于静态分配，系统自动销毁；对于动态分配，要手动free(因为malloc()分配的内存在堆区，系统不会自动回收)|手动free各个结点|
|插入&删除|需要向前/后移动后续元素，时间复杂度O(n)，时间复杂度主要来自于移动元素，时间代价更高|只要修改指针，时间复杂度O(n)，时间复杂度主要来自于查找元素，时间代价更低|
|按位查找|随机存取，时间复杂度O(1)|不可随机存取，需从第一个元素依次往后查找，时间复杂度O(n)|
|按值查找|如果元素排列无序，则需O(n)；如果有序，则需O(log2n)|O(n)|

### 总结：  
如果要更改表长，或要经常增删，就用链表；  
如果表长不需要变，只要查找，就用顺序表
