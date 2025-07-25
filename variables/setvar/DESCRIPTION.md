很自然，除了能读取变量中存储的值，你也可以向变量写入值。
和许多其他语言一样，这个操作是通过 `=` 来完成的。
要将变量 `VAR` 的值设置为 `1337`，你可以使用：

```console
hacker@dojo:~$ VAR=1337
```

请注意，`=` 的两边不能有空格！
如果你加了空格（例如 `VAR = 1337`），shell 就无法识别出这是一个变量赋值操作，反而会尝试去执行 `VAR` 这个命令（而该命令通常并不存在）。

另请注意，设置变量时用的是 `VAR`，而*不是* `$VAR`：`$` 符号只在*访问*变量时才需要加在前面。
用 shell 的术语来说，在变量名前加上 `$` 的这个操作会触发所谓的*变量展开*（variable expansion），而且，出人意料的是，它也是许多潜在漏洞的根源。

在设置好变量后，你就可以用之前学过的技巧来访问它们，例如：

```console
hacker@dojo:~$ echo $VAR
1337
```

要解决这一关，你必须将 `PWN` 变量的值设置为 `COLLEGE`。
请注意：变量名和变量值都是区分大小写的！
`PWN` 和 `pwn` 是不同的，`COLLEGE` 和 `College` 也是不同的。
