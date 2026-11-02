/* Module: sfcdi.dll
   Function: FUN_5bf169c0
   Address: 5bf169c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf169c0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  HWND hWnd;
  uchar local_30 [40];
  uint local_8;
  
  local_8 = param_1[3];
  if (local_8 == 0) {
    local_8 = 1;
  }
  uVar1 = local_8;
  hWnd = GetDlgItem((HWND)*param_1,0x48a);
  if (uVar1 <= param_2) {
    param_2 = uVar1;
  }
  SendMessageA(hWnd,0x60c,1,param_2);
  FUN_5bf25750(local_30,(BYTE *)"%d %%");
  SetWindowTextA(hWnd,(LPCSTR)local_30);
  return;
}


