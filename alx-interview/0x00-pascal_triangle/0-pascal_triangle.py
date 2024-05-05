def pascal_triangle(n):
    if n <= 0:
        return []
    rows = []
    
    for i in range(n):
        rows.append([])
        rows[i].append(1)
        
        if i >= 1:
            for j in range(1, i):
                rows[i].append(rows[i - 1][j - 1] + rows[i - 1][j])
            rows[i].append(1)
        
    return rows