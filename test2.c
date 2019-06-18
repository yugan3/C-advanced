//1. 逆序输出（10分）
//题目内容：
//你的程序会读入一系列的正整数，预先不知道正整数的数量，一旦读到-1，就表示输入结束。然后，按照和输入相反的顺序输出所读到的数字，不包括最后标识结束的-1。
#include<stdlib.h>
#include<stdio.h>    
	//定义一个结点，该结点包含数据和指向前一个结点的指针
	//这有利于后面逆序输出  
    typedef struct _node {  
        int value;  
        struct _node *before;  
    } Node;  
      
    int main()
    {
      	Node * head = NULL;  //头结点初始化为空 
   		int number;  
   		while ( number != -1){  
    		scanf("%d", &number);  
    		if ( number != -1){  
        		Node *p = (Node*)malloc(sizeof(Node));  
        		p->value = number;  
        		p->before = head;  //p->before为头结点，将新结点p连接到链表（即p的指针指向头结点） 
        		head = p;  //再将头结点更新为p结点 
        		}  
    		}
    	Node *p;  //新建结点p进行遍历 
    	for ( p = head; p; p=p->before) {  
        	printf("%d ", p->value);  
        	}  
          
    return 0;  
    }
