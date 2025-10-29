/**
 * @file filesystem.h
 * @brief Handles all the filesystem related function
 */
#ifndef SHIT_FILESYSTEM
#define SHIT_FILESYSTEM

#include <stdio.h>
#include <stdbool.h>

bool DirExists(char* dirName, size_t size);

bool createDir(char* dirName, size_t size);

bool createObj(char* hashID,char* data);

bool getCurrentPath(char* currPath, size_t* size);

#endif