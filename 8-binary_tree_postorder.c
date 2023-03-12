#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal
 * @tree: pointer to root node
 * @func: pointer to a function to call each node. The value in the node
 * must be passed as a parameter to this function
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
