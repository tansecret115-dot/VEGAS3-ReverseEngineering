/* Module: rmbe3260.dll
   Function: FUN_6600a410
   Address: 6600a410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600a410(CPNWindow *param_1)

{
  HRESULT HVar1;
  int iVar2;
  LPSTR pszPath;
  int iVar3;
  LPITEMIDLIST pidl;
  undefined4 *puVar4;
  CHAR local_12c;
  undefined4 local_12b;
  _browseinfoA local_2c;
  int local_c;
  IMalloc *local_8;
  
  local_12c = DAT_66075004;
  pidl = (LPITEMIDLIST)0x0;
  puVar4 = &local_12b;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_c = 1;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_8 = (IMalloc *)0x0;
  iVar3 = 0;
  HVar1 = SHGetMalloc(&local_8);
  if (HVar1 != 0) {
    iVar3 = -0x7ff8fff2;
  }
  if (-1 < iVar3) {
    local_2c.hwndOwner = CPNWindow::GetHWND(param_1);
    local_2c.pidlRoot = (LPCITEMIDLIST)0x0;
    local_2c.lpfn = (BFFCALLBACK)0x0;
    local_2c.lParam = 0;
    local_2c.pszDisplayName = &local_12c;
    local_2c.lpszTitle = s_Browse_For_Temporary_Storage_Fol_6606c278;
    local_2c.ulFlags = 1;
    pidl = SHBrowseForFolderA(&local_2c);
    iVar2 = 0;
    if (pidl == (LPITEMIDLIST)0x0) goto LAB_6600a49f;
  }
  iVar2 = local_c;
LAB_6600a49f:
  if (((-1 < iVar3) && (iVar2 != 0)) && (pidl != (LPCITEMIDLIST)0x0)) {
    pszPath = (LPSTR)FUN_6605bc10(param_1 + 0x10c,0x100);
    SHGetPathFromIDListA(pidl,pszPath);
    FUN_6605bc90(param_1 + 0x10c,-1);
    FUN_6600a500((int)param_1);
  }
  (*local_8->lpVtbl->Free)(local_8,pidl);
  if (local_8 != (IMalloc *)0x0) {
    (*local_8->lpVtbl->Release)(local_8);
  }
  return;
}


