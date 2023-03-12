#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a binary tree
 * @tree: pointer to root node
 *
 * Return: size_t depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
