git clone https://github.com/google/googletest.git
mkdir googletest/build
cmake -S googletest -B googletest/build
sudo make -C googletest/build/ install
rm -rf googletest
