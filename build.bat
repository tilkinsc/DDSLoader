
@echo off

setlocal
	
	if [%1]==[debug] (
		set "args=-Wall -g -O2 -mwindows"
	) else (
		set "args=-Wall -O2 -mwindows"
	)
	
	REM Build...
	gcc %args% -Iinclude -L. -Llib -Ldll -o src/dds.o src/dds.c
	gcc %args% -I. -Iinclude -L. -Llib -Ldll -o src/main.o src/main.c
	
	REM Link...
	gcc %args% -I. -Iinclude -L. -Llib -Ldll -o bin/test.exe src/dds.o src/main.o
	
endlocal

