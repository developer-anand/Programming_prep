// Loop over the array and compare the element from left end of the array with the corresponding element from
//  the right end of the array. At any point, if the elements do not match, terminate the loop. If the whole loop completed,
//  then the array is palindrome.


public boolean isPalindrome(int[] array) {
	int length = array.length;
	for (int index = 0; index < array.length; index++) {
		// get the element from the start
		int start = array[index];
		// get corresponding element from end
		int end = array[--length];
		// check if elements till the middle have been compared
		if (length < index) {
			return true;
		}
		// if start element is not the same as end element, the array is not
		// palindrome
		if (start != end) {
			return false;
		}
	}
	// if the control reaches here, means all the elements were same
	return true;
}