#include "Iterator.h"

Iterator::Iterator(const Queue& q): que(q) {
	pointer = que.getPointerHead();
}

Iterator::~Iterator() {
	pointer = 0;
}

void Iterator::start() {
	if (que.isEmpty()) {
		std::cout << "������� �����" << std::endl;
	}
	pointer = que.getPointerHead();
}

void Iterator::next() {
	if (!que.isEmpty()) {//���� ������� �� �����, ���� ���������
		pointer=(pointer+1)%que.maxSize;
	}
}

int Iterator::getValue() const{
	if (que.isEmpty()) {//���� ������� �����
		exit(0);
	}
	return que.mas[pointer];
}

bool Iterator::finish() const{
	if (que.isEmpty()) {//���� ������� �����
		exit(0);
	}
	return pointer==que.getPointerTail();
}