# COMMIT规范:使用Commitizen

>实话说我认为有些没必要,或许不应该在这种小事上大费周章,或许有些吹毛求疵吧,但我还是希望养成一个好的习惯<br>
>[参考知乎文章](https://www.zhihu.com/search?type=content&q=git%20cz)
## 环境配置
配置 `npm`
- 安装[nodejs](https://nodejs.org/zh-cn/download/),选择LTS(长期稳定支持的版本),下载完成后[配置环境](https://my.oschina.net/u/2328490/blog/3070590?hmsr=kaifa_aladdin)
  
配置 `Commitizen` 以格式化 `commit message`
- Commitizen安装
  ```shell
  npm install -g commitizen
  ```
- 安装changelog,生成changelog的工具
  ```shell
  npm install -g conventional-changelog conventional-changelog-cli
  ```
- 检验是否安装成功,出现 `conventional-changelog-cli@2.2.2`
  ```shell
  npm ls -g -depth=0
  ```
- 项目根目录下创建空的package.json,然后进入到项目目录,执行以下命令会生成对应的项目信息:
  ```shell
  npm init --yes
  ```
- 运行下面命令,使其支持 `Angular` 的 `Commit message` 格式
  ```shell
  commitizen init cz-conventional-changelog --save --save-exact
  ```
- 进入到项目目录,执行以下命令生成 `CHANGELOG.md` 文件
  ```shell
  conventional-changelog -p angular -i CHANGELOG.md -s
  ```
- 以后,凡是用到 `git commit` 命令的时候统一改为 `git cz` ,然后就会出现选项，生成符合格式的`Commit Message `

## 内容说明
  ```
  feat:     A new feature (新功能)                                                               ——————————**常用**
  fix:      A bug fix     (修复bug)                                                              ——————————**常用**
  docs:     Documentation only changes (文档改变)                                                ——————————**常用**
  style:    Changes that do not affect the meaning of the code (代码格式变更)
  refactor: A code change that neither fixes a bug nor adds a feature (某个已有功能重构)
  perf:     A code change that improves performance (性能优化)
  test:     Adding missing tests or correcting existing tests (增加测试)
  build:    Changes that affect the build system or external dependencies (改变build工具,webpack/npm)
  ci:       Changes to our CI configuration files and scripts (更改ci configuration)
  chore:    Other changes that don't modify src or test files (一些不更改src或者test相关文件的提交) ——————————**常用**
  revert:   Reverts a previous commit (撤销上一次commit)
  ```
```
? What is the scope of this change (e.g. component or file name): (press enter to skip)
    说明此次修改的影响范围，可以根据自己的情况来进行填写
    - all: 表示影响很大，如修改了整体依赖 
    - location: 表示影响小，修改了某个小的功能
    - module: 表示会影响整个模块，如登录模块等
? Write a short, imperative tense description of the change (max 94 chars):
    简要描述修改内容
? Provide a longer description of the change: (press enter to skip)
    详细描述修改内容,可跳过
? Are there any breaking changes? (y/N)
    大改动
    ? A BREAKING CHANGE commit requires a body. Please enter a longer description of the commit itself:
    ? Describe the breaking changes:
? Does this change affect any open issues? (y/N)
    解决issue时
    Add issue references (e.g. "fix #123", "re #123".):
```