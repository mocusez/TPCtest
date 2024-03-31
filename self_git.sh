# 脚本部分
git add build_support

# 数据部分
git add data
git add query

# 代码部分
git add src

# 其他部分
git add self_git.sh
git add README.md

git commit -m "$1"

if [ "$2" == "push" ]; then
    git push
fi
