# Git Exercise

Today's exercise is set up to give you hands-on experience with many of the git commands. I suggest that you open this file both in an editor and in preview mode. As you go through the instructions in preview mode, switch to the editor to fill in the requested information to show you have completed the exercise. Save and then return to the preview mode to see the result.

Start by adding your CS Lab user ID below.

```
 * Username:  ?
 * Username:  ?
```

## Execute Git Related Commands

Open a terminal in `student142` and run the following command:

> which git

```
/usr/bin/git
```

Run the following command:

> git version

```
git version 2.17.1
```

Run the following command:

> git help


Run the following command:

> git status

```
On branch master
Your branch is ahead of 'origin/master' by 6 commits.
  (use "git push" to publish your local commits)

Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        new file:   reecereklai.txt

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   ../../homework/10_dynamic_arrays/main.cpp

Untracked files:
  (use "git add <file>..." to include in what will be committed)

        ../../student142_project3/
```

Run the following command:

> git log -3

```
commit 3a6213da7b381d26e88f101aa211c11f75eda5c7 (HEAD -> master)
Merge: 50e0dd6 f33d5e3
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Feb 20 21:12:33 2020 +0000

    automerging

commit f33d5e3d0919778ae31a6ca479aa7cf0ae1a9e0e (upstream/master)
Author: James Foster <github@jgfoster.net>
:...skipping...
commit 3a6213da7b381d26e88f101aa211c11f75eda5c7 (HEAD -> master)
Merge: 50e0dd6 f33d5e3
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Feb 20 21:12:33 2020 +0000

    automerging

commit f33d5e3d0919778ae31a6ca479aa7cf0ae1a9e0e (upstream/master)
Author: James Foster <github@jgfoster.net>
Date:   Wed Feb 19 20:44:31 2020 -0800

:...skipping...
commit 3a6213da7b381d26e88f101aa211c11f75eda5c7 (HEAD -> master)
Merge: 50e0dd6 f33d5e3
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Feb 20 21:12:33 2020 +0000

    automerging

commit f33d5e3d0919778ae31a6ca479aa7cf0ae1a9e0e (upstream/master)
Author: James Foster <github@jgfoster.net>
Date:   Wed Feb 19 20:44:31 2020 -0800

    Add in-class exercise for 20-Feb-2020.

commit 275588374e1ccc650ce748f53860217eb2c5f6c5
Author: Preston Carman <prestonc@apache.org>
Date:   Wed Feb 19 15:30:57 2020 -0800

:...skipping...
commit 3a6213da7b381d26e88f101aa211c11f75eda5c7 (HEAD -> master)
Merge: 50e0dd6 f33d5e3
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Feb 20 21:12:33 2020 +0000

    automerging

commit f33d5e3d0919778ae31a6ca479aa7cf0ae1a9e0e (upstream/master)
Author: James Foster <github@jgfoster.net>
Date:   Wed Feb 19 20:44:31 2020 -0800

    Add in-class exercise for 20-Feb-2020.

commit 275588374e1ccc650ce748f53860217eb2c5f6c5
Author: Preston Carman <prestonc@apache.org>
Date:   Wed Feb 19 15:30:57 2020 -0800

    Making example executable.
~
~
~
```

Run the following command:

> git fetch


Run the following command:

> git pull


Run the following command:

> git push


Run the following command:

> git config --list

```
user.email=reklre@cs.wallawalla.edu
user.name=reklre
core.repositoryformatversion=0
core.filemode=true
core.bare=false
core.logallrefupdates=true
remote.origin.url=git@gitlab.cs.wallawalla.edu:/reklre/student142.git
remote.origin.fetch=+refs/heads/*:refs/remotes/origin/*
branch.master.remote=origin
branch.master.merge=refs/heads/master
:
```


Run the following command:

> cat ~/.gitconf

```
cat: /home/project/.gitconf: No such file or directory
```

## Create a Local Repository

1. Navigate to the parent of `student142`:
    > `cd ~/code/cpp && ls -alF`
  * This should show `student142/` as a directory
  * If not, you are in the wrong place!

1. From your new workspace, create a folder called _git\_exercise_.
    > mkdir git_exercise
1. Change directories into the new folder called _git\_exercise_.
    > cd git_exercise
1. Run this command.
    > ls -al
1. Create a git repository.
    > git init
1. What changed? Run this command.
    > ls -al
```
Write your observation here.
- the total decreased by one from 21 to 20 and deleted this line : drwxr-xr-x 2 reklre nogroup 2 Feb 20 21:36 
```
1. Take a look at the .git directory.
    > ls -al .git
1. Create a file.
    > touch index.html
1. Run this command.
    > git status
```
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)

        index.html

nothing added to commit but untracked files present (use "git add" to track)
```
1. Run this command.
    > git add -A
```
nothing happened
```
1. Run this command.
    > git status
```
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)

        new file:   index.html
```
1. Run this command.
    > git commit -m "Initialize repository"
```
error: switch `m' requires a value
usage: git commit [<options>] [--] <pathspec>...

    -q, --quiet           suppress summary after successful commit
    -v, --verbose         show diff in commit message template

Commit message options
    -F, --file <file>     read message from file
    --author <author>     override author for commit
    --date <date>         override date for commit
    -m, --message <message>
                          commit message
    -c, --reedit-message <commit>
                          reuse and edit message from specified commit
    -C, --reuse-message <commit>
                          reuse message from specified commit
    --fixup <commit>      use autosquash formatted message to fixup specified commit
    --squash <commit>     use autosquash formatted message to squash specified commit
    --reset-author        the commit is authored by me now (used with -C/-c/--amend)
    -s, --signoff         add Signed-off-by:
    -t, --template <file>
                          use specified template file
    -e, --edit            force edit of commit
    --cleanup <default>   how to strip spaces and #comments from message
    --status              include status in commit message template
    -S, --gpg-sign[=<key-id>]
                          GPG sign commit

Commit contents options
    -a, --all             commit all changed files
    -i, --include         add specified files to index for commit
    --interactive         interactively add files
    -p, --patch           interactively add changes
    -o, --only            commit only specified files
    -n, --no-verify       bypass pre-commit and commit-msg hooks
    --dry-run             show what would be committed
    --short               show status concisely
    --branch              show branch information
    --ahead-behind        compute full ahead/behind values
    --porcelain           machine-readable output
    --long                show status in long format (default)
    -z, --null            terminate entries with NUL
    --amend               amend previous commit
    --no-post-rewrite     bypass post-rewrite hook
    -u, --untracked-files[=<mode>]
                          show untracked files, optional modes: all, normal, no. (Default: all)
```
1. Run this command.
    > git log
```
fatal: your current branch 'master' does not have any commits yet
```


## Edit your Local Repository

1. Run this command.
    > echo "Hello, World!" > index.html
1. Run this command.
    > git diff
```
diff --git a/index.html b/index.html
index e69de29..8ab686e 100644
--- a/index.html
+++ b/index.html
@@ -0,0 +1 @@
+Hello, World!
```
1. Run this command.
    > git commit -a -m "Add content to index.html"
```
error: switch `m' requires a value
usage: git commit [<options>] [--] <pathspec>...

    -q, --quiet           suppress summary after successful commit
    -v, --verbose         show diff in commit message template

Commit message options
    -F, --file <file>     read message from file
    --author <author>     override author for commit
    --date <date>         override date for commit
    -m, --message <message>
                          commit message
    -c, --reedit-message <commit>
                          reuse and edit message from specified commit
    -C, --reuse-message <commit>
                          reuse message from specified commit
    --fixup <commit>      use autosquash formatted message to fixup specified commit
    --squash <commit>     use autosquash formatted message to squash specified commit
    --reset-author        the commit is authored by me now (used with -C/-c/--amend)
    -s, --signoff         add Signed-off-by:
    -t, --template <file>
                          use specified template file
    -e, --edit            force edit of commit
    --cleanup <default>   how to strip spaces and #comments from message
    --status              include status in commit message template
    -S, --gpg-sign[=<key-id>]
                          GPG sign commit

Commit contents options
    -a, --all             commit all changed files
    -i, --include         add specified files to index for commit
    --interactive         interactively add files
    -p, --patch           interactively add changes
    -o, --only            commit only specified files
    -n, --no-verify       bypass pre-commit and commit-msg hooks
    --dry-run             show what would be committed
    --short               show status concisely
    --branch              show branch information
    --ahead-behind        compute full ahead/behind values
    --porcelain           machine-readable output
    --long                show status in long format (default)
    -z, --null            terminate entries with NUL
    --amend               amend previous commit
    --no-post-rewrite     bypass post-rewrite hook
    -u, --untracked-files[=<mode>]
                          show untracked files, optional modes: all, normal, no. (Default: all)
```
1. Run this command.
    > git diff
```
diff --git a/index.html b/index.html
index e69de29..8ab686e 100644
--- a/index.html
+++ b/index.html
@@ -0,0 +1 @@
+Hello, World!
```


## Exploring Git Commands

Use the _git help_ command to research the additional options (items with a dash (-)).
The following command were used earlier in this exercise (do not repeat them here).
Using the _git help <command>_ find out what each option does.

> git add -A

```
Replace this line with your explaination of -A.
```

> git commit -a -m "Add content to index.html"

```
Replace this line with your explaination of -a.
```

```
Replace this line with your explaination of -m.
```

> git log -3

```
Replace this line with your explaination of -3.
```

Open your `pull.sh` and `push.sh` files at the top of the `student142` directory. 
What are these files doing?

Try running each command one at a time in the terminal.


## Project 3 Repository

In a web browser:

* Find your GitLab group project at https://gitlab.cs.wallawalla.edu/
  * You should have one repository for your team
* Add Lucas.Saca@wallawalla.edu to your project as a developer
  * Also make sure that all team members have been added
* Get the Clone URL (ssh or https)
  * Save this for the next task

## Git Clone a Remote

In Code.CS:

> cd ~/code/cpp && ls -alF
  * This should show student142/ as a directory
  * If not, you are in the wrong place!
> git clone URL
  * Use the Clone URL you got on the last slide
> cd *project3
  * This navigates into the new Git repository
> git remote --verbose
  * This should show the gitlab.cs.wallawalla.edu address
> git status

## Create a File

* Using the Code.CS IDE, create a file in the project directory
  * Use your name on a text file (e.g., `Foster.txt`)
  * Place a pithy quote or comment in the file
  > git status
* *Add* the file to be tracked as part of the repository
  > git add *file.txt*
  > git status
* *Commit* the file to your local repository
  > git commit -m "*Message describing change*"
  > git status
* *Push* your changes to the remote repository
  > git push
  > git status
* *Pull* to get the changes others have made
  > git pull
  > git status
* Check with the others on your team and see if they can see your file

## Graphical User Interfaces

* [GitKraken (Windows, MacOS, Linux)](https://www.gitkraken.com/)
* [SourceTree (Window, MacOS)](https://www.sourcetreeapp.com)
* [GitX (MaCOS)](http://gitx.frim.nl/)
* [Giggle (Linux)](http://live.gnome.org/giggle)

## Resources

* [Git Community Book](http://book.git-scm.com/)
* [Pro Git](http://progit.org/)
* [Git Reference](http://gitref.org/)
* [GitHub](http://github.com/)
* [Git from the bottom up](http://ftp.newartisans.com/pub/git.from.bottom.up.pdf)
* [Understanding Git Conceptually](http://www.eecs.harvard.edu/~cduan/technical/git/)
* [Git Immersion](http://gitimmersion.com/)

