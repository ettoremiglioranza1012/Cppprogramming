# ⚙️ VIM MAPPING CHEAT SHEET: IDE TRANSLATION

**PROTOCOL NOTE:** This document catalogs the custom key mappings configured in your lightweight `.vimrc` to emulate common IDE behavior, particularly shortcuts prevalent in environments like Visual Studio Code (VS Code) or Sublime Text.

The **Command (⌘)** key entries assume that your terminal emulator (e.g., iTerm2) has been configured to translate the physical **⌘-key** press into the corresponding **Control key (`<C-key>`)** signal.

---

## 1. Interface and File Management

This section details mappings used for file access, explorer interaction, and basic file state management.

| IDE Shortcut | Terminal Mapping | Vim Command / Function | Description |
| :--- | :--- | :--- | :--- |
| **⌘ + P** | `<C-p>` (Ctrl+P) | `:CtrlP` Plugin | **Fuzzy File Search**. Finds files rapidly across the project. |
| **⌘ + B** | `<C-b>` (Ctrl+B) | `:NERDTreeToggle` | **Toggle File Explorer** sidebar view. |
| **⌘ + S** | `<C-s>` (Ctrl+S) | `:w` | **Save** the current buffer/file. |
| **⌘ + W** | `<C-w>` (Ctrl+W) | `:bd` | **Close** the current buffer (equivalent to closing a VS Code tab). |
| **Ctrl + Tab** | `<TAB>` / `<S-TAB>` | `:bnext` / `:bprev` | Cycle between Next / Previous **open buffers/files**. |

---

## 2. Editing and CUA (Copy/Undo/Access)

These mappings standardize core editing functions using Control/Command keys, overriding traditional Vim copy/paste behavior for system clipboard integration.

| IDE Shortcut | Terminal Mapping | Required Mode | Description |
| :--- | :--- | :--- | :--- |
| **⌘ + A** | `<C-a>` (Ctrl+A) | Normal | **Select All** content in the current buffer (`ggVG`). |
| **⌘ + Z** | `<C-z>` (Ctrl+Z) | Normal/Insert | **Undo** the last change. |
| **⌘ + C** | `<C-c>` (Ctrl+C) | Visual | **Copy** selected text to the system clipboard (`"+y`). |
| **⌘ + X** | `<C-x>` (Ctrl+X) | Visual | **Cut** selected text to the system clipboard (`"+d`). |
| **⌘ + V** | `<C-v>` (Ctrl+V) | Normal/Insert | **Paste** from the system clipboard (`"+p`). |
| **Alt + Up/Down** | `<A-k>` / `<A-j>` (Alt+K/J) | All Modes | **Move current line** or selected block Up / Down. |
| **⌘ + /** | `gcc` / `gc` | Normal / Visual | **Toggle Comment** on the current line or selection. |

---

## 3. Structural Editing and Navigation

This section covers features designed for structural manipulation and efficient cursor movement.

| IDE Function | Vim Command / Plugin | Key Sequence Example | Description |
| :--- | :--- | :--- | :--- |
| **Auto-Close Pairs** | `auto-pairs` Plugin | Type `(`. Result: `(|)`. | Automatically closes brackets, parentheses, and quotes upon typing the opening character. |
| **Surround Selection** | `vim-surround` Plugin | `ysiw"` | **Surround** the inner word with double quotes. |
| **Change Surrounding** | `vim-surround` Plugin | `cs'"` | **Change** surrounding single quotes to double quotes. |
| **Remove Surrounding** | `vim-surround` Plugin | `ds"` | **Delete** surrounding double quotes. |
| **Go To Definition** | N/A (LSP Disabled) | See Vim Core | Feature disabled for lightweight configuration. Use core Vim jump commands. |
| **Clear Highlight** | `<Esc>` | `:nohlsearch` | Removes persistent highlighting from the last executed search command. |

---

## 4. Fundamental Vim Core (Contextual Reference)

These commands are essential for text manipulation and form the foundation of Vim's editing efficiency.

| Function | Normal Mode Command | Action / Effect |
| :--- | :--- | :--- |
| **Delete Line** | `dd` | Delete (cut) the current line. |
| **Copy Line** | `yy` | Yank (copy) the current line. |
| **Paste** | `p` | Paste after the cursor. |
| **Find Text** | `/pattern` | Initiate a forward search for `pattern`. 
| **Repeat Last Find** | `n` / `N` | Repeat search forward / backward. |
| **Jump** | `w / b` | Jump forward / backward by one word. |
| **Start / End Line** | `0` / `$` | Move to the first / last character of the current line. |
