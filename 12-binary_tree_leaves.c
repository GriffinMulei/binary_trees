#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in binaRY TREE
 * @tree: pointer to the root node
 * Return: number of leaves innit
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		num_leaves++;
	}
	num_leaves += binary_tree_leaves(tree->left);
	num_leaves += binary_tree_leaves(tree->right);

	return (num_leaves);
}
