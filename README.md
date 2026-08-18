Overall, problems that I've solved on the popular competitive programming repositories. Time spent on vscode on this:
[![wakatime](https://wakatime.com/badge/user/77970316-56a1-4acf-a0cc-cf270c647018/project/dcd60ed5-b01f-4fc4-9a07-ce44bb9fe378.svg)](https://wakatime.com/badge/user/77970316-56a1-4acf-a0cc-cf270c647018/project/dcd60ed5-b01f-4fc4-9a07-ce44bb9fe378)  

Lightweight and fast setup for competitive programming

## 1. Install & Setup w64devkit

1. Download `w64devkit-x.y.z.zip` from [GitHub Releases](https://github.com/skeeto/w64devkit/releases).  
2. Extract the `.zip` archive to `C:\w64devkit`.  
3. Open `C:\w64devkit\w64devkit.exe` to launch the terminal.  

---

## 2. Configure System PATH (Optional)

1. Press `Win + R`, type `sysdm.cpl`, press Enter.  
2. Go to **Advanced** > **Environment Variables**.  
3. Under **User variables**, edit `Path` and add `C:\w64devkit\bin`.  
4. Restart PowerShell or Command Prompt.  

---

## 3. Create Clean `_vimrc` Without Comments

Run in PowerShell or w64devkit terminal:

```powershell
notepad $HOME\_vimrc
```

Paste the following configuration:

```vim
set nocompatible
syntax on
filetype plugin indent on

set number
set relativenumber
set cursorline
set showcmd
set scrolloff=5
set wrap

if has("gui_running")
    set guifont=Consolas:h18:cANSI
    set guioptions-=m
    set guioptions-=T
    set guioptions-=r
    set guioptions-=L
endif

set tabstop=4
set shiftwidth=4
set softtabstop=4
set expandtab
set autoindent
set smartindent

set ignorecase
set smartcase
set hlsearch
set incsearch

set backspace=indent,eol,start
set encoding=utf-8

nnoremap <Esc><Esc> :noh<CR>

set tags=./tags;,tags
set completeopt=menu,menuone,noselect
autocmd FileType cpp setlocal omnifunc=ccomplete#Complete
inoremap <expr> <CR> pumvisible() ? "\<C-y>" : "\<CR>"

autocmd FileType cpp map <F5> :w<CR>:exec '!g++ -std=c++17 -O2 -Wall "%" -o "%<" && "%<"'<CR>
```

Save and exit Notepad.

---

## 4. Generate C++ Tags for Completion

Navigate to your C++ project directory in PowerShell or w64devkit terminal and run:

```powershell
ctags -R --languages=C++ --kinds-C++=+p --fields=+iaS --extras=+q .
```

---

## 5. Quick Usage

* **Edit C++ file:** `vim main.cpp` or `gvim main.cpp`
* **Build & Run:** Press `F5`
* **Autocomplete menu:** `Ctrl + X` then `Ctrl + O`
* **Navigate menu:** `Ctrl + N` (Down), `Ctrl + P` (Up)
* **Confirm selection:** `Enter` or `Ctrl + Y`
