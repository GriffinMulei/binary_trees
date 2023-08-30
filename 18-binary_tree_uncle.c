#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - this gets the uncles of node
 * @node: pointer to the noode
 * Return: uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
