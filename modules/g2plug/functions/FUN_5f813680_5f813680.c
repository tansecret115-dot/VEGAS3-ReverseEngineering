/* Module: g2plug.dll
   Function: FUN_5f813680
   Address: 5f813680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813680(void *this,HWND param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  SetDlgItemTextA(param_1,0x3ea,(LPCSTR)(iVar1 + 0x160));
  SetDlgItemTextA(param_1,0x3eb,(LPCSTR)(iVar1 + 0x1e0));
  SetDlgItemTextA(param_1,0x3ec,(LPCSTR)(iVar1 + 0x260));
  SetDlgItemTextA(param_1,0x3ed,(LPCSTR)(iVar1 + 0x2e0));
  CheckDlgButton(param_1,0x3fb,(uint)(*(int *)(iVar1 + 0x15c) != 0));
  CheckDlgButton(param_1,0x3fa,(uint)(*(int *)(iVar1 + 0x158) != 0));
  CheckDlgButton(param_1,0x3f9,(uint)(*(int *)(iVar1 + 0x154) != 0));
  return 0;
}


