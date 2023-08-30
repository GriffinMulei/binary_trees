#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - this measures balance factor of binary tree
 * @tree: pointer to the root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height = 0;
	size_t l_height = 0;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}

