你已经学会了用 `Ctrl-C` 中断进程，但其实还有不那么激烈的方法可以让你拿回终端的控制权！
你可以用 `Ctrl-Z` 将进程**挂起**到后台。
在本关卡中，我们将探索它是如何工作的；在下一个关卡中，我们将搞清楚如何**恢复**那些被挂起的进程！

本关卡的 `solve` 程序要求检测到它自己的另一个副本正在运行，**并且使用的是同一个终端**。
要怎么做呢？
用终端启动它，然后挂起它，接着在第一个进程被挂起的同时，再启动另一个副本！
