/* Module: rmme3260.dll
   Function: FUN_662658a0
   Address: 662658a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662658a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar1 == DAT_6626ab28 && (param_2[1] == DAT_6626ab2c)) &&
      ((param_2[2] == DAT_6626ab30 && (param_2[3] == DAT_6626ab34)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626ab68) && (param_2[1] == DAT_6626ab6c)) &&
     ((param_2[2] == DAT_6626ab70 && (param_2[3] == DAT_6626ab74)))) {
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


