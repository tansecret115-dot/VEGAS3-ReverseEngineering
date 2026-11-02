/* Module: wmfplug2.dll
   Function: FUN_00409e00
   Address: 00409e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409e00(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    return 0;
  }
  return 0x80004005;
}


