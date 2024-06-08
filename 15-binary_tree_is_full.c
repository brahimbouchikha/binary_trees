#include "binary_trees.h"

/**
 * is_a_full_binary_tree - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL or is not FULL
 *         Otherwise, 1.
 */
int is_a_full_binary_tree(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_a_full_binary_tree(tree->left) == 0 ||
		    is_a_full_binary_tree(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 If tree is NULL or is not full,
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_a_full_binary_tree(tree));
}
