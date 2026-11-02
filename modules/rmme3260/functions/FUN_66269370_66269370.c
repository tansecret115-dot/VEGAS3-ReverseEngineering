/* Module: rmme3260.dll
   Function: FUN_66269370
   Address: 66269370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66269370(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar1 == DAT_6626a5f8 && (param_2[1] == DAT_6626a5fc)) &&
      ((param_2[2] == DAT_6626a600 && (param_2[3] == DAT_6626a604)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626b178) && (param_2[1] == DAT_6626b17c)) &&
     ((param_2[2] == DAT_6626b180 && (param_2[3] == DAT_6626b184)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


