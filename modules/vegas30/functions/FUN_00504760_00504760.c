/* Module: vegas30.exe
   Function: FUN_00504760
   Address: 00504760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00504760(uint param_1)

{
  if (param_1 == 0) {
    return 0x4ffc0000;
  }
  if (8 < param_1) {
    return DAT_006434fc;
  }
  return *(undefined4 *)(&DAT_006434e0 + param_1 * 4);
}


