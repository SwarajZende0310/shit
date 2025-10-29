#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[])
{
    if(argc > 1)
    {
        if(strcmp(argv[1],"init") == 0)
        {
            printf("shit init called\n");
            // Check if ".shit" dir exists
            // if not create the following dir in the similar tree structure
            // |
            // |--- .shit
            // |      |--- objects (will store all the shit objects for tracking)
            // |      |--- tree    (which will store the commits)
            // |      |--- HEAD    (head of the current tree)
        }
        else if(strcmp(argv[1],"status") == 0)
        {
            printf("shit status called\n");
            // Check all the files in the current working directory and compare all the blob ojbects
            // Create a Hash ID for all the current files and check if the HASH has changed
            // Display just the chnaged files and removed and added files (According the file name)
        }
        else if(strcmp(argv[1],"add") == 0)
        {
            printf("shit add called\n");
            // Make a blob object and add it in "objects" folder 
        }
        else if(strcmp(argv[1],"commit") == 0)
        {
            printf("shit commit called\n");
            // Make a commit object and add the authors name and time that it was commited with all the changed files and in the commit object 
        }
        else if(strcmp(argv[1],"push") == 0)
        {
            printf("shit push called\n");
            // Check for commited object and push all the commits in the tree structure
            // TODO :: take branch name as argument
        }
    }
    printf("shit done\n");
    return 0;
}