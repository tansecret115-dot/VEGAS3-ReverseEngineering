/* Module: wmfplug2.dll
   Function: FUN_00411dc0
   Address: 00411dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411dc0(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  WPARAM wParam;
  LRESULT LVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  pHVar2 = GetDlgItem(param_1,0x3ec);
  if (pHVar2 != (HWND)0x0) {
    FUN_00414520(pHVar2);
    FUN_00411e60(pHVar2,*(int *)(iVar1 + 0x3c));
    wParam = SendMessageA(pHVar2,0x147,0,0);
    if (wParam != 0xffffffff) {
      LVar3 = SendMessageA(pHVar2,0x150,wParam,0);
      *(LRESULT *)(iVar1 + 0x3c) = LVar3;
    }
  }
  pHVar2 = GetDlgItem(param_1,0x3ed);
  FUN_00414a00(pHVar2);
  FUN_00411ed0(pHVar2,(int *)(iVar1 + 0x38));
  return 0;
}


