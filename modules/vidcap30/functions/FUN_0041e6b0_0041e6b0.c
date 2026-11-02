/* Module: vidcap30.exe
   Function: FUN_0041e6b0
   Address: 0041e6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e6b0(HWND param_1,HWND param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  uint bEnable;
  
  pHVar2 = GetDlgItem(param_1,0x9c43);
  LVar3 = SendMessageA(pHVar2,0x147,0,0);
  iVar1 = *(int *)(DAT_005bc2b8 + LVar3 * 4);
  LVar3 = SendMessageA(param_2,0x188,0,0);
  pHVar2 = GetDlgItem(param_1,0x9c4b);
  LVar4 = SendMessageA(pHVar2,0x188,0,0);
  bEnable = (uint)((*(byte *)(iVar1 + 10 + (LVar3 + LVar4 * 10) * 2) & 0x60) == 0);
  pHVar2 = GetDlgItem(param_1,0x9c41);
  EnableWindow(pHVar2,bEnable);
  return;
}


