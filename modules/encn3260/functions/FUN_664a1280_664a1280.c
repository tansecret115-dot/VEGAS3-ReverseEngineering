/* Module: encn3260.dll
   Function: FUN_664a1280
   Address: 664a1280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a1280(int param_1,HRGN param_2)

{
  *(undefined2 *)(param_1 + 0xae) = 2;
  *(HRGN *)(param_1 + 0xaa) = param_2;
  if (((*(HWND *)(param_1 + 0x10d) != (HWND)0x0) && ((*(byte *)(param_1 + 0x5d) & 6) == 0)) &&
     (((*(byte *)(param_1 + 0x5c) & 0x20) == 0 || (DAT_664f0718 != 0)))) {
    InvalidateRgn(*(HWND *)(param_1 + 0x10d),param_2,1);
  }
  return 0;
}


