/* Module: rn5a3260.dll
   Function: FUN_628a3fa0
   Address: 628a3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a3fa0(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_628a6060) || (param_2[1] != DAT_628a6064)) || (param_2[2] != DAT_628a6068)
       ) || (param_2[3] != DAT_628a606c)) &&
     (((*param_2 != DAT_628a6390 || (param_2[1] != DAT_628a6394)) ||
      ((param_2[2] != DAT_628a6398 || (param_2[3] != DAT_628a639c)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


