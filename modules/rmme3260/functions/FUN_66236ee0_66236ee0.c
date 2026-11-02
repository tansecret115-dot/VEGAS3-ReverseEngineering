/* Module: rmme3260.dll
   Function: FUN_66236ee0
   Address: 66236ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66236ee0(int param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5)

{
  *(undefined2 *)(param_1 + 0xae) = 2;
  *(LONG *)(param_1 + 0x9a) = param_2;
  *(LONG *)(param_1 + 0x9e) = param_3;
  *(LONG *)(param_1 + 0xa2) = param_4;
  *(LONG *)(param_1 + 0xa6) = param_5;
  if (((*(HWND *)(param_1 + 0x10d) != (HWND)0x0) && ((*(byte *)(param_1 + 0x5d) & 6) == 0)) &&
     (((*(byte *)(param_1 + 0x5c) & 0x20) == 0 || (DAT_6627cf20 != 0)))) {
    InvalidateRect(*(HWND *)(param_1 + 0x10d),(RECT *)&param_2,1);
  }
  return 0;
}


