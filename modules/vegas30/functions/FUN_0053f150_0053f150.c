/* Module: vegas30.exe
   Function: FUN_0053f150
   Address: 0053f150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053f150(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x18) = (param_3 & 1) << 0x14 | *(uint *)(param_1 + 0x18) & 0xffefffff;
  if (param_2 < 2) {
    param_2 = 2;
  }
  else if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  *(int *)(param_1 + 0x3a4) = param_2;
  DAT_00649cf0 = param_2;
  SendMessageA(*(HWND *)(param_1 + 4),5,0,
               CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x10)));
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,1);
  FUN_004530a0(param_1,0x1400);
  return;
}


