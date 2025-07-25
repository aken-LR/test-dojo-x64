你之所以需要文档，通常只是为了搞清楚如何使用所有这些五花八门的程序。其中一个具体的情景就是，弄明白在命令行中该指定哪些参数。
本模块将主要深入探讨这一概念，并将其作为学习程序通用用法的一个切入点。
在本模块的其余部分，你将学习向环境请求程序帮助的各种方法，但在此之前，我们先来深入了解一下“阅读文档”这个概念。

程序的正确使用，在很大程度上取决于你是否为它们正确地指定了参数。
回想一下在[深入理解命令](./commands)模块的“隐藏文件”挑战中用到的 `ls -a`：其中的 `-a` 就是一个参数，它告诉 `ls` 命令在列出非隐藏文件的同时，也要列出隐藏文件。
因为我们想要列出隐藏文件，所以在那个场景下，使用带 `-a` 参数的 `ls` 命令就是正确的用法。

本次挑战的程序是 `/challenge/challenge`，你需要正确地调用它，它才会把 `flag` 给你。
我们来假装下面这段话就是它的文档：

>欢迎阅读 `/challenge/challenge` 的文档！要正确运行此程序，你需要给它传递 `--giveflag` 这个参数。祝你好运！

了解了这些之后，去获取 `flag` 吧！
