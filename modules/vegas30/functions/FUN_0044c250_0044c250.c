/* Module: vegas30.exe
   Function: FUN_0044c250
   Address: 0044c250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c250(int param_1,int param_2,int param_3)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 2;
  }
  *(int *)(param_1 + 0xac) = param_2;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffe2b | 0x220;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_00446940(param_1);
  lParam = 0;
  wParam = FUN_00445160(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x144),0x602,wParam,lParam);
  InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,1);
  FUN_00445cb0(param_1);
  return 1;
}


