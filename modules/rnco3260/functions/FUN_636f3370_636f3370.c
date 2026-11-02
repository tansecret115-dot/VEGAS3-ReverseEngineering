/* Module: rnco3260.dll
   Function: FUN_636f3370
   Address: 636f3370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f3370(int *param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_63765290 == *param_2) && (DAT_63765294 == param_2[1])) && (DAT_63765298 == param_2[2]))
     && (DAT_6376529c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_637652d0 == *param_2) && (DAT_637652d4 == param_2[1])) &&
     ((DAT_637652d8 == param_2[2] && (DAT_637652dc == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


