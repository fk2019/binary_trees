#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another
 * node
 * @parent: parent node
 * @value: value to store
 *
 * Return: address of new node otherwise NULL on failure or if parent is
 * NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old;

	if (parent == NULL)
		return (NULL);
	old = parent->left;
	node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		node->left = old;
		old->parent = node;
	}
	parent->left = node;
	return (node);
}
