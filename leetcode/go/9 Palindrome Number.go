func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	magic := []int8{}
	for x != 0 {
		magic = append(magic, int8(x%10))
		x /= 10
	}
	for i := 0; i < len(magic)/2; i++ {
		if magic[i] != magic[len(magic)-1-i] {
			return false
		}
	}
	return true
}