#pragma once
#include <iostream>
using namespace std;

class TrieNode
{
public:
	TrieNode* children[26];
	bool isEndOfWord;
	TrieNode();
	~TrieNode();
};