#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node
 *
 * Return: 1 otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
	if (node->left)
		binary_tree_is_root(node->left);
	if (node->right)
		binary_tree_is_root(node->right);
}
