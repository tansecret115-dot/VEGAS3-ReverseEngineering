/* Module: sfcdi.dll
   Function: FUN_5bf16830
   Address: 5bf16830
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf16830(undefined4 *param_1,int param_2)

{
  HWND hWnd;
  uchar local_1c [20];
  undefined4 local_8;
  
  if ((int)param_1[2] <= param_2) {
    param_2 = param_1[2];
  }
  param_1[1] = param_2;
  local_8 = 100;
  FUN_5bf25750(local_1c,(BYTE *)"%d %%");
  hWnd = GetDlgItem((HWND)*param_1,0x47a);
  SendMessageA(hWnd,0x60c,1,param_1[1]);
  SetWindowTextA(hWnd,(LPCSTR)local_1c);
  return param_1[4] == 0;
}


