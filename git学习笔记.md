# git使用笔记
***
## 1.初始化
git init  初始化git,相当于生成git配置文件  
git  config 配置git账户信息  
git add [file1] [file2]  将文件加入版本控制  
## 2.提交
git commit   
  * -message  * 添加信息   
  * -ammend * 修改提交  
## 3.使用git的一般流程
git pull 更新项目的改变  
git commit 自己更改项目后提交至缓存区  
git push 提交改变至远程库  
## 4.特使情况
git stash 保存修改到栈中  
git merge 合并分支  
git cherry-pick 合并提交记录到当前分支的末端  
git checkout 切换分支  
## 5.查看  
git status 查看文件变动  
git log 查看版本信息  
