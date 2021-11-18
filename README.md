# Buffer OverFlow presentation

## Before we start digging on challenges that explained on powerpoint we need to disable ASLR:
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

In each folder (01-hidden, 02-inject) there is a C code that vulnerable with Buffer OverFlow:

#### compile command hidden_func_app.c in 01-hidden is:
gcc -fno-stack-protector -z execstack hidden_func_app.c -m32 -o hidden_func_app -no-pie -masm=intel

#### compile command hidden_func_app.c in 01-hidden is:
gcc -fno-stack-protector -z execstack inject_app.c -m32 -o inject_app -no-pie -masm=intel
