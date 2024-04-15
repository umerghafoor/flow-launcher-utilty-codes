## Flow Launcher Utility Codes

These commands are designed to streamline the workflow of programmers by quickly navigating to the active Explorer path and performing various actions.

### Table of Contents:

1. [Open Directory in Visual Studio Code](#open-directory-in-visual-studio-code)
2. [Clone Git Repository into Directory](#clone-git-repository-into-directory)
3. [Launch JupyterLab in Directory](#launch-jupyterlab-in-directory)
4. [Cloc in current Directory](#cloc-in-current-directory)


## Available Commands:

## Open Directory in Visual Studio Code
   - **For PowerShell:**
        ```powershell
        > cd {active_explorer_path} ; code .
        ```

   - **For Command Prompt (cmd):**
        ```batch
        > cd /d {active_explorer_path} && code .
        ```

   - **For RunCommand:**
        ```plaintext
        > code {active_explorer_path}
        ```

## Clone Git Repository into Directory
   - **For Command Prompt (cmd):**
        ```batch
        > cd /d {active_explorer_path} && git clone {clipboard}
        ```

   - **For PowerShell:**
        ```powershell
        > cd {active_explorer_path} ; git clone {clipboard}
        ```

   - **For RunCommand:**
        ```plaintext
        > git clone {clipboard} {active_explorer_path}repo
        ```

## Launch JupyterLab in Directory

   - **For Command Prompt (cmd):**
        ```batch
        > cd /d {active_explorer_path} && jupyter-lab
        ```

   - **For PowerShell:**
        ```powershell
        > cd {active_explorer_path} ; jupyter-lab
        ```

   - **For RunCommand:**
        ```plaintext
        > jupyter-lab {active_explorer_path}
        ```

## Cloc in current Directory

   - **For Command Prompt (cmd):**
        ```batch
        > cd /d {active_explorer_path} && cloc .
        ```

   - **For PowerShell:**
        ```powershell
        > cd {active_explorer_path} ; cloc .
        ```

   - **For RunCommand:**
        ```plaintext
        > cloc {active_explorer_path}
        ```

These commands help simplify the process of navigating to project directories, opening them in Visual Studio Code, launching JupyterLab, and cloning Git repositories, enhancing productivity for programmers.
