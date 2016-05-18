
## 运行包 


<!-- ~~./a.exe gs.push.rgbvr.com 220.194.213.122~~ -->

- 下载软件包 https://github.com/noname007/mtr-simple-wrapper/releases 
双击 1.bat 然后再命令行里面输入 mtr-cp.exe www.baidu.com

- 输出结果格式：
`域名 最大丢包率`

最大丢包率: 从源点到终点的节点上出现的最大丢包率



`附带的WinMTR 为64平台编译出来的`

## 手动编译
依赖 grep awk WinMTR 工具

- 下载编译本项目

- vs2010下编译 https://github.com/noname007/winmtr-cmd 编译出 能运行的 WinMTR 将其拷贝到本项目编译出来的文件夹

- grep awk  建议使用 gow https://github.com/bmatzelle/gow 工具包获得。将其加入到环境变量中或者直接拷贝到编译出来的文件夹中。

