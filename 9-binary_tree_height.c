#include "binary_trees.h"
/**
* binary_tree_height -  measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: height or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
	{
		return (0);
	}

	leftheight = binary_tree_height(tree->left) + 1;
	rightheight = binary_tree_height(tree->right) + 1;

	return (max(leftheight, rightheight));

}
