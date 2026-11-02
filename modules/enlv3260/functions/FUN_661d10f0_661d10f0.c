/* Module: enlv3260.dll
   Function: FUN_661d10f0
   Address: 661d10f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d10f0(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_661d51d0) || (param_2[1] != DAT_661d51d4)) || (param_2[2] != DAT_661d51d8)
       ) || (param_2[3] != DAT_661d51dc)) &&
     (((*param_2 != DAT_661d5760 || (param_2[1] != DAT_661d5764)) ||
      ((param_2[2] != DAT_661d5768 || (param_2[3] != DAT_661d576c)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


