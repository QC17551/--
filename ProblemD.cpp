#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

struct TreeNode{
	char val;
	TreeNode* left;
	TreeNode* right;
};
unordered_map<char,int>hashi;

TreeNode* buildTree(string preorder,int pl,int pr,string inorder,int il,int ir)
{
	if(pl>pr)	return nullptr;
	TreeNode* root=new TreeNode;
	root->val=preorder[pl];
	int pos=hashi[preorder[pl]];
	root->left=buildTree(preorder,pl+1,pos-1-il+pl+1,inorder,il,pos-1);
	root->right=buildTree(preorder,pr-(ir-pos-1),pr,inorder,pos+1,ir);
	return 	root;
}

void postOrder(TreeNode* root)
{
	if(root)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->val;
	}
}
int main()
{
	string preorder,inorder;
	cin>>preorder>>inorder;
	
	int n=preorder.size()-1;
	
	for(int i=0;i<inorder.size();i++)
		hashi[inorder[i]]=i;
	TreeNode *root=buildTree(preorder,0,n,inorder,0,n);	
	postOrder(root);
	return 0;	
} 

//ABDGCEFH
//DGBAECHF
