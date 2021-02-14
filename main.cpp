#include <iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
/*
 *  构造哈夫曼树
 */
//哈夫曼树顺序表的定义
typedef struct{
    int weight;//权值
    int parent,lchild,rchild;
}HTNode;

typedef HTNode* HuffmanTree;

//初始化一个哈夫曼树
void InitHuffmanTree(HuffmanTree& HT,int m){
    //传入结点指针的引用，还有节点的个数m
    int i;
    HT=new HTNode[m];//开辟内存空间
    for(i=0;i<m;i++){//初始化哈夫曼树
        HT[i].weight=0;
        HT[i].lchild=-1;
        HT[i].rchild=-1;
        HT[i].parent=-1;
    }
}

//SelectMin函数：从n个节点中选取最小的两个节点
void SelectMin(HuffmanTree &HT,int n,int &min1,int &min2){
    //这里需要改变两个变量min1和min2，因此需要传入引用的方式来改变
    
}


