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
	cout << "������ѧ����������";
	cin >> n;
	int i = 1;
	Student *p = NULL;
	Student *node = NULL;
	Student *head = NULL;
	//��������
	for (; i <= n; i++) {
		node = new Student;
		cout << "�������" << i << "��ͬѧ������:";
		cin >> node->name;
		cout << "�������" << i << "��ͬѧ�ĳɼ�:";
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
	//�������
	p = head;
	cout << "�����Ѿ�����!" << endl;
	cout << "\n==========��������ղŵ�����=============\n" << endl;
	i = 1;
	while (p != NULL) {
		cout << "��" << i << "��ͬѧ===" << p->name << "==�ɼ�====" << p->score << endl;
		p = p->next;
		i++;
	}
	//��������
	Student *d;
	p = head;
	while (p != NULL) {
		d = p;
		p = p->next;
		delete d;
	}
	return 0;
}