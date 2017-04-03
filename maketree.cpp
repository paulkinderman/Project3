void MakeTree(TreeType<int> & tree1, const int * arr, int start, int end){
	if (start > end){
		return;
	}
	int mid = (start+end)/2;
	tree1.PutItem(arr[mid]);
	MakeTree(tree1, arr, start, mid-1);
	MakeTree(tree1, arr, mid+1, end);
}