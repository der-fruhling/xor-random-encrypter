cmake CMakeLists.txt
make
echo Test.txt is here! > test.txt
echo Encrypting...
./xorenc encrypt test.txt
echo Decrypting...
./xorenc decrypt archive.aiz
if [[ "$(cat test.txt)" != "$(cat archive.bin)" ]]; then
    echo "$(cat test.txt)" != "$(cat archive.bin)"
    exit 1
fi
exit 0