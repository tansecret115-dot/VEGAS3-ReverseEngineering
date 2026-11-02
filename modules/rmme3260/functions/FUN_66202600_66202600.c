/* Module: rmme3260.dll
   Function: FUN_66202600
   Address: 66202600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202600(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar1 == DAT_6626aa68 && (param_2[1] == DAT_6626aa6c)) &&
      ((param_2[2] == DAT_6626aa70 && (param_2[3] == DAT_6626aa74)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626aa78) && (param_2[1] == DAT_6626aa7c)) &&
     ((param_2[2] == DAT_6626aa80 && (param_2[3] == DAT_6626aa84)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else {
    if ((((iVar1 != DAT_6626b1a8) || (param_2[1] != DAT_6626b1ac)) || (param_2[2] != DAT_6626b1b0))
       || (param_2[3] != DAT_6626b1b4)) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


