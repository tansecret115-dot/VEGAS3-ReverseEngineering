/* Module: vegas30.exe
   Function: FUN_004b3680
   Address: 004b3680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b3680(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM wParam;
  LPARAM LVar4;
  
  LVar4 = 0;
  wParam = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x447);
  LVar2 = SendMessageA(pHVar1,UVar3,wParam,LVar4);
  *(uint *)(*param_2 + 0x2058) = (uint)(LVar2 == 1);
  FUN_004b2de0(param_1,param_2);
  FUN_004b2ff0(param_1,param_2);
  LVar4 = 0;
  UVar3 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar4);
  param_2[2] = 1;
  param_2[0x1d] = 1;
  return 0;
}


