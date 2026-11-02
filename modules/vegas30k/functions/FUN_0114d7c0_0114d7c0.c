/* Module: vegas30k.dll
   Function: FUN_0114d7c0
   Address: 0114d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114d7c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  WPARAM wParam;
  
  param_1[0x4f] = *param_1;
  wParam = GetDlgCtrlID((HWND)*param_1);
  param_1[0x50] = wParam;
  param_1[0x51] = param_2;
  param_1[0x53] = param_6;
  param_1[0x56] = param_5;
  param_1[0x54] = param_3;
  param_1[0x52] = 0xffff;
  param_1[0x57] = 1;
  param_1[0x55] = param_4;
  SendMessageA((HWND)param_1[0x47],0x4e,wParam,(LPARAM)(param_1 + 0x4f));
  return;
}


