# Substitution Cipher

This program encrypts plaintext using a substitution cipher. The user provides a 26-character key that specifies the substitution for each letter of the alphabet.

## Description

A substitution cipher is a method of encoding by which units of plaintext are replaced with ciphertext, according to a fixed system. In this case, each letter of the alphabet is substituted with a corresponding letter from a user-provided key.

The program performs the following steps:
1. Validates the key provided by the user.
2. Prompts the user for plaintext.
3. Encrypts the plaintext using the substitution key.
4. Outputs the ciphertext.

## How to Use

### Prerequisites

- Install the CS50 library.
- Ensure you have a C compiler (e.g., `gcc`).

### Compilation

To compile the program, use the following command:
```sh
gcc -o substitution substitution.c -lcs50
