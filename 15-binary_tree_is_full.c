#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is a full
 * @tree: pointer to the tree
 *
 * Return: 1 otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
}
