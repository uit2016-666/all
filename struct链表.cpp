#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	string score;
	Student *next;
};
int main() {
	int n;//
	cout << "请输入学生的总数：";
	cin >> n;
	int i = 1;
	Student *p = NULL;
	Student *node = NULL;
	Student *head = NULL;
	//建立链表
	for (; i <= n; i++) {
		node = new Student;
		cout << "请输入第" << i << "个同学的姓名:";
		cin >> node->name;
		cout << "请输入第" << i << "个同学的成绩:";
		cin >> node->score;
		if (head == NULL)
			head = node;
		else
			p->next = node;
		p = node;
		if (i == n) {
			p->next = NULL;
		}
	}
	//输出链表
	p = head;
	cout << "链表已经建立!" << endl;
	cout << "\n==========下面输入刚才的数据=============\n" << endl;
	i = 1;
	while (p != NULL) {
		cout << "第" << i << "个同学===" << p->name << "==成绩====" << p->score << endl;
		p = p->next;
		i++;
	}
	//销毁链表
	Student *d;
	p = head;
	while (p != NULL) {
		d = p;
		p = p->next;
		delete d;
	}
	return 0;
}