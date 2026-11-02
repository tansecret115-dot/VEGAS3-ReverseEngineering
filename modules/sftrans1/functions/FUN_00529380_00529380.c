/* Module: sftrans1.dll
   Function: FUN_00529380
   Address: 00529380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00529380(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = param_2[2];
  *(undefined4 *)(param_1 + 0x50) = param_2[3];
  InvalidateRect(*(HWND *)(param_1 + 0x10),(RECT *)0x0,0);
  return 1;
}


