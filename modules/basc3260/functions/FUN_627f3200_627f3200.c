/* Module: basc3260.dll
   Function: FUN_627f3200
   Address: 627f3200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f3200(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_627f5060) || (param_2[1] != DAT_627f5064)) || (param_2[2] != DAT_627f5068)
       ) || (param_2[3] != DAT_627f506c)) &&
     (((*param_2 != DAT_627f53c0 || (param_2[1] != DAT_627f53c4)) ||
      ((param_2[2] != DAT_627f53c8 || (param_2[3] != DAT_627f53cc)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


