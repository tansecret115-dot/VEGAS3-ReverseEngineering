/* Module: pngu3266.dll
   Function: DoModal
   Address: 60605892
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNBrowseDialog::DoModal(void) */

ulong __thiscall CPNBrowseDialog::DoModal(CPNBrowseDialog *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  LPSTR pszPath;
  ulong uVar4;
  _browseinfoA local_2c;
  LPCITEMIDLIST local_c;
  IMalloc *local_8;
  
                    /* 0x15892  964  ?DoModal@CPNBrowseDialog@@UAEKXZ */
  uVar4 = 0;
  XPNDialog::PreDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  memset(&local_2c,0,0x20);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x10c))();
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar3 + 0x10c))();
      piVar1 = piVar3;
    }
    (**(code **)(*piVar1 + 0x110))(this);
    if (piVar1 != (int *)0x0) {
      local_2c.hwndOwner = (HWND)piVar1[3];
      goto LAB_606058f3;
    }
  }
  local_2c.hwndOwner = (HWND)0x0;
LAB_606058f3:
  local_2c.lpszTitle =
       (LPCSTR)(-(uint)(*(int *)(*(uint *)(this + 0xdc) - 8) != 0) & *(uint *)(this + 0xdc));
  local_2c.ulFlags = TranslateFlags(this);
  local_c = SHBrowseForFolderA(&local_2c);
  if (local_c != (LPITEMIDLIST)0x0) {
    pszPath = (LPSTR)FUN_60619190(this + 0xd0,0x104);
    SHGetPathFromIDListA(local_c,pszPath);
    FUN_60619210(this + 0xd0,-1);
    local_8 = (IMalloc *)0x0;
    SHGetMalloc(&local_8);
    if (local_8 != (IMalloc *)0x0) {
      (*local_8->lpVtbl->Free)(local_8,local_c);
      (*local_8->lpVtbl->Release)(local_8);
    }
    uVar4 = 1;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x110))(0);
  }
  XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  return uVar4;
}


