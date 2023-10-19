#### GNU Debugger (gdb) - отладчик проекта GNU.

#### GCC keys for debug

- gcc -g <0,1,2,3> - debug information levels
- gcc -o <0,1,2,3> - optimization levels
- gcc -ggdb - produce debugging info for GDB.

#### Примеры использования:
- gdb /.executable
- gdb ./executable -c core - создаст файл coredump
- gdb ./executable -pid pricess-id - отладка работающего процесса.

#### Для создания файлов (core dump) нужно указать параметр:
- ulimit -c unlimited - turn on creating core files

#### Внутри консоли gdb:
- help [command]
- info
	- args
	- breakpoints
	- watchpoints
	- registers
	- threads
	- signals
- where

#### Команды:
- r/run
- c/continue
- finish - to the end of function
- kill
- q/quit

#### Команды по шагам:
- step (into a function)
- next (next line of code)
- until line-number
- stepi/nexti step for assembler instruction

