#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - this check if tree is full
 * @tree: pointer to the root node
 * Return: 1 if full and zero otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
