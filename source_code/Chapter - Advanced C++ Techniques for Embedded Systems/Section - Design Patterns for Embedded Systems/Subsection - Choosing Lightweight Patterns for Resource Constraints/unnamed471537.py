def count_substring(file_path, substring):
count = 0
with open(file_path, 'r') as file:
for line in file:
count += line.count(substring)
yield line  # Simulate processing per line
return count