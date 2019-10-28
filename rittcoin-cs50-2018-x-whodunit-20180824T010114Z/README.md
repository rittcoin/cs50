# Questions

## What's `stdint.h`?

stdint.h is a library that declares sets of integer types as  specific widths and defines corresponding macros.


## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

'u' represents and unsigned integer of N bits. unsigned ints can hold 0 or positive numbers.
signed ints can hold positive, negative, and 0 numbers.

since unsigned ints can not hold negative numbers, uint can hold up to 2^16 numbers.
since signed ints can be negative, the computer uses a method called twos compliment to change the
value from postive to negative. The first digit is used to determine the sign of the number, therefore
signed ints can only hold 2^15 numbers.

we can represent -32767 to 32767 bits with signed ints and represent 0-65535 bits with uints.



## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE = 8 bits = 1 byte
DWORD = 32 bits = 4 bytes (positive only)
LONG = 64 bits = 8 bytes (positive or negative)
WORD = 16 bits = 2 bytes positive only
## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

ASCII: BM
hexa: 42 4d

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the whole bmp file, which includes the headerfiles.

while biSize is the size of the BITMAPINFOHEADER header file i.e. size of the struct

## What does it mean if `biHeight` is negative?
the bmp is top down, origin is in upper left corner
if positive bmp is bottom up and origin is in bottom left corner

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount
## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?
if the pointer to *inptr or *outptr do not exist. i.e. there is no pointee or a pointer that isnt
pointing to anything. the pointer isnt dereferenced.

## Why is the third argument to `fread` always `1` in our code?

1 is the number of blocks parameter of the fread function. i.e. that block of size N will be read 1 time
we only need to read 1 element
## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

indicates positon in the file you are reading and you can move the cursor accordinglu

## What is `SEEK_CUR`?

when moving the position indicator, move n number of bytes, from current position

## Whodunit?

it was PROFESSOR PLUM WITH THE CANDLESTICK IN THE LIBRARY!!!!!!
