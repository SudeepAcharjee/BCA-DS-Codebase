# Arithmetic Operators
num1 = 20
num2 = 5

addition = num1 + num2
subtraction = num1 - num2
multiplication = num1 * num2
division = num1 / num2
floor_division = num1 // num2
modulus = num1 % num2
exponentiation = num1 ** num2

# Comparison Operators
equal_to = num1 == num2
not_equal_to = num1 != num2
greater_than = num1 > num2
less_than = num1 < num2
greater_equal = num1 >= num2
less_equal = num1 <= num2

# Logical Operators
logical_and = (num1 > 10) and (num2 < 10)
logical_or = (num1 > 10) or (num2 < 10)
logical_not = not (num1 > 10)

# Assignment Operators
x = 10
x += 5
x -= 3
x *= 2
x /= 4
x %= 3
x //= 2
x **= 3

# Bitwise Operators
bit_and = 0b110 & 0b101
bit_or = 0b110 | 0b101
bit_xor = 0b110 ^ 0b101
bit_not = ~0b101
bit_left_shift = 0b101 << 2
bit_right_shift = 0b101 >> 1

# Print Results
print("Arithmetic Operators:")
print("Addition:", addition)
print("Subtraction:", subtraction)
print("Multiplication:", multiplication)
print("Division:", division)
print("Floor Division:", floor_division)
print("Modulus:", modulus)
print("Exponentiation:", exponentiation)

print("\nComparison Operators:")
print("Equal To:", equal_to)
print("Not Equal To:", not_equal_to)
print("Greater Than:", greater_than)
print("Less Than:", less_than)
print("Greater Than or Equal To:", greater_equal)
print("Less Than or Equal To:", less_equal)

print("\nLogical Operators:")
print("Logical AND:", logical_and)
print("Logical OR:", logical_or)
print("Logical NOT:", logical_not)

print("\nAssignment Operators:")
print("Final Value of x:", x)

print("\nBitwise Operators:")
print("Bitwise AND:", bin(bit_and))
print("Bitwise OR:", bin(bit_or))
print("Bitwise XOR:", bin(bit_xor))
print("Bitwise NOT:", bin(bit_not))
print("Bitwise Left Shift:", bin(bit_left_shift))
print("Bitwise Right Shift:", bin(bit_right_shift))
