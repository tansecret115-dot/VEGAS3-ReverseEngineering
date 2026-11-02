/* Module: sfcdi.dll
   Function: FUN_5bf16970
   Address: 5bf16970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16970(undefined4 *param_1,int param_2)

{
  HWND pHVar1;
  uint nCmdShow;
  uint nCmdShow_00;
  
  nCmdShow = -(uint)(param_2 != 0) & 5;
  nCmdShow_00 = nCmdShow;
  pHVar1 = GetDlgItem((HWND)*param_1,0x489);
  ShowWindow(pHVar1,nCmdShow_00);
  pHVar1 = GetDlgItem((HWND)*param_1,0x48a);
  ShowWindow(pHVar1,nCmdShow);
  return;
}


