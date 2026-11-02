/* Module: rmme3260.dll
   Function: FUN_66251440
   Address: 66251440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66251440(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((((iVar1 != DAT_6626a618) || (param_2[1] != DAT_6626a61c)) || (param_2[2] != DAT_6626a620))
       || (param_2[3] != DAT_6626a624)) &&
      (((iVar1 != DAT_6626a608 || (param_2[1] != DAT_6626a60c)) ||
       ((param_2[2] != DAT_6626a610 || (param_2[3] != DAT_6626a614)))))) &&
     (((iVar1 != DAT_6626a598 || (param_2[1] != DAT_6626a59c)) ||
      ((param_2[2] != DAT_6626a5a0 || (param_2[3] != DAT_6626a5a4)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


