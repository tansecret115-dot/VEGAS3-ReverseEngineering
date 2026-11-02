/* Module: rmbe3260.dll
   Function: FUN_6600e5d0
   Address: 6600e5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600e5d0(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x44);
    return 0;
  }
  return 0x80004003;
}


