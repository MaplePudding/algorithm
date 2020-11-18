func myAtoi(str string) int {
	str = strings.TrimSpace(str)

	width, substr := len(str), ""
	if width == 0 { return 0 }

	for i, char := range str {
		if char < 48 || char > 57 {
			if (char != 45 && char != 43) || i != 0{ break }
		}

		substr += string(char)
	}

	num, _ := strconv.Atoi(substr)

	if num > math.MaxInt32 { return math.MaxInt32 }
	if num < math.MinInt32 { return math.MinInt32 }
	return num
}