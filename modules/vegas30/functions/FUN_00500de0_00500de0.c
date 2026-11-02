/* Module: vegas30.exe
   Function: FUN_00500de0
   Address: 00500de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00500de0(int param_1)

{
  uint wParam;
  HWND pHVar1;
  UINT UVar2;
  WPARAM wParam_00;
  LPARAM LVar3;
  
  wParam = (uint)(*(int *)(param_1 + 0x10) == 0);
  LVar3 = 0;
  UVar2 = 0xf1;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x46e);
  SendMessageA(pHVar1,UVar2,wParam,LVar3);
  wParam_00 = *(WPARAM *)(param_1 + 0x10);
  LVar3 = 0;
  UVar2 = 0xf1;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x470);
  SendMessageA(pHVar1,UVar2,wParam_00,LVar3);
  FUN_00500d70(param_1);
  return;
}


