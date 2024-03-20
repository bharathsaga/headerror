cd username/repository name
rm -rf .git
git init
git remote add origin git@github.com:<your username>/<repository name>.git
git add .
git commit -m'fixed broken head'
git push -u origin master
