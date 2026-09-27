// Jungol 3578 완전 이진트리 후위순회(이진트리의 후위순회)
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

string tree;

void printPostorder(int node) {

	if (node * 2 < tree.size())
		printPostorder(node * 2);

	if (node * 2 + 1 < tree.size())
		printPostorder(node * 2 + 1);

	cout << tree[node];
}

int main() {
	int n;

	cin >> n;
	cin >> tree;

	tree = ' ' + tree;

	printPostorder(1);
}