#include <stdio.h>
#include <iostream>
#include "defn.h"

using namespace std;

int genrePosition(int numGenre, Genre * genreList, char genre[]) // method to determine the position of the genre of the book
{
	for (int i = 0; i < numGenre; i++)
	{
		if (strcmp(genreList[i].genre, genre) == 0)
		{
			return i; // returns i when found, which is the index of the desired genre
		}
	}
	return -1; // returns -1 if not found, which will trigger fail case
}

void insertNode(BST *& root, Genre * genreList, BookInfo info, int genre)
{
	if (genreList[genre].root != NULL)
	{
		if (root != NULL)
		{
			if (root->left = NULL)
			{
				insertNode(root->left, genreList, info, genre);
			}
			else if (root->right = NULL)
			{
				insertNode(root->right, genreList, info, genre);
			}
		}
		BST * temp = new BST;
		temp->info = info;

	}
}

void main()
{

	int n, m;
	char genre[25];
	cin >> n; // set n = to number of genres

	Genre * genreList;
	genreList = new Genre[n]; // create array of genres of size n

	for(int i = 0; i < n; i++) // initialize the name of the genres for every element
	{
		cin.ignore();
		cin.getline(genreList[i].genre, 25);
	}

	cin >> m; // set m = to number of books

	BST * bstList;
	bstList = new BST[m]; // create an array of BST of size m, such that there is a root node for each Genre's tree

	for (int i = 0; i < n; i++) // set the root node pointer for each genre
	{
		BST * root = new BST; // create a root node
		root->left = NULL;
		root->right = NULL; // set left and right pointers to null
		genreList[i].root = root; // set the root pointer in the genreList to point to the root node in the bstList
	}
	
	for (int i = 0; i < m; i++) // starting for loop to parse info for m amount of books
	{
		int genrePos;
		cin.ignore;
		cin.getline(genre, 25); // input the name of the genre
		genrePos = genrePosition(n, genreList, genre); // call genrePosition method to determine where to put the book


	}


}