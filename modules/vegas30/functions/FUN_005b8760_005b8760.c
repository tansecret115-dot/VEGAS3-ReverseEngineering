/* Module: vegas30.exe
   Function: FUN_005b8760
   Address: 005b8760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b8760(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x208);
}


