**Оценка 3:**

1, 2.
![screen](images/capture_20251212111046357.png)
3, 4.
``` On branch dev
Your branch is up to date with 'origin/dev'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        images/
        sort.c   
```
5, 6.
``` On branch dev
Your branch is up to date with 'origin/dev'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   README.md
        new file:   images/capture_20251212111046357.png
        new file:   sort.c
````
7, 8 
``` On branch dev
Your branch is ahead of 'origin/dev' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
```
9, 10.
```
 On branch dev
Your branch is ahead of 'origin/dev' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   sort.c

no changes added to commit (use "git add" and/or "git commit -a")
```
11, 12.
```
On branch dev
Your branch is ahead of 'origin/dev' by 1 commit.
  (use "git push" to publish your local commits)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   sort.c
```
13, 14, 15. 
``` 
On branch dev
Your branch is ahead of 'origin/dev' by 2 commits.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   sort.c

no changes added to commit (use "git add" and/or "git commit -a")
```
Теперь поиграемся с ветками:

1, 2:
```
* dev
  master
  mybranch
```
3, 4
```
vlad@LAPTOP-Q23R32CR:~/progLab9$ git status
On branch dev
Your branch is ahead of 'origin/dev' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
vlad@LAPTOP-Q23R32CR:~/progLab9$ git branch mybranch
fatal: a branch named 'mybranch' already exists
vlad@LAPTOP-Q23R32CR:~/progLab9$ git switch mybranch
Switched to branch 'mybranch'
vlad@LAPTOP-Q23R32CR:~/progLab9$ git status
On branch mybranch
nothing to commit, working tree clean
vlad@LAPTOP-Q23R32CR:~/progLab9$ 
```
5, 6, 7, 8.
```
git log --oneline --graph
* 3a43ac5 (HEAD -> mybranch) file1
* 0655ca7 (origin/dev) end 3
* 4319db2 error commit
* 2e606d8 sort
* b51aa66 README and images dir
* 0250d08 (origin/master, master) first commit
```
9, 10.
```
git log --oneline --graph
* 0250d08 (HEAD -> master, origin/master) first commit
```
11, 12, 13.
```
vlad@LAPTOP-Q23R32CR:~/progLab9$ git log --oneline --graph
* eca4d80 (HEAD -> master) switch to mybranch
* 0250d08 (origin/master) first commit
vlad@LAPTOP-Q23R32CR:~/progLab9$ git switch mybranch
Switched to branch 'mybranch'
vlad@LAPTOP-Q23R32CR:~/progLab9$ git log --oneline --graph
* 3a43ac5 (HEAD -> mybranch) file1
* 0655ca7 (origin/dev) end 3
* 4319db2 error commit
* 2e606d8 sort
* b51aa66 README and images dir
* 0250d08 (origin/master) first commit
```
14. Да, file2.txt пропал из ветки mybranch
15.
```
git diff mybranch master
diff --git a/README.md b/README.md
index 876020b..7a1001b 100644
--- a/README.md
+++ b/README.md
@@ -109,21 +109,6 @@ git log --oneline --graph
 git log --oneline --graph
 * 0250d08 (HEAD -> master, origin/master) first commit
-11, 12, 13.
-vlad@LAPTOP-Q23R32CR:~/progLab9$ git log --oneline --graph
-* eca4d80 (HEAD -> master) switch to mybranch
-* 0250d08 (origin/master) first commit
-vlad@LAPTOP-Q23R32CR:~/progLab9$ git switch mybranch
-Switched to branch 'mybranch'
-vlad@LAPTOP-Q23R32CR:~/progLab9$ git log --oneline --graph
-* 3a43ac5 (HEAD -> mybranch) file1
-* 0655ca7 (origin/dev) end 3
-* 4319db2 error commit
-* 2e606d8 sort
-* b51aa66 README and images dir
-* 0250d08 (origin/master) first commit
 
 
 
diff --git a/file1.txt b/file1.txt
index e69de29..4737253 100644
--- a/file1.txt
+++ b/file1.txt
@@ -0,0 +1 @@
+Кириченко Владислав
\ No newline at end of file
diff --git a/file2.txt b/file2.txt
new file mode 100644
index 0000000..e69de29
diff --git a/images/capture_20251212111046357.png b/images/capture_20251212111046357.png
deleted file mode 100644
index 0ed49a3..0000000
Binary files a/images/capture_20251212111046357.png and /dev/null differ
diff --git a/sort.c b/sort.c
deleted file mode 100644
index 4710947..0000000
--- a/sort.c
+++ /dev/null
@@ -0,0 +1 @@
+Кириченко Владислав
\ No newline at end of file
diff --git a/file2.txt b/file2.txt
new file mode 100644
index 0000000..e69de29
diff --git a/images/capture_20251212111046357.png b/images/capture_20251212111046357.png
deleted file mode 100644
index 0ed49a3..0000000
Binary files a/images/capture_20251212111046357.png and /dev/null differ
diff --git a/sort.c b/sort.c
deleted file mode 100644
index 4710947..0000000
--- a/sort.c
+++ /dev/null
@@ -1,13 +0,0 @@
-#include <stdio.h>
-int[] SortQuick(int[] arr)
-{
-    if(arr.Length < 2) { return arr;}
-
-    int support = arr[0];
-
-    int[] left = SortQuick(arr.Where(x => x < support).ToArray());
-    int[] right = SortQuick(arr.Where(x => x > support).ToArray());
-    int[] center = arr.Where(x => x == support).ToArray();
-
-    return left.Concat(center).Concat(right).ToArray();
-}
```
**Оценка 4:**

1, 2, 3.
```
git diff
diff --git a/sort.c b/sort.c
index 4710947..552f9a4 100644
--- a/sort.c
+++ b/sort.c
@@ -1,4 +1,5 @@
 #include <stdio.h>
+
 int[] SortQuick(int[] arr)
 {
     if(arr.Length < 2) { return arr;}
@@ -10,4 +11,10 @@ int[] SortQuick(int[] arr)
     int[] center = arr.Where(x => x == support).ToArray();
 
     return left.Concat(center).Concat(right).ToArray();
+}
+
+int main()
+{
+    int a[] = {4, 2, 0};
+    int aSort = SortQuick(a)
 }
 ```
 4. Да, git diff --staged пустой, так как в staged не были добавлены данные

 5, 6. git diff пустой, так как данные перенесены в staged

7. 
```
git diff --staged
diff --git a/sort.c b/sort.c
index 4710947..552f9a4 100644
--- a/sort.c
+++ b/sort.c
@@ -1,4 +1,5 @@
 #include <stdio.h>
+
 int[] SortQuick(int[] arr)
 {
     if(arr.Length < 2) { return arr;}
@@ -10,4 +11,10 @@ int[] SortQuick(int[] arr)
     int[] center = arr.Where(x => x == support).ToArray();
 
     return left.Concat(center).Concat(right).ToArray();
+}
+
+int main()
+{
+    int a[] = {4, 2, 0};
+    int aSort = SortQuick(a)
 }
\ No newline at end of file
```
8, 9.
```
int main()
 {
-    int a[] = {4, 2, 0};
+    int a[] = {4, 2};
     int aSort = SortQuick(a)
 }
 ```
 10. 
 ```
 git diff --staged
diff --git a/sort.c b/sort.c
index 4710947..552f9a4 100644
--- a/sort.c
+++ b/sort.c
@@ -1,4 +1,5 @@
 #include <stdio.h>
+
 int[] SortQuick(int[] arr)
 {
     if(arr.Length < 2) { return arr;}
@@ -10,4 +11,10 @@ int[] SortQuick(int[] arr)
     int[] center = arr.Where(x => x == support).ToArray();
 
     return left.Concat(center).Concat(right).ToArray();
+}
+
+int main()
+{
+    int a[] = {4, 2, 0};
+    int aSort = SortQuick(a)
 }
 ```
 11. В данном случае в staged не добавлены изменения, то есть данные не подготовлены к коммиту, а сами изменения есть и git diff это отражает.
 12. 
 ```
 git status
On branch mybranch
Your branch is up to date with 'origin/mybranch'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   sort.c

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md
        modified:   sort.c
```
13, 14.
```
git status
On branch mybranch
Your branch is up to date with 'origin/mybranch'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md
        modified:   sort.c

no changes added to commit (use "git add" and/or "git commit -a")
```
15, 16.
```
git log --oneline --graph
* 4965d20 (HEAD -> mybranch) restore staged
* cbcc4f4 (origin/mybranch) ready to push
* 4e6470b push
* 6392217 mybranch ready to push
* 3a43ac5 file1
* 0655ca7 end 3
* 4319db2 error commit
* 2e606d8 sort
* b51aa66 README and images dir
* 0250d08 first commit
```
17, 18.
```
#include <stdio.h>

int[] SortQuick(int[] arr)
{
    if(arr.Length < 2) { return arr;}

    int support = arr[0];

    int[] left = SortQuick(arr.Where(x => x < support).ToArray());
    int[] right = SortQuick(arr.Where(x => x > support).ToArray());
    int[] center = arr.Where(x => x == support).ToArray();

    return left.Concat(center).Concat(right).ToArray();
}

int main()
{
    int a[] = {4, 2};
    int aSort = SortQuick(a);
    printf("hello git\n");
}
```
19.
```
git status
On branch mybranch
Your branch is ahead of 'origin/mybranch' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md
        modified:   sort.c

no changes added to commit (use "git add" and/or "git commit -a")
```
20, 21.
```
#include <stdio.h>

int[] SortQuick(int[] arr)
{
    if(arr.Length < 2) { return arr;}

    int support = arr[0];

    int[] left = SortQuick(arr.Where(x => x < support).ToArray());
    int[] right = SortQuick(arr.Where(x => x > support).ToArray());
    int[] center = arr.Where(x => x == support).ToArray();

    return left.Concat(center).Concat(right).ToArray();
}

int main()
{
    int a[] = {4, 2};
    int aSort = SortQuick(a)
}
```
22.
```
 git status
On branch mybranch
Your branch is ahead of 'origin/mybranch' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md

no changes added to commit (use "git add" and/or "git commit -a")
```
**Ветки:**

1. 
```
git add .
vlad@LAPTOP-Q23R32CR:~/progLab9$ git commit -m "Add file greeting.txt"
[mybranch 85075ae] Add file greeting.txt
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 greeting.txt
vlad@LAPTOP-Q23R32CR:~/progLab9$ 
```
2. 
```
git commit -m "Add content to greeting.txt"
[mybranch a178391] Add content to greeting.txt
 2 files changed, 14 insertions(+)
 ```
 3, 4.
 ```
 git checkout -b "feature/uppercase"
Switched to a new branch 'feature/uppercase'
```
5.
```
git status
On branch feature/uppercase
nothing to commit, working tree clean
```
6, 7, 8.
```
  dev
* feature/uppercase
  master
  mybranch
  ```
9. 
```
* 7e97039 (HEAD -> feature/uppercase) uppercase
* a178391 (mybranch) Add content to greeting.txt
* 85075ae Add file greeting.txt
* 69461b5 (origin/mybranch) ready to push two
* 4965d20 restore staged
* cbcc4f4 ready to push
* 4e6470b push
* 6392217 mybranch ready to push
* 3a43ac5 file1
| * eca4d80 (origin/master, master) switch to mybranch
| | * 52a82ec (origin/dev, dev) README changes
| |/  
|/|   
* | 0655ca7 end 3
* | 4319db2 error commit
* | 2e606d8 sort
* | b51aa66 README and images dir
|/  
* 0250d08 first commit
```
10, 11.
```
hello
```
12. 
```
git diff feature/uppercase
diff --git a/README.md b/README.md
index 8acc370..a7ab1b3 100644
--- a/README.md
+++ b/README.md
@@ -468,4 +468,8 @@ nothing to commit, working tree clean
 * | b51aa66 README and images dir
 |/  
 * 0250d08 first commit
-```
\ No newline at end of file
+```
+10, 11.
+```
+hello
+```
diff --git a/greeting.txt b/greeting.txt
index d9605cb..b6fc4c6 100644
--- a/greeting.txt
+++ b/greeting.txt
@@ -1 +1 @@
-HELLO
\ No newline at end of file
+hello
\ No newline at end of file
```
13, 14.
```
HELLO
```
