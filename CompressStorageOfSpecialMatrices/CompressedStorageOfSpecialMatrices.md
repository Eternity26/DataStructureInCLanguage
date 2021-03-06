# 特殊矩阵的压缩存储
- 注意：矩阵中下标一般从1开始，数组一般从0开始，具体视题目而定
- 二维数组的行优先存储：给定a[M][N]的二维数组和它首元素的起始地址LOC，那么a[i][j]的地址为LOC+(i*N+j)*sizeof(ElemType)
- 二维数组的列优先存储：给定a[M][N]的二维数组和它首元素的起始地址LOC，那么a[i][j]的地址为LOC+(j*M+i)*sizeof(ElemType)
- 对称矩阵的压缩存储：
  - 可以只用一维数组存储主对角线和下三角区，或主对角线和上三角区；如果矩阵是n*n，那么数组的元素个数为1+2+...+n = (1+n)*n/2
  - 访问时，通过自己定义的映射函数访问，将要访问的矩阵元素下标转换成一维数组中的数组元素下标
  - 映射函数：
    - e.g.
    - 假设按照行优先的原则，存储主对角线和下三角区：(i>=j时)i行j列 => 第(1+2+...+i-1)+j个元素 => 第i*(i-1)/2+j个元素 => 数组下标为  
    i*(i-1)/2+j-1
      - 解释：在第i行之前一共有i-1行，并且对于这些行，它是第几行，它就有多少个元素，把它们加起来之后，再加上第i行里的j个元素，就得到了i行j列是第几个元素，最后要算数组下标，再减个1就可以了
    - 当j<i时，因为对称矩阵的对称性，  
    a[i][j] == a[j][i]，所以当i<j时(即为上三角区时)可以让i和j交换，代入i>j时的映射函数，得i行j列 => 数组下标j*(j-1)/2+i-1
- 三角矩阵的压缩存储：
  - 三角矩阵：下三角区或上三角区所有元素都相同，其余元素不一定相同
  - 可以只用一维数组存储元素不一定相同的区域，腾出最后一个数组元素(如果矩阵是n*n，那么它的下标为1+2+...+n=(1+n)*n/2)存放一定相同的元素
  - 映射函数：
    - e.g.
    - 对于下三角矩阵，即上三角区所有元素都相同的三角矩阵，假设按照行优先的原则，存储主对角线和下三角区：同对称矩阵，(i>=j时)i行j列 => 第(1+2+...+i-1)+j个元素 => 第i*(i-1)/2+j个元素 => 数组下标为  
      i*(i-1)/2+j-1
    - i<j时，即为上三角区时，所有元素都为数组最后一个元素(如果矩阵是n*n，下标为(1+n)*n/2)
- 三对角矩阵(带状矩阵)的压缩存储：
  - 三对角矩阵：主对角线及它相邻两条对角线元素不一定相同，除了这三条对角线其余元素都为0，即当|i-j|>1时，a<sub>i,j</sub> = 0
  - 可以只用一维数组存储三个对角线(即带状区域)，如果是行优先，那么除了第一行和最后一行只有两个元素，其他所有行都有三个元素，所以如果矩阵是n*n，那么数组元素个数为3n-2(第一行和最后一行都少了一个元素，不然就是3n)，最后一个元素下标为3n-3
  - 映射函数：
    - e.g.
    - 假设按照行优先的原则，对于i行j列的元素，且  
    |i-j|<=1，前i-1行共有3*(i-1)-1个元素(第一行少了一个)，a<sub>i,j</sub>是第i行的第j-i+2个元素(不适用于第一行)，两个加起来就是第2i+j-2个元素，数组下标就是2i+j-3
  - 已知数组下标k，即第k+1个元素，如何得到i，j?
    - 它在第i行，所以3*(i-1)-1<k+1<=3i-1，即，它肯定排在前i-1行元素的后面，但是可以是第i行元素的任意一个，包括最后一个
    - 解出来i>=(k+2)/3，我们需要i刚好大于等于(k+2)/3
    - 右式向上取整即可，i=⌈(k+2)/3⌉
    - 由k=2i+j-3，j=k-2i+3
- 稀疏矩阵的压缩存储：
  - 稀疏矩阵：非零元素<b>远远</b>小于矩阵元素的个数
  - 存储策略：
    1. 顺序存储——三元组：元素为三元组<行,列,值>的一维数组
    2. 链式存储——十字链表法：结点为<行,列,值,指向同行的下个元素的指针,指向同列的下个元素的指针>的链表，且另有两个指针数组，向下域和向右域，分别存储指向每一列的第一个结点的指针和指向每一行的第一个结点的指针
