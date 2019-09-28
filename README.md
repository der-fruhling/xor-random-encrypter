# xor-random-encrypter

![Build image here](https://api.travis-ci.com/LiamCoal/xor-random-encrypter.svg?branch=master)  
This was the result of me trying to build an Archiver, but getting distracted with the random function and xor.  
It was fun to make anyways.

## What this does

First, it generates 32 random long ints. Then it uses those long ints (keys) to encrypt the input data.
The file structure is:

KEYCOUNT * (8 on 64bit, 4 on 32bit, not compatible) bytes (keys)  
??? bytes (encrypted data)

## How to build it

### First build

Yes, these are different (thanks CLion)

```shell script
cmake -S . -B cmake-build-debug
cmake --build ./cmake-build-debug --target xorenc -- -j 2
```

### After first build

```shell script
cmake --build ./cmake-build-debug --target xorenc -- -j 2
```

## Plans (maybe)

- [ ] Option to increase number of keys?

## Done Plans

- [x] Key extractor!
