# SHIT PLAN OF ACTION

## General Implementation idea (same as git but implementation to be mine)
1. shit init (creates a head and a tree with a unique hash)
2. shit status (how to check the difference and which is not commited)
3. shit add (2 options complete add or specific file add) --> (Stage the changes)
4. shit commit (stage the added changes)
5. shit push (add and extra node in the tree and the previous node will become and the parent and everything update)


## :: Stage I ::
1. shit init
	- add an objects folder
	- add an Head file which will save the current tree head
	- add an folder in which we will store the complete trees

2. shit status
	- check for all blob type files which exists , which might be deleted, and changes made to the previous blob files and added blob files
	- constantly check for changes in blob and addition in to blob files

3. shit add
	- Add this to stage 
		
## :: Stage II ::
1. Add staging area
2. Add commit message to staging area