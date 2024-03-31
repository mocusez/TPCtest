
git add build_support
git add data
git add query
git add src
git add self_git.sh

git commit -m "$1"

if [ "$2" == "push" ]; then
    git push
fi
