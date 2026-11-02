/* Module: rmbe3260.dll
   Function: FUN_6600ebc0
   Address: 6600ebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600ebc0(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    return 0;
  }
  return 0x80004003;
}


