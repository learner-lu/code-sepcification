
# vscode 代码规范配置

## 添加文件头

- <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>p</kbd> -> snippets -> `Preferences: configure user snippets`
- 选择常用编程语言,笔者以`cpp`,`python`为例,快捷键可任意设置,作者名和email和GitHub替换为你自己的,其他语言同理,注意不同语言注释写法

  - cpp.json

    ```json
    {
     "Print to console": {
      "prefix": "cpy", // 快捷键
      "body": [
       "/*",
       " *Copyright (c) ${CURRENT_YEAR} All rights reserved",
       " *@description: $1",  // 按一下 tab 自动跳转到这里
       " *@author: Zhixing Lu",
       " *@date: ${CURRENT_YEAR}-${CURRENT_MONTH}-${CURRENT_DATE}",
       " *@email: luzhixing12345@163.com",
       " *@Github: luzhixing12345",
       "*/",
       ""
       ],
      "description": "copyright snippets"
     }
    }
    ```

  - python

    ```json
    {
     "Print to console": {
      "prefix": "cpy", // 快捷键
      "body": [
       "'''",
       "*Copyright (c) ${CURRENT_YEAR} All rights reserved",
       "*@description: $1",  // 按一下 tab 自动跳转到这里
       "*@author: Zhixing Lu",
       "*@date: ${CURRENT_YEAR}-${CURRENT_MONTH}-${CURRENT_DATE}",
       "*@email: luzhixing12345@163.com",
       "*@Github: luzhixing12345",
       "'''",
       ""
       ],
      "description": "copyright snippets"
     }
    }
    ```

- 新建项目之后输入`cpy`回车生成头文件信息,添加 `description` 即可

## 语言规范

### CPP

> [vscode+cpplint](https://blog.csdn.net/qq_41071754/article/details/119189213)

1. 下载谷歌c++规范 `pip install cpplint` / 直接[下载cpplint.py文件](https://github.com/learner-lu/code-sepcification/releases/download/v0.0.1/cpplint.py)
2. 搜索安装vscode插件`cpplint`
3. 找到 `cpplint.exe`的下载位置, conda安装保存在 `~/Anaconda/envs/xxx/Script/cpplint.exe`,或者直接[下载cpplint.py文件](https://github.com/learner-lu/code-sepcification/releases/download/v0.0.1/cpplint.py)并自定义路径
4. 替换正确路径
  
   ![20220323034948](https://raw.githubusercontent.com/learner-lu/picbed/master/20220323034948.png)

5. 同位置下滑找到 `verbose`, `0`最严格 `5`最松散 (0级有的地方你甚至感觉很离谱,规范性极高,推荐有一定基础或想提升自己规范的使用)

   ![20220323035153](https://raw.githubusercontent.com/learner-lu/picbed/master/20220323035153.png)

6. 如果问题出错不知如何修改,鼠标悬停至黄色波浪线->快捷修复->fix
7. TODO:笔者本身是c++爱好者,打算编写`cppcorrect`用于自动纠正`cpplint`的警告信息(flag)

### python

1. <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>p</kbd> --> pylint --><kbd>ENTER</kbd>
2. 右下角安装pylint
3. <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>p</kbd> --> pylint --> 启用代码检查 --> ENABLE

### markdown

1. 搜索安装vscode扩展 `markdownlint`
2. <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>p</kbd> --> markdown --> create or open ... -> 自动生成`.markdownlint.json`
3. 建议禁用以下三个MD规则,否则容易比较痛苦
   > [全规则](https://github.com/DavidAnson/markdownlint/blob/v0.25.1/doc/Rules.md)

   ```json
   {
   "MD013": false, 
   "MD003": false, // # ##的规则
   "MD033": false  // html语法
   }
   ```

4. vscode+markdown的[插件推荐](https://github.com/luzhixing12345/git-learning/blob/master/github-markdown.md)
