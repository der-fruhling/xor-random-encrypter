cmake CMakeLists.txt
make
echo 40621132000044997979402552313235609781409769925088072260385068416613617917593770828707404079122997163599340851123456782619250795 > test.txt
echo Encrypting...
./xorenc encrypt test.txt
echo Decrypting...
./xorenc decrypt archive.aiz
if [[ "$(cat test.txt)" != "$(cat archive.bin)" ]]; then
    echo "$(cat test.txt)" != "$(cat archive.bin)"
    exit 1
fi
exit 0