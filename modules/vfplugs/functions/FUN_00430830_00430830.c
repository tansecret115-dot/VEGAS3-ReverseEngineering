/* Module: vfplugs.dll
   Function: FUN_00430830
   Address: 00430830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430830(int *param_1,int *param_2)

{
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) &&
      (param_1[2] - *param_1 == param_2[2] - *param_2)) &&
     (param_1[3] - param_1[1] == param_2[3] - param_2[1])) {
    return 1;
  }
  return 0;
}


