int[] mergeSort(int[] arr) {
	int len = arr.length;
	if (len < 2) {
		return arr;
	}
	int middle = len/2;
	int[] left = arr.sub(0 ,middle);
	int[] right = arr.sub(middle);
	return merge(mergeSort(left) ,mergeSort(right));
}

int[] merge(int[] left ,int[] right) {
	int[] result = NULL;
	while(left.lenght > 0 && right.length > 0) {
		if (left[0] <= right[0]) {
			result.push(left.shift());
		} else {
			result.push(right.shift());
		}
	}
	
	while(left.length) {
		result.push(left.shift());
	}
	while(right.length) {
		result.push(right.shift());
	}
	return result;
}