/* Module: rmbe3260.dll
   Function: FUN_6605df30
   Address: 6605df30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605df30(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_66064ee8) || (param_2[1] != DAT_66064eec)) || (param_2[2] != DAT_66064ef0)
       ) || (param_2[3] != DAT_66064ef4)) &&
     (((*param_2 != DAT_66064f78 || (param_2[1] != DAT_66064f7c)) ||
      ((param_2[2] != DAT_66064f80 || (param_2[3] != DAT_66064f84)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


