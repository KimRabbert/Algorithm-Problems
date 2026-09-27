// Jungol 3577 완전 이진트리 중위순회(이진트리의 중위순회)
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

string tree;

void printInorder(int node) {

	if (node * 2 < tree.size())
		printInorder(node * 2);

	cout << tree[node];

	if (node * 2 + 1 < tree.size())
		printInorder(node * 2 + 1);
}

int main() {
	int n;

	cin >> n;
	cin >> tree;

	tree = ' ' + tree;

	printInorder(1);
}