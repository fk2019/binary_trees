#include "binary_trees.h"

/**
 * binary_tree_leaves - measures size of a binary tree
 * @tree: pointer to root node of tree to measure the size
 *
 * Return: size otherwise 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (0);
	leaves += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}

/**
 * binary_tree_height - check tree height
 * @tree: pointer to root node
 *
 * Return: height otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * _pow - returns power
 * @base: base
 * @exponent: exponent
 *
 * Return: power
 */
int _pow(int base, int exponent)
{
	int result;

	result = 1;
	while (exponent > 0)
	{
		result = result * base;
		exponent--;
	}
	return (result);
}

/**
 * binary_tree_is_perfect - checks if a tree is a perfect
 * a perfect tree of height h => 2^h = no. of leaves
 * @tree: pointer to the tree
 *
 * Return: 1 otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, num_leaves;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	num_leaves = binary_tree_leaves(tree);
	return (_pow(2, height) == num_leaves ? 1 : 0);
}
