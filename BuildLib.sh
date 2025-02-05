# for debug
scons platform=linux arch=x86_64 debug_symbols=true lto=none -j8 use_llvm=yes

# for build
scons platform=linux target=template_release arch=x86_64 optimize=size use_llvm=yes

# use cmake
make -j
