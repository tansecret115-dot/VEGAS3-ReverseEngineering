/* Module: vidcap30.exe
   Function: FUN_00540a60
   Address: 00540a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00540a60(undefined4 *param_1,uint param_2)

{
  WPARAM wParam;
  
  param_1[0x48] = *param_1;
  wParam = GetDlgCtrlID((HWND)*param_1);
  param_1[0x49] = wParam;
  param_1[0x4a] = param_2 & 0xffff;
  param_1[0x4b] = param_1[0xf];
  param_1[0x4c] = param_1[0x10];
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  SendMessageA((HWND)param_1[0x47],0x4e,wParam,(LPARAM)(param_1 + 0x48));
  return;
}


