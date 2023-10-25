# Makefiles

# Introduction
* Are used to set up and customize compilation processes for files such as .c, .cpp files or just used to monitor changes in files and update them accordingly in a project.

# Syntax
* Makefiles are made up of rules, among other things, that define the execution flow of instructions.

## Rules
* The syntax for creating a rule is as follows:
```Makefile
<target>: <prerequisite> <prerequisite>
 <TAB>	recipe
```
* The Makefile's ultimate goal is to make sure that the defined target is up to date whenever dependencies defined in the prerequisites change such as a file being modified.
* The recipe defines the steps that are carried out inorder for the target to be made/updated.

## Example
```Makefile
main: main.o m.h
	gcc main.c -o main
```

