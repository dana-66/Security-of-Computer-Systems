
name = "Alice"
new_name = name.replace("A", "E")

print(name)       # Output: Alice (Original string is unchanged)
print(new_name)   # Output: Elice (A new string is returned)

# name remains unchanged. The replace() method returns a new string instead of modifying the existing one.