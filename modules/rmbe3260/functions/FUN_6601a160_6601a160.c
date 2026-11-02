/* Module: rmbe3260.dll
   Function: FUN_6601a160
   Address: 6601a160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a160(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    *param_3 = *(undefined4 *)(param_1 + 0x14);
    return 0;
  }
  return 0x80004003;
}


