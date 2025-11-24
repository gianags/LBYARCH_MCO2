nasm -f win64 asmMCO.asm
gcc -c MCO.c -o MCO.obj -m64
gcc MCO.obj asmMCO.obj -o MCO.exe -m64
MCO.exe