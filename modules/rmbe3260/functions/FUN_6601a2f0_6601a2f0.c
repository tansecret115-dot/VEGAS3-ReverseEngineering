/* Module: rmbe3260.dll
   Function: FUN_6601a2f0
   Address: 6601a2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a2f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
    *param_3 = *(undefined4 *)(param_1 + 0x38);
    return 0;
  }
  return 0x80004003;
}


