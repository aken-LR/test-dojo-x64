#ifndef _VARIABLES_H_
#define _VARIABLES_H_

/* Shell 变量的结构体 */
typedef struct shell_var {
  char *name;
  char *value;
  int attributes;
  struct shell_var *next;
} SHELL_VAR;

/* 提供代码中用到的函数原型，以便链接器能找到它们 */
SHELL_VAR *find_variable(char*);
char *get_variable_value(SHELL_VAR*);
//int bind_global_variable(char*, char*, int); // 如果你的代码解注释了 bind_global_variable，也需要这个原型

#endif /* _VARIABLES_H_ */
