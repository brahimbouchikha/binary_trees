#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: NULL If node is NULL or has no uncle,
 *         Otherwise, a pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gp = node->parent->parent;

	if (node == NULL ||	node->parent == NULL || gp == NULL)
		return (NULL);
	if (gp->left == node->parent)
		return (gp->right);
	return (gp->left);
}
