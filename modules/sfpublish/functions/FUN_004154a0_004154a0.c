/* Module: sfpublish.dll
   Function: FUN_004154a0
   Address: 004154a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004154a0(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  FUN_00424f50(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  FUN_004205f0(*(void **)(param_1 + 0x20),*(undefined4 *)(param_1 + 4));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x3ea);
  FUN_0041a720(pHVar1,*(uchar **)(param_1 + 0x1c));
  iVar2 = FUN_00420660(*(void **)(param_1 + 0x20),0);
  if (-1 < iVar2) {
    EndDialog(*(HWND *)(param_1 + 4),1);
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),2);
  SetFocus(pHVar1);
  return 0;
}


