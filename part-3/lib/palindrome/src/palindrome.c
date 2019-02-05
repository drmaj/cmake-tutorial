int isPalindrome(int x){
	int n, reversedInteger = 0, remainder, originalInteger;
	n = x;
	originalInteger = n;    
	while(n!=0){
		remainder = n%10;
		reversedInteger = reversedInteger*10 + remainder;
		n /= 10;
	}
	if(originalInteger == reversedInteger){
		return 1;
	}
	else {
		return 0;
	}
}
