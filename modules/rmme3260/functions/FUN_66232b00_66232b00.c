/* Module: rmme3260.dll
   Function: FUN_66232b00
   Address: 66232b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66232b00(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_6626a7d8) || (param_2[1] != DAT_6626a7dc)) || (param_2[2] != DAT_6626a7e0)
       ) || (param_2[3] != DAT_6626a7e4)) &&
     (((*param_2 != DAT_6626a598 || (param_2[1] != DAT_6626a59c)) ||
      ((param_2[2] != DAT_6626a5a0 || (param_2[3] != DAT_6626a5a4)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


