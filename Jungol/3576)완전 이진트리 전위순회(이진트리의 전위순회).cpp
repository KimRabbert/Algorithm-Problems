// Jungol 3576 완전 이진트리 전위순회(이진트리의 전위순회)
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

string tree;

void printPreorder(int node) {
	cout << tree[node];

	if (node * 2 < tree.size())
		printPreorder(node * 2);
	if (node * 2 + 1 < tree.size())
		printPreorder(node * 2 + 1);
}

int main() {
	int n;
	
	cin >> n;
	cin >> tree;

	tree = ' ' + tree;

	printPreorder(1);
}