#include "binary_trees.h"

/**
 * binary_tree_nodes - measures size of a binary tree with at
 * least one node
 * @tree: pointer to root node of tree to measure the size
 *
 * Return: size otherwise 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (0);
	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
