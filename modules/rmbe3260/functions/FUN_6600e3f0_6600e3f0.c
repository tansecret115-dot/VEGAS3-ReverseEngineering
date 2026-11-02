/* Module: rmbe3260.dll
   Function: FUN_6600e3f0
   Address: 6600e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6600e3f0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  if ((((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) && (param_4 != (int *)0x0)
      ) && (param_5 != (int *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    *param_3 = *(undefined4 *)(param_1 + 0x28);
    *param_4 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24);
    *param_5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    return 0;
  }
  return 0x80004003;
}


