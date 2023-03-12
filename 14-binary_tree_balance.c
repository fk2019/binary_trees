#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance of a binary tree
 * @tree: pointer to root node
 *
 * Return: size_t balance or 0 if tree is NULL
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance_l, balance_r;

	if (tree == NULL)
		return (0);
	balance_l = tree->left ? 1 + binary_tree_balance(tree->left) : 1;
	balance_r = tree->right ? 1 + binary_tree_balance(tree->right) : 1;
	return (balance_l > balance_r ? balance_l : balance_r);
}
