#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - this measures the depth of a node in binary tree
 * @tree: pointer to my node
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t my_depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		my_depth++;
		tree = tree->parent;
	}
	return (my_depth);
}
