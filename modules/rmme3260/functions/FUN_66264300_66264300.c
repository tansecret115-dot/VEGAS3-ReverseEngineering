/* Module: rmme3260.dll
   Function: FUN_66264300
   Address: 66264300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66264300(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar1 == DAT_6626a9b8 && (param_2[1] == DAT_6626a9bc)) &&
      ((param_2[2] == DAT_6626a9c0 && (param_2[3] == DAT_6626a9c4)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626a9a8) && (param_2[1] == DAT_6626a9ac)) &&
     ((param_2[2] == DAT_6626a9b0 && (param_2[3] == DAT_6626a9b4)))) {
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


