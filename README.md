# Interactive Shell Program README

## Overview

This project is an implementation of a user-defined interactive shell program designed to manage processes within a Unix-like operating system. It is developed in C/C++ and features a modular design that supports executing system commands (e.g., emacs, vi), managing foreground and background processes, and handling input/output redirections and pipes. The shell can interpret and execute commands entered by the user, distinguishing between built-in commands (like `cd`, `ls`, `pwd`, `echo`) and external system commands. It supports a variety of functionalities, including process management with background execution (`&` operator), command tokenization (using `strtok`), and advanced features like file search, I/O redirection, pipeline processing, and simple signal handling.

## Key Features

- **Dynamic Prompt Display**: Shows the current user, system name, and working directory.
- **Command Execution**: Supports both built-in commands (`cd`, `echo`, `pwd`, `ls`, `pinfo`, `search`) and external system commands, with support for foreground and background execution.
- **Input/Output Redirection**: Handles redirection (`<`, `>`, `>>`) and pipelines (`|`), allowing for flexible command chaining and file management.
- **Process Management**: Manages processes, allowing background execution and implementing simple signal handling (CTRL-Z, CTRL-C, CTRL-D).
- **Autocomplete**: Offers tab completion for file and directory names in the current directory.
- **Command History**: Maintains a history of executed commands, accessible via the `history` command or the UP arrow key for easy repetition and modification of previous commands.

## Execution Instructions

To compile and run the shell program on a Linux system, execute the following commands in the terminal:

```sh
make -f Terminal.mk
./Terminal
```

## Functionality Overview

### Built-in Functions

- **Prompt**: Customizable prompt displaying the username, hostname, and current working directory.
- **cd**: Changes the current directory, supporting `.`, `..`, `-`, and `~` flags.
- **ls**: Lists directory contents, supporting `-a` and `-l` flags.
- **pwd**: Prints the current working directory.
- **echo**: Outputs the given string, handling spaces and tabs.
- **pinfo**: Displays process information.
- **search**: Recursively searches for files or directories.
- **redirection & pipeline**: Implements input and output redirection, along with command pipelines.
- **signals**: Handles CTRL-Z, CTRL-C, and CTRL-D signals.
- **autocomplete**: Autocompletes file and directory names.
- **foreground and background processing**: Manages foreground and background tasks, including process ID display for background tasks.

## Assumptions

- The directory where the program is invoked is considered the HOME directory.
- For autocomplete functionality, ensure to press enter after using the tab for completion.

## Contributing

Contributions to the project are welcome. Please follow the standard GitHub pull request process to submit your enhancements or fixes.

