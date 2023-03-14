#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of a node
 * @node: pointer to node to find sibling
 *
 * Return: pointer to sibling node, NULL if node/parent is NULL
 * or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left && parent->right)
		return (parent->left == node ? parent->right : parent->left);
	else
		return (NULL);
}
