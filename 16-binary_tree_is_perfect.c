#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node
 * Return: one if perfect or zero if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_lef = 0;
	int perfect_rig = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		perfect_lef = binary_tree_is_perfect(tree->left);
		perfect_rig = binary_tree_is_perfect(tree->right);

		return (perfect_lef && perfect_rig);
	}
	return (1);
}
/**
 * binary_tree_balance - this measures balance factor
 * @tree: pointer to the root node
 * Return: balance factor of tree otherwise zero
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
	size_t height_rig = 0;
	size_t height_lef = 0;

	if (tree == NULL)
		return (0);
	height_lef = binary_tree_height(tree->left);
	height_rig = binary_tree_height(tree->right);

	if (height_lef > height_rig)
		return (height_lef + 1);
	else
		return (height_rig + 1);
}
