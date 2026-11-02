/* Module: vfplugs.dll
   Function: FUN_00430800
   Address: 00430800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430800(int *param_1)

{
  if ((param_1 != (int *)0x0) && ((param_1[2] != *param_1 || (param_1[3] != param_1[1])))) {
    return 0;
  }
  return 1;
}


