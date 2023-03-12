#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of tree
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree ==  NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree->left);
		free(tree->right);
	}
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
