<h1 align="center">
	42cursus' minishell
 </h1>
 
  [![NPM](https://img.shields.io/npm/l/react)](https://github.com/nandajfa/minishell/blob/main/LICENSE)
 
 
 ### 🗣️ About

> _As beautiful as a shell_

#### 

This project is about creating a simple shell. Yes, your little bash or zsh. You will learn a lot about processes and file descriptors.

### Index

You're sections headers will be used to reference location of destination.

- [Scheme :twisted_rightwards_arrows:](#scheme)
- [Developed commands 🚧](#developed-commands)
- [Allowed Functions :white_check_mark:](#allowed-functions)
- [How To Use 📦](#how-to-use)
- [References 📌](#references)
- [Skills 📄](#skills)
- [Author Info  ✒️](#author)

### Scheme
![Scheme](images/minishell.png)

---

#### Developed commands

```bash
- Redirections: < > << >>
- Pipes | The output of each command in the pipeline is connected to the input of the next command via a pipe
- Environment variables ($ followed by a sequence of characters)
- $? which should expand to the exit status of the most recently executed foreground pipeline
- ctrl-C, ctrl-D and ctrl-\ which should behave like in bash
- Builtins
    ◦ echo with option -n
    ◦ cd with only a relative or absolute path
    ◦ pwd with no options
    ◦ export with no options
    ◦ unset with no options
    ◦ env with no options or arguments
    ◦ exit with no options

```

---

### Allowed Functions

- **printf** | **malloc** | **free** | **write** | **open** | **read** | **close**
- **readline** = [Get a line from a user with editing.](https://linux.die.net/man/3/readline)
- **rl_clear_history** | **rl_on_new_line** | **rl_replace_line** | **rl_redisplay, add_history** = [Programming with GNU Readline](https://web.mit.edu/gnu/doc/html/rlman_2.html)
- **access** = [Determine accessibility of a file](https://pubs.opengroup.org/onlinepubs/009695299/functions/access.html)
- **fork** = [Creates a child process.](https://man7.org/linux/man-pages/man2/fork.2.html)
- **wait, waitpid**  = [Stops the parent process until the child process exit.](https://man7.org/linux/man-pages/man2/waitid.2.html)
- **wait3, wait4** = [Are similar to waitpid, but additionally return resource usage information about the child.](https://man7.org/linux/man-pages/man2/wait3.2.html)
- **signal** = [Sets a function to handle a signal.](https://man7.org/linux/man-pages/man2/signal.2.html)
- **sigaction** = [examine and change a signal action](https://man7.org/linux/man-pages/man2/sigaction.2.html)
- **sigemptyset** = [Initialize a signal mask to exclude all signals](https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-sigemptyset-initialize-signal-mask-exclude-all-signals)
- **sigaddset** = [Add a signal to the signal mask](https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-sigaddset-add-signal-signal-mask)
- **kill** = [Sends a signal to a process or a group of processes.](https://man7.org/linux/man-pages/man2/kill.2.html)
- **exit** = [Terminates a process immediately, special handle for child processes.](https://www.tutorialspoint.com/c_standard_library/c_function_exit.htm)
- **getcwd** = [Saves the pathname of your current working directory in a string.](https://man7.org/linux/man-pages/man2/getcwd.2.html)
- **chdir** = [Changes your current working directory.](https://man7.org/linux/man-pages/man2/chdir.2.html)
- **stat, lstat, fstat** = [Returns information about a file.](https://man7.org/linux/man-pages/man2/stat.2.html)
  - stat = Standar.
  - lstat = For symbolic links.
  - fstat = Gets the file from a file descriptor.
- **unlink** = [delete a name and possibly the file it refers](https://man7.org/linux/man-pages/man2/unlink.2.html)
- **execve** = [Executes a program referred by a variable.](https://man7.org/linux/man-pages/man2/execve.2.html)
- **dup** = [Creates a copy of a file descriptor using the lowest numbereded unused descriptor.](https://man7.org/linux/man-pages/man2/dup.2.html)
- **dup2** = [Creates a copy of a file descriptor using the descriptor number given by the user.](https://man7.org/linux/man-pages/man2/dup.2.html)
- **pipe** = [It's used to create inter-process communication.](https://man7.org/linux/man-pages/man2/pipe.2.html)
- **opendir** = [Opens a directory stream.](https://pubs.opengroup.org/onlinepubs/009695399/functions/opendir.html)
- **readdir** = [Returns a pointer to a dirent structure representing the next directory entry in the directory stream.](https://www.man7.org/linux/man-pages/man3/readdir.3.html)
- **closedir** = [Closes the directory stream.](https://linux.die.net/man/3/closedir)
- **strerror** = [Returns an error message.](https://www.tutorialspoint.com/c_standard_library/c_function_strerror.htm)
- **perror** = [prints a descriptive error message to stderr. First the string str is printed, followed by a colon then a space.](https://www.tutorialspoint.com/c_standard_library/c_function_perror.htm)
- **errno** = [Number of last error, its a variable.](https://www.youtube.com/watch?v=IZiUT-ipnj0&ab_channel=JacobSorber)
- **isatty** = [test whether a file descriptor refers to a terminal](https://www.man7.org/linux/man-pages/man3/isatty.3.html)
- **ttyname** = [return name of a terminal](https://man7.org/linux/man-pages/man3/ttyname.3.html)
- **ttyslot** = [find the slot of the current user's terminal in some file](https://man7.org/linux/man-pages/man3/ttyslot.3.html)
- **ioctl** = [control device](https://man7.org/linux/man-pages/man2/ioctl.2.html)
- **getenv** = [Function Usage in C Programming](https://linuxhint.com/getenv-function-usage/)
- **tcsetattr** = [get and set terminal attributes, line control, get and set baud rate](https://linux.die.net/man/3/tcsetattr)
- **tcgetattr** = [Get the attributes for a terminal](https://www.ibm.com/docs/en/zos/2.1.0?topic=functions-tcgetattr-get-attributes-terminal)
- **tgetent tgetflag tgetnum tgetstr tgoto tputs** = [direct curses interface to the terminfo capability database](https://linux.die.net/man/3/tgetent) | [termcap database emulation](https://pubs.opengroup.org/onlinepubs/7908799/xcurses/tgetent.html)

---

[Back To The Top](#index)

---

#### How To Use
> Deployment
```shell
git clone https://github.com/nandajfa/minishell.git
make && ./minishell
```

---
#### References

 * [Bash Guide for Beginners](https://tldp.org/LDP/Bash-Beginners-Guide/html/chap_01.html)
 * [Making your own Linux](https://www.geeksforgeeks.org/making-linux-shell-c/)
 * [Shell Introduction](https://pubs.opengroup.org/onlinepubs/009695399/utilities/xcu_chap02.html)
 * [Signals](https://www.youtube.com/watch?v=NfHqGv0PlIw&list=PL0qfF8MrJ-jxMfirAdxDs9zIiBg2Wug0z&index=44)
 * [Groups](https://www.youtube.com/watch?v=NfHqGv0PlIw)
 * [Unix Pipeline](https://www.youtube.com/watch?v=bKzonnwoR2I)
 * [Notion Welton](https://bumpy-truffle-c97.notion.site/Minishell-94b7e6ad303d4b19b1dfe7d4bbacc9aa)
 * [Notion Rods](https://rodsmade.notion.site/Acelera-Minishell-em-constru-o-f6c3f8463e3e4580b4e61f4886036faf)

---
#### Skills

* Rigor
* Unix
* Imperative programming

#### Author

Made by: <br />
* Jessica Fernanda 👋 [See my linkedin](https://www.linkedin.com/in/jessica-fernanda-alves-marques-106651205/) <br />
* Vinícius Oliveira 


[Back To The Top](#index)
