# Git Exercise

Today's exercise is set up to give you hands-on experience with many of the git commands. I suggest that you open this file both in an editor and in preview mode. As you go through the instructions in preview mode, switch to the editor to fill in the requested information to show you have completed the exercise. Save and then return to the preview mode to see the result.

Start by adding your CS Lab user ID below.

```
 * Username:  reklre
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
Your branch is up to date with 'origin/master'.

nothing to commit, working tree clean
```

Run the following command:

> git log -3

```
commit 314f92f4e87946f2bb80a34c4d753bddd0645c25 (HEAD -> master, origin/master, origin/HEAD)
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Mar 12 03:48:36 2020 +0000

    autosave

commit efcf2b1a60ddac0a4edd3f011b9e7aa9a75ba319
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Mar 12 03:40:45 2020 +0000

    autosave
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
remote.upstream.url=git@gitlab.cs.wallawalla.edu:cptr142/student142.git
:...skipping...
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
remote.upstream.url=git@gitlab.cs.wallawalla.edu:cptr142/student142.git
remote.upstream.fetch=+refs/heads/*:refs/remotes/upstream/*
~
~
~
~
~
~
~
~
~
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
- the total decreased by one from 41 to 39 and deleted this line : drwxr-xr-x 2 reklre nogroup 2 Feb 20 21:36 
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

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)

        new file:   index.html
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
[master (root-commit) 5c95da3] Initialize repository
 1 file changed, 1 insertion(+)
 create mode 100644 index.html
```
1. Run this command.
    > git log
```
commit 5c95da332833b8e2afc4f9dcaf01452f43f24e66 (HEAD -> master)
Author: reklre <reklre@cs.wallawalla.edu>
Date:   Thu Mar 12 04:45:35 2020 +0000

    Initialize repository
```


## Edit your Local Repository

1. Run this command.
    > echo "Hello, World!" > index.html
1. Run this command.
    > git diff
```
nothing happened
```
1. Run this command.
    > git commit -a -m "Add content to index.html"
```
On branch master
nothing to commit, working tree clean
```
1. Run this command.
    > git diff
```
nothing happened
```


## Exploring Git Commands

Use the _git help_ command to research the additional options (items with a dash (-)).
The following command were used earlier in this exercise (do not repeat them here).
Using the _git help <command>_ find out what each option does.

> git add -A

```
add files contents to index
```

> git commit -a -m "Add content to index.html"

```
adds files contents to index and with a message
```

```
adds a message alongside the add command
```

> git log -3

```
show commit loges 
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

