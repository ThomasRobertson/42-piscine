#!/bin/bash

# Script to automatically copy the local folder whitout any git file to another folder,
# here "~/git-repos" and then push it to a backup git, already initialised.

find . \! \( -name . -or -name '.git' -or -path '*/.git/*' \) -print  | cpio -padv ~/git-repos
cd ~/git-repos
git add .
git commit -m 'automatic commit'
git push
git status