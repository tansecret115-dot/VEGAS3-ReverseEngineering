/* Module: rmbe3260.dll
   Function: FUN_6602e930
   Address: 6602e930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602e930(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_66065718) || (param_2[1] != DAT_6606571c)) || (param_2[2] != DAT_66065720)
       ) || (param_2[3] != DAT_66065724)) &&
     (((*param_2 != DAT_66064ee8 || (param_2[1] != DAT_66064eec)) ||
      ((param_2[2] != DAT_66064ef0 || (param_2[3] != DAT_66064ef4)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


