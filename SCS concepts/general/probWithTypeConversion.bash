# Possible Problems with type conversions in bash

Pin_code = 1234
echo -n "4-digits pin code for authentication:  "
read -s INPUT_CODE; echo

if["$PIN_CODE" -ne "$INPUT_CODE" ]; then
    echo "Invalid Pin code"; exit 1
else 
    echo "Authentication OK"; exit 0
fi

# Potential Problems with Type Conversions:
# 1.Leading Zeros:
    # 1. If the user enters a PIN code with leading zeros (e.g. 0123), the comparison may fail because Bash treats numbers with leading zeros as octal numbers.

    # 2. Example: 0123 in octal is 83 in decimal, so the comparison 1234 -ne  0123 would be true, even though the user might expect it to be false.

# 2.Non-Numeric Input:
    # 1. If the user enters non-numeric input, the comparison using -ne will result in an error.

    # 2. Example: If the user enters abcd, the comparison will fail with an error message.

# 3.Empty Input:
    #1. If the user presses Enter without typing anything, the   INPUT_CODE will be empty, and the comparison will fail.