/* Module: vegas30.exe
   Function: FUN_0044bfa0
   Address: 0044bfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044bfa0(int param_1,int param_2)

{
  WPARAM wParam;
  LPARAM lParam;
  
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(int *)(param_1 + 0xac) = param_2;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffe0b | 0x200;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x34);
  FUN_00446940(param_1);
  lParam = 0;
  wParam = FUN_00445160(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x144),0x602,wParam,lParam);
  InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,1);
  FUN_00445cb0(param_1);
  return 1;
}


