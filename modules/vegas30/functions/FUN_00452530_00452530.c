/* Module: vegas30.exe
   Function: FUN_00452530
   Address: 00452530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452530(HWND param_1,int param_2)

{
  HWND pHVar1;
  uint nCmdShow;
  uint nCmdShow_00;
  
  nCmdShow = -(uint)(param_2 != 0) & 5;
  nCmdShow_00 = nCmdShow;
  pHVar1 = GetDlgItem(param_1,0x4a1);
  ShowWindow(pHVar1,nCmdShow_00);
  pHVar1 = GetDlgItem(param_1,0x4a2);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


