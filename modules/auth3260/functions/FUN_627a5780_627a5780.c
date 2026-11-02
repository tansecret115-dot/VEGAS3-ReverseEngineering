/* Module: auth3260.dll
   Function: FUN_627a5780
   Address: 627a5780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a5780(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_627a7050) || (param_2[1] != DAT_627a7054)) || (param_2[2] != DAT_627a7058)
       ) || (param_2[3] != DAT_627a705c)) &&
     (((*param_2 != DAT_627a7400 || (param_2[1] != DAT_627a7404)) ||
      ((param_2[2] != DAT_627a7408 || (param_2[3] != DAT_627a740c)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


