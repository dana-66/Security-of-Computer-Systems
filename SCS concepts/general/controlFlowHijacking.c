// 1. Unsigned Integer Overflow and Branch Misdirection:
unsigned int x;
read(x);
if (x + 1 < 10) {
    //assume x < 9
    //allocata x resources...
}else{
    // assume x >= 9
}
// the then branch can be taken with x = 2^n-1
// unsigned int is a data type that cannot represent negative values, and its range is [0, 2ⁿ - 1], where n is the bit-width (e.g., for a 32-bit system, the range is [0, 2³² - 1]).
// The condition if (x + 1 < 10) is expected to verify that x is less than 9. However, due to integer overflow, if x is at its maximum value (e.g., 2ⁿ - 1), adding 1 to it will wrap around to 0 (this is because of modular arithmetic in unsigned types).

// x = 2³² - 1 (maximum value of unsigned int) → x + 1 = 0 due to overflow.
// This makes the condition 0 < 10 true, and the then branch is executed, even though logically, x should have been treated as greater than or equal to 9.


//2. Signed-to-Unsigned Type Conversion and Branch Hijacking:
signed int x = -1;
unsigned int y - 1;
if(x < y){
    //...
}else {
    //this should never happen ...
}

// the else branch is always taken!
// (-1 being converted into a large unsigned value)

// integer is implicitly converted to an unsigned integer. In this case, -1 is
// converted to 4294967295 (the maximum value for a 32-bit unsigned integer).
// Control-Flow Hijacking: As a result, the condition if (x < y) becomes if
// (4294967295 < 1), which is false. Therefore, the "else" branch is always taken,
// even though the comment suggests it should never happen. This can lead to
// unexpected behavior and potential security vulnerabilities.