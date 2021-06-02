# 通讯录管理系统

根据[黑马程序员匠心之作|C++教程从0到1入门编程,学习编程不再难](https://www.bilibili.com/video/BV1et411b73Z?p=1)教程使用Visual Studio 2019和C++创建的小项目。利用cmd窗口可以实现联系人的添加、查找、修改以及删除，但没有加入读取文件功能，即信息实时保存在内存当中，结束掉程序数据就会消失。

> 以后学了File IO尝试添加新功能。😋

整个源码在```AddressBookManagementSystem```目录下，入口文件为```main.cpp```，整体由分文件的函数和结构体编写，比较简单。文件夹中的```inc```存放头文件，```src```存放源码。实现相应功能的函数和结构体可在对应名称的文件夹下找到。

```×64```目录下存放了64位系统编译后的exe文件。

```AddressBookManagementSystem.sln```为Visual Studio 2019的项目文件。