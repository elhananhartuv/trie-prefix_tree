#pragma once
#include "TrieNode.h"

TrieNode::TrieNode()
{
	isEndOfWord = false;
	for (int i = 0; i < 26; i++)
	{
		children[i] = NULL;
	}
	isEndOfWord = false;
}


TrieNode::~TrieNode()
{
}