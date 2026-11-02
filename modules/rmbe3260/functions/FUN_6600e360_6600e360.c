/* Module: rmbe3260.dll
   Function: FUN_6600e360
   Address: 6600e360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6600e360(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  if ((((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) && (param_4 != (int *)0x0)
      ) && (param_5 != (int *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    *param_3 = *(undefined4 *)(param_1 + 0x18);
    *param_4 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
    *param_5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    return 0;
  }
  return 0x80004003;
}


