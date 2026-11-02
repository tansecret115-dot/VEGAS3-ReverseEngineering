/* Module: pnrs3260.dll
   Function: FUN_606f1740
   Address: 606f1740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_606f1740(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_606f3118) || (param_2[1] != DAT_606f311c)) || (param_2[2] != DAT_606f3120)
       ) || (param_2[3] != DAT_606f3124)) &&
     (((*param_2 != DAT_606f3138 || (param_2[1] != DAT_606f313c)) ||
      ((param_2[2] != DAT_606f3140 || (param_2[3] != DAT_606f3144)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


