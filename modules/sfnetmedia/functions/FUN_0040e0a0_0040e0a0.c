/* Module: sfnetmedia.dll
   Function: FUN_0040e0a0
   Address: 0040e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040e0a0(void *this,int param_1)

{
  void *this_00;
  HWND hWndParent;
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x80);
  do {
    BVar1 = IsWindow((HWND)*puVar4);
    if (BVar1 == 0) {
      this_00 = (void *)(iVar3 * 0x20 + 0x7c + (int)this);
      if (this_00 == (void *)0x0) {
        return 0x80004005;
      }
      FUN_0040f1b0(this_00,param_1);
      hWndParent = *(HWND *)((int)this + 4);
      *(undefined4 *)((int)this_00 + 8) = this_00;
      DVar2 = GetCurrentThreadId();
      *(DWORD *)((int)this_00 + 0xc) = DVar2;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
      *(undefined4 **)((int)this_00 + 0x10) = DAT_004418a0;
      DAT_004418a0 = (undefined4 *)((int)this_00 + 8);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
      CreateDialogParamA(DAT_00441840,(LPCSTR)0xca,hWndParent,FUN_00405060,0);
      ShowWindow(*(HWND *)((int)this_00 + 4),5);
      return 0;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 8;
  } while (iVar3 < 1);
  return 0x80004005;
}


