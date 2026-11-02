/* Module: sfcdi.dll
   Function: FUN_5bf16940
   Address: 5bf16940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16940(undefined4 *param_1,int param_2)

{
  uint nCmdShow;
  HWND hWnd;
  
  nCmdShow = -(uint)(param_2 != 0) & 5;
  hWnd = GetDlgItem((HWND)*param_1,0x47b);
  ShowWindow(hWnd,nCmdShow);
  return;
}


