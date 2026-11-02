/* Module: rmme3260.dll
   Function: FUN_66242290
   Address: 66242290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66242290(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_6626a648) || (param_2[1] != DAT_6626a64c)) || (param_2[2] != DAT_6626a650)
       ) || (param_2[3] != DAT_6626a654)) &&
     (((*param_2 != DAT_6626a598 || (param_2[1] != DAT_6626a59c)) ||
      ((param_2[2] != DAT_6626a5a0 || (param_2[3] != DAT_6626a5a4)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


