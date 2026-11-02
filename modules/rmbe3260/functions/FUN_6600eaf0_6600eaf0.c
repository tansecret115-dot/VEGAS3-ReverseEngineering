/* Module: rmbe3260.dll
   Function: FUN_6600eaf0
   Address: 6600eaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600eaf0(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    return 0;
  }
  return 0x80004003;
}


