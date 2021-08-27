//
// Created by 21182 on 2021/8/26.
//

//typedef struct StringNode{
//    char ch;
//    StringNode* next;
//}StringNode,* String;

//缺点：存储密度低：每存放一个字符(1 Byte)就要一个指针(4 Bytes)

//改进：每个结点存放4个字符,提高存储密度
//并且在最后有结点没有填充满时,应该用一些特殊的字符填充,如'#'或'\0'
typedef struct StringNode{
    char ch[4];
    StringNode* next;
}StringNode,* String;