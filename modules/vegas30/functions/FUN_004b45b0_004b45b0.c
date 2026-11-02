/* Module: vegas30.exe
   Function: FUN_004b45b0
   Address: 004b45b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b45b0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM wParam;
  LPARAM LVar4;
  
  LVar4 = 0;
  wParam = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x47e);
  LVar2 = SendMessageA(pHVar1,UVar3,wParam,LVar4);
  *(uint *)(*param_2 + 0x2198) = (uint)(LVar2 == 1);
  FUN_004b4290(param_1,param_2);
  LVar4 = 0;
  UVar3 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar4);
  param_2[2] = 1;
  param_2[0x1d] = 1;
  return;
}


