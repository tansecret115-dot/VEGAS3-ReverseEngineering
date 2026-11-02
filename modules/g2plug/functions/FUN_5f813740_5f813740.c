/* Module: g2plug.dll
   Function: FUN_5f813740
   Address: 5f813740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813740(void *this,HWND param_1)

{
  int iVar1;
  UINT UVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  GetDlgItemTextA(param_1,0x3ea,(LPSTR)(iVar1 + 0x160),0x80);
  GetDlgItemTextA(param_1,0x3eb,(LPSTR)(iVar1 + 0x1e0),0x80);
  GetDlgItemTextA(param_1,0x3ec,(LPSTR)(iVar1 + 0x260),0x80);
  GetDlgItemTextA(param_1,0x3ed,(LPSTR)(iVar1 + 0x2e0),0xff);
  UVar2 = IsDlgButtonChecked(param_1,0x3f9);
  *(UINT *)(iVar1 + 0x154) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x3fa);
  *(UINT *)(iVar1 + 0x158) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x3fb);
  *(UINT *)(iVar1 + 0x15c) = UVar2;
  return 0;
}


