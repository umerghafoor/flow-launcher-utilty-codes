#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_clipboard_text(char **clipboard_text) {
    if (!OpenClipboard(NULL)) {
        printf("Failed to open clipboard.\n");
        exit(1);
    }

    HANDLE clipboard_handle = GetClipboardData(CF_TEXT);
    if (clipboard_handle == NULL) {
        printf("Failed to get clipboard data.\n");
        CloseClipboard();
        exit(1);
    }

    *clipboard_text = (char *)GlobalLock(clipboard_handle);
    if (*clipboard_text == NULL) {
        printf("Failed to lock clipboard data.\n");
        CloseClipboard();
        exit(1);
    }

    GlobalUnlock(clipboard_handle);
    CloseClipboard();
}

void clone_repo(const char *repo_url, const char *folder_path) {
    char command[256];
    
    // Construct the command to clone the repository
    sprintf(command, "git clone %s %s/%s", repo_url, folder_path, strrchr(repo_url, '/') + 1);
    
    // Execute the command
    system(command);
}

int main(int argc, char *argv[]) {
    char *repo_url = NULL;
    char *folder_path = NULL;

    // Check if repository URL is provided as an argument
    if (argc >= 2) {
        repo_url = argv[1];
    } else {
        // Retrieve repository URL from clipboard
        char *clipboard_text = NULL;
        get_clipboard_text(&clipboard_text);
        repo_url = clipboard_text;
    }

    // Check if folder path is provided as an argument
    if (argc >= 3) {
        folder_path = argv[2];
    } else {
        printf("Folder path not provided. Please provide the folder path:\n");
        // Code to get input from user
    }

    // Clone the repository
    clone_repo(repo_url, folder_path);

    return 0;
}
