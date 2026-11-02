/* Module: auth3260.dll
   Function: FUN_627a4570
   Address: 627a4570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a4570(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_627a7050) || (param_2[1] != DAT_627a7054)) || (param_2[2] != DAT_627a7058)
       ) || (param_2[3] != DAT_627a705c)) &&
     (((*param_2 != DAT_627a7430 || (param_2[1] != DAT_627a7434)) ||
      ((param_2[2] != DAT_627a7438 || (param_2[3] != DAT_627a743c)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


