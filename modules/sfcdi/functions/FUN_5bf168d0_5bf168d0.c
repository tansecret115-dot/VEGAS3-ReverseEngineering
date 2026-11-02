/* Module: sfcdi.dll
   Function: FUN_5bf168d0
   Address: 5bf168d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf168d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  
  param_1[2] = param_2;
  iVar1 = param_1[1];
  if (param_2 <= (int)param_1[1]) {
    iVar1 = param_2;
  }
  param_1[1] = iVar1;
  hWnd = GetDlgItem((HWND)*param_1,0x47a);
  SendMessageA(hWnd,0x60c,0,param_1[1]);
  SendMessageA(hWnd,0x60d,0,param_2);
  FUN_5bf16830(param_1,param_1[1]);
  return param_1[4] == 0;
}


