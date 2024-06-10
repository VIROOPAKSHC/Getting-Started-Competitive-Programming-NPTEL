def will_visit_all_cups(n):
    positions = set()
    current_pos = 0
    
    while True:
        if current_pos in positions:
            return "NO"
        positions.add(current_pos)
        if len(positions) == n:
            return "YES"
        
        current_pos = (current_pos + len(positions)) % n

# Test cases
test_cases = [7, 8, 14, 64, 256, 512, 420, 27, 1, 3]
for n in test_cases:
    result = will_visit_all_cups(n)
    print(f"Input: {n}, Output: {result}")