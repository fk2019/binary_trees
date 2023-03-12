#include "binary_trees.h"

/**
 * binary_tree_leaves - measures size of a binary tree
 * @tree: pointer to root node of tree to measure the size
 *
 * Return: size otherwise 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (0);
	leaves += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
