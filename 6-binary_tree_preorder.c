#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: pointer to root node
 * @func: pointer to a function to call each node. The value in the node
 * must be passed as a parameter to this function
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
