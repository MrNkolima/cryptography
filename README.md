# cryptography
Special for writting the algorithms and rehersals about the cryptography in C Language. Feel free to contribute.

## nkolima algorithm
- It follows that the algorithm determine the cipher text based on the **KEY** and the position of the word. I got an idea from the **caesar algorithm** which uses **KEY** only to encrypt the text, which is by the way less secure. Hence I came with this solution.
- Remember the **KEY** in this algorithm (demo) is **3**.
- Guys I need some solution in dencrypting this algorithm.
- The **formula** of the algorithm is given by::

```c
    cipherText[i] = 'a' + (((textInput[i] *  i * KEY - 'a')*KEY)%26);
```

## LICENCE
Use the algorithm whatever you like for **FREE**.
