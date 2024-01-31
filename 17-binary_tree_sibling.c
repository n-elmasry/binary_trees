#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: a pointer to the node to find the sibling
* Return: a pointer to the sibling node or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left && parent->right)
{
		if (parent->left == node)
		{
			return (parent->right);
		}

		else
		{
			return (parent->left);
		}
}
else
{
		return (NULL);
}
}
