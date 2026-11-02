/* Module: vegas30.exe
   Function: FUN_004b5910
   Address: 004b5910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b5910(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x446);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  UVar3 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x446);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  *(LRESULT *)(*param_2 + 0x2044) = LVar2;
  FUN_004b5280(param_1,param_2);
  LVar5 = 0;
  UVar3 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
  DAT_0064cb60 = 1;
  param_2[2] = 1;
  param_2[0x1d] = 1;
  return;
}


