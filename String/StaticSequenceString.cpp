//
// Created by 21182 on 2021/8/26.
//
#define MAXLEN 20//
// 静态存储串，长度不可变化

//方式一：用静态数组ch存储串的内容，用int变量length存储串长
//typedef struct{
//    char ch[MAXLEN];
//    int length;
//}SString;

//缺点：字符串字符位置和位序不一致

//方式二：用静态数组ch存储串的内容，用ch[0]字符存储串长
//typedef struct{
//    char ch[MAXLEN];
//}SString;
//之后将ch[0]设为'0'，并且在操作时也要始终保证它等于串长

//注意：由于char类型数组的第一个元素是char类型，因此如果用这个元素储存长度，
//就会有缺点：因为char类型的大小限制为1B(yte)，所以它只能存储0~255范围的长度

//优点：由于char类型数组的第一位被长度挤占，所以字符串字符的位置不像数组一样从0开始，
//而是从1开始，保证了它和位序一致

//方式三：用静态数组ch存储串的内容，在结尾添加'\0'，不用变量存储串长
//typedef struct{
//    char ch[MAXLEN];
//}SString;

//之后将ch[0]设为'\0'，并且在操作时也要始终保证最后一个字符是'\0'
//要遍历时，将中止条件设为元素不等于'\0'，就不用使用长度

//但是，它有缺点：如果要经常获取长度，那么每一次获取都要遍历一遍

//方式四(推荐)：用静态数组ch存储串的内容，废弃ch[0]不用，用int变量length存储串长
typedef struct {
    char ch[MAXLEN];
    int length;
} SString;
//之后要修改或访问时，始终只从ch[1]开始

//优点：吸收了方案一和方案二的优点，既可以记录不局限于在0~255之间的长度，又可以
//保证字符串字符位置从1开始，和位序一致
static bool StrAssign(SString &s1, char str[]);

static bool StrCopy(SString &s1, char str[]);

static bool StrEmpty(SString s1);

static bool StrLength(SString s1);

static void ClearString(SString &s1);

static bool Concat(SString &T, SString s1, SString s2);

static bool SubString(SString &sub, SString S, int pos, int len);

static int StrCompare(SString s1, SString s2);

static int Index(SString S, SString T);

static bool StrAssign(SString &s1, char str[]) {
    int i = 1;
    for (; str[i] != '\0'; i++) {
        if (i > MAXLEN)
            return false;
        s1.ch[i] = str[i - 1];
    }
    s1.length = i - 1;
    return true;
}

static bool StrCopy(SString &s1, char str[]) {
    int i = 1;
    for (; str[i] != '\0'; i++) {
        if (i > MAXLEN)
            return false;
        s1.ch[i] = str[i - 1];
    }
    s1.length = i - 1;
    return true;
}

static bool StrEmpty(SString s1) {
    return (s1.length == 0);
}

static bool StrLength(SString s1) {
    return s1.length;
}

static void ClearString(SString &s1) {
    s1.length = 0;
}

static bool Concat(SString &T, SString s1, SString s2) {
    if (s1.length + s2.length > MAXLEN)
        return false;
    for (int i = 1; i <= s1.length; i++) {
        T.ch[i] = s1.ch[i];
    }
    for (int j = 1; j <= s2.length; j++) {
        T.ch[s1.length + j] = s2.ch[j];
    }
    return true;
}

static bool SubString(SString &sub, SString S, int pos, int len) {
    if (pos + len - 1 > S.length)
        return false;
    for (int i = pos; i < pos + len; i++) {
        sub.ch[i - pos + 1] = S.ch[i];
    }
    return true;
}

static int StrCompare(SString s1, SString s2) {
    for (int i = 1; i <= s1.length && i <= s2.length; i++) {
        if (s1.ch[i] != s2.ch[i])
            return s1.ch[i] - s2.ch[i];
    }
    return s1.length - s2.length;
}

static int Index(SString S, SString T) {
    if (S.length < T.length)
        return false;
    int i = 1;
    while (i <= S.length - T.length + 1) {
        SString sub;
        SubString(sub, S, i, T.length);
        if (StrCompare(sub, T) == 0)
            break;
        else
            i++;
    }
}