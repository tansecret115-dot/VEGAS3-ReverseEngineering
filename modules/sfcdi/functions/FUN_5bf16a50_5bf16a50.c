/* Module: sfcdi.dll
   Function: FUN_5bf16a50
   Address: 5bf16a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf16a50(undefined4 *param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem((HWND)*param_1,0x48a);
  SendMessageA(hWnd,0x60c,0,0);
  param_1[3] = param_2 + -1;
  SendMessageA(hWnd,0x60d,1,param_2 + -1);
  return;
}


