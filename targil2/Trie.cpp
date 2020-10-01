#include "Trie.h"
using namespace std;

void Trie::del(string p, TrieNode* node, int count)
{
	//	if ((!node) && (count < p.length()))
	//		return;
	//	del(p, node->children[p[count] - 'a'], ++count);
	//	if (isChild(node))
	//		node->isEndOfWord = false;
	//	else
	//	{
	//		delete node;
	//	}
}

bool Trie::isChild(TrieNode* node)
{
	bool flag = false;
	for (int i = 0; i < 26; i++)
	{
		if (node->children[i])
			flag = true;
	}
	return flag;
}

void Trie::insert(string p) {
	TrieNode* temp = root;
	int i;
	for (i = 0; i < p.length(); i++)
	{
		if (temp->children[p[i] - 'a'])
			temp = temp->children[p[i] - 'a'];
		else
			break;
	}
	if (i == p.length()) {
		if (temp->isEndOfWord)
			cout << "The word is already exist in the tree\n";
		else
			temp->isEndOfWord = true;
		return;
	}
	
	for (int j = i; j <p.length(); j++) {
		temp->children[p[i] - 'a'] = new TrieNode();
		temp = temp->children[p[i] - 'a'];
	}
	temp->isEndOfWord = true;
}

bool Trie::del(string p) {
	if (!search(p))
		return false;
	del(p, root, 0);
	return true;
}

bool Trie::search(string p) {
	TrieNode* temp = root;
	for (int i = 0; i < p.length(); i++) {
		if (temp->children[p[i] - 'a'] != NULL) {
			temp = temp->children[p[i] - 'a'];
		}
		else
			return false;
	}
	if (temp->isEndOfWord) {
		return true;
	}
	else
		return false;
}

bool Trie::printAutoSuggestions(string)
{
	return true;
}

Trie::Trie() {
	root = new TrieNode();
	root->isEndOfWord = false;
}