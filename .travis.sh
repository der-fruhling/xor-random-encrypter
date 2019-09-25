cmake CMakeLists.txt
make
echo Test.txt is here! > test.txt
./xorenc encrypt test.txt
./xorenc decrypt archive.aiz
if [[ "$(cat test.txt)" != "$(cat archive.bin)" ]]; then
    exit 1
fi
exit 0