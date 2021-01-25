function myAtoi(s: string): number {
    const trimmedS = s.trim();
      if (trimmedS === "") return 0;
    
      const parsedInt = Number.parseInt(trimmedS, 10);
      if (Number.isNaN(parsedInt)) return 0;
    
      const minRange = Math.pow(-2, 31);
      if (parsedInt < minRange) return minRange;
    
      const maxRange = Math.pow(2, 31) - 1;
      if (parsedInt > maxRange) return maxRange;
    
      return parsedInt;
    };