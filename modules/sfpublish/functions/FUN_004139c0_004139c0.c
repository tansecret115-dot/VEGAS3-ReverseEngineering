/* Module: sfpublish.dll
   Function: FUN_004139c0
   Address: 004139c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004139c0(int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  DWORD DVar3;
  
  FUN_00424f50(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x206);
  ShowWindow(pHVar1,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x207);
  ShowWindow(pHVar1,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f6);
  ShowWindow(pHVar1,5);
  LVar2 = SendMessageA(pHVar1,0x464,0,0xbe);
  if (LVar2 != 0) {
    LVar2 = SendMessageA(pHVar1,0x465,0xffffffff,-0x10000);
    if (LVar2 != 0) {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f5);
      SendMessageA(pHVar1,0x406,0,100);
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f8);
      FUN_0041a720(pHVar1,*(uchar **)(param_1 + 0x28));
      DVar3 = GetTickCount();
      *(DWORD *)(param_1 + 0x30) = DVar3;
    }
  }
  return 0;
}


