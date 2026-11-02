/* Module: vegas30.exe
   Function: FUN_00500d70
   Address: 00500d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00500d70(int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  LRESULT LVar3;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x470);
  LVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  LVar3 = LVar2;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x46a);
  EnableWindow(pHVar1,LVar3);
  LVar3 = LVar2;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x441);
  EnableWindow(pHVar1,LVar3);
  LVar3 = LVar2;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x434);
  EnableWindow(pHVar1,LVar3);
  *(LRESULT *)(param_1 + 0x10) = LVar2;
  return;
}


