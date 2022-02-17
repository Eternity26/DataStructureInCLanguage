# 排序
- 定义：重新排列表中元素使其按关键字排列
- 评价指标：
  1. 时间复杂度
  2. 空间复杂度
  3. 稳定性(重点)![](1.png)
- 分类
  1. 内部排序：数据都在内存中
      - 关注如何使算法时间、空间复杂度更低 
  2. 外部排序：数据过多，无法全部放入内存
      - 关注如何减少读写磁盘次数
- 插入排序：
  - 直接插入排序
    - 思路：每次将下一个未排序的元素插入到已排序的序列中
    - 实现：第一个元素认为已经排序，从第二个元素开始，每次从未排序的元素从后往前遍历，用temp临时变量储存未排序的元素，每次遍历时让遍历的前一个元素覆盖被遍历的元素(相当于元素后移，给要被放进序列的未排序的元素让位)，直到未排序的元素大于被遍历的前一个元素或者已经遍历到第一个元素，这个时候把temp赋给被遍历的元素
    - 空间复杂度：O(1)
    - 时间复杂度：来源于对比关键字、移动元素
    - 最好情况：要排序的序列已经有序，每次只要对比元素1次，移动元素0次，一共n-1次，时间复杂度O(n)
    - 最坏情况：要排序的序列是逆序，第i趟要对比i+1次，移动i+2次，时间复杂度O(n<sup>2</sup>)
    - 平均：O(n<sup>2</sup>)
    - 稳定性：稳定
  - 优化：折半插入排序
    - 思路：查找未排序的元素插入的位置时用折半查找，其余步骤和直接插入相同
    - 实现：每次将已排序列表的第一个元素作为low，最后一个元素作为high，low>high时折半查找停止，把low到被插入元素的前一个位置的所有元素右移一次，把要插入的元素放在原来low的位置
      - 注意：当mid和被插入的元素相同时不停止查找，继续在mid的右边的序列查找(low=mid+1)，为了保证算法稳定性
      - 注意：当low比被插入元素的前一个位置还大时，不移动元素
  - 对链表的插入排序
    - 特点：移动元素的次数变少，但比对关键字仍然时O(n<sup>2</sup>)
- 希尔排序：
  - 图解：![](s1.png)![](s2.png)![](s3.png)![](s4.png)
  - 注意：最后一次的增量必定是1
  - 注意：考试中增量不一定是前一次的一半，可能是任意的
  - 高频题型：给定序列及每次的增量，判断每次排序后的状态
  - 代码实现注意：ShellSort.cpp的直接插入排序步骤是在多个子表中交替进行的
  - 空间复杂度：O(1)
  - 时间复杂度：和增量序列选择有关，O(n<sup>1.3</sup>)~O(n<sup>2</sup>)(d一开始=1，直接插排)
  - 稳定性：不稳定
  - 局限性：仅适用于顺序表
- 冒泡排序：
  - 思路：第一趟从第一个元素开始，从前往后比较两两元素的值，如果逆序就交换，第二趟从第二个元素开始，以此类推。如果有任何一趟没有发生交换，就排序完成
  - 稳定性：稳定
  - 空间复杂度：O(1)
  - 时间复杂度：
    - 最好情况(有序)：O(n)
      - 比较次数=n-1，交换次数=0
    - 最坏情况(倒序)：O(n<sup>2</sup>)
      - 比较次数=n(n-1)/2=交换次数=移动次数/3
    - 平均：O(n<sup>2</sup>)
  - 适用性：可用于顺序表、链表
- 快速排序：
  - 思路：