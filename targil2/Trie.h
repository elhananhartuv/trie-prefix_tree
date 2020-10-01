#pragma once
#include <string>
#include "TrieNode.h"
using namespace std;

class Trie {
	TrieNode* root;
	void del(string, TrieNode*, int);
	//int printAutoSuggestions(string, TrieNode*);
	bool isChild(TrieNode*);

public:
	void insert(string);
	bool del(string);
	bool search(string);
	bool printAutoSuggestions(string);
	Trie();
	//~Trie();
};