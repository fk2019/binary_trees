#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another
 * node
 * @parent: parent node
 * @value: value to store
 *
 * Return: address of new node otherwise NULL on failure or if parent is
 * NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old;

	if (parent == NULL)
		return (NULL);
	old = parent->right;
	node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		node->right = old;
		old->parent = node;
	}
	parent->right = node;
	return (node);
}
