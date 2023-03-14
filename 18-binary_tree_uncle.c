#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of a node
 * @node: pointer to node to find uncle
 *
 * Return: pointer to uncle node, NULL if node/parent is NULL
 * or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	grandpa = node->parent->parent;
	if (grandpa == NULL || grandpa->left == NULL || grandpa->right == NULL)
		return (NULL);
	return (node->parent == grandpa->left ? grandpa->right : grandpa->left);
}
