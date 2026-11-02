/* Module: rmbe3260.dll
   Function: FUN_6601a1f0
   Address: 6601a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6601a1f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  if ((((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) &&
      (param_4 != (undefined4 *)0x0)) && (param_5 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
    *param_3 = *(undefined4 *)(param_1 + 0x24);
    *param_4 = *(undefined4 *)(param_1 + 0x28);
    *param_5 = *(undefined4 *)(param_1 + 0x2c);
    return 0;
  }
  return 0x80004003;
}


