#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to root node of tree to measure the size
 *
 * Return: size otherwise 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (0);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
