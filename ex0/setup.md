Setup
====

Install MSYS2 following these [instructions](msys2.org)

Install MinGW in MSYS2 with
```bash
# choose ONE of these, based on your PC
$ pacman -S mingw-w64-i686-toolchain #32-bit
$ pacman -S mingw-w64-x86_64-toolchain #64-bit
```

More MSYS2 setup can be found [here](https://gist.githubusercontent.com/roblogic/b401aa68d0a7c7c96095fa64a7c9f684/raw/1b26ac62e8bb8139942da832b27560953f4ec558/msys2-setup.md)

Of the base-devel we will need
```bash
$ pacman -S binutils
$ pacman -S make
```
among others.
