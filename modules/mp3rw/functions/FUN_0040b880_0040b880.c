/* Module: mp3rw.dll
   Function: FUN_0040b880
   Address: 0040b880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0040b880(HWND param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,uchar *param_5,
            DWORD *param_6,uchar *param_7)

{
  int iVar1;
  BOOL BVar2;
  LPCITEMIDLIST local_16c;
  IMalloc *local_168;
  tagOFNA local_164;
  CHAR local_104 [259];
  undefined1 local_1;
  
  FUN_0040b9c0(&local_164.lStructSize,param_3,param_4);
  local_164.Flags = 0x80826;
  local_164.hwndOwner = param_1;
  local_164.lpstrTitle = param_2;
  local_164.lpstrFilter = (LPCSTR)param_5;
  local_164.lCustData = 0;
  if (param_6 == (DWORD *)0x0) {
    local_164.nFilterIndex = 1;
  }
  else {
    local_164.nFilterIndex = *param_6;
  }
  local_104[0] = '\0';
  if ((param_7 != (uchar *)0x0) && (*param_7 != '\0')) {
    iVar1 = FUN_0041dc80(param_7);
    if (iVar1 != 0) {
      lstrcpynA(local_104,(LPCSTR)param_7,0x104);
      local_1 = 0;
      goto LAB_0040b95d;
    }
  }
  SHGetSpecialFolderLocation((HWND)0x0,5,&local_16c);
  SHGetPathFromIDListA(local_16c,local_104);
  SHGetMalloc(&local_168);
  (*local_168->lpVtbl->Free)(local_168,local_16c);
LAB_0040b95d:
  local_164.lpstrInitialDir = local_104;
  local_164.lpfnHook = (LPOFNHOOKPROC)0x0;
  FUN_0040b060((uchar *)&local_164.pvReserved,param_5,local_164.nFilterIndex);
  local_164.lpstrDefExt = (LPCSTR)&local_164.pvReserved;
  BVar2 = GetSaveFileNameA(&local_164);
  if (BVar2 != 0) {
    if (param_6 != (DWORD *)0x0) {
      *param_6 = local_164.nFilterIndex;
    }
    return 0;
  }
  return 0x80004005;
}


