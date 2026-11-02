/* Module: vegas30.exe
   Function: FUN_0044c570
   Address: 0044c570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c570(int param_1,undefined4 param_2,int param_3)

{
  if (((*(byte *)(param_1 + 0x9c) & 0x10) == 0) &&
     ((*(int *)(param_1 + 0xac) == param_3 || (param_3 == 1)))) {
    FUN_00445080(param_1,0);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x14;
    FUN_00444b90(param_1,0);
    FUN_00446620(param_1);
    FUN_00446940(param_1);
    InvalidateRect(*(HWND *)(param_1 + 0x84),(RECT *)0x0,1);
    FUN_00445cb0(param_1);
    return 1;
  }
  return 0;
}


