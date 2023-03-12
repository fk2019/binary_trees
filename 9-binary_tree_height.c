#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to root node
 *
 * Return: size_t height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	height_l = tree->l ? 1 + binary_tree_height(tree->l) : 0;
	height_r = tree->r ? 1 + binary_tree_height(tree->r) : 0;
	return (height_l > height_r ? height_l : height_r);
}
