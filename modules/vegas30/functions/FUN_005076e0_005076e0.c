/* Module: vegas30.exe
   Function: FUN_005076e0
   Address: 005076e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005076e0(HWND param_1,HWND param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  uint bEnable;
  
  pHVar2 = GetDlgItem(param_1,0x434);
  LVar3 = SendMessageA(pHVar2,0x147,0,0);
  iVar1 = *(int *)(DAT_0064e51c + LVar3 * 4);
  LVar3 = SendMessageA(param_2,0x188,0,0);
  pHVar2 = GetDlgItem(param_1,0x435);
  LVar4 = SendMessageA(pHVar2,0x188,0,0);
  bEnable = (uint)((*(byte *)(iVar1 + 10 + (LVar3 + LVar4 * 10) * 2) & 0x60) == 0);
  pHVar2 = GetDlgItem(param_1,0x43a);
  EnableWindow(pHVar2,bEnable);
  return;
}


