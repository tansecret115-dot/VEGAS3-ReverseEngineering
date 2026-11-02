/* Module: rmme3260.dll
   Function: FUN_66201ed0
   Address: 66201ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66201ed0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar1 == DAT_6626b188 && (param_2[1] == DAT_6626b18c)) &&
      ((param_2[2] == DAT_6626b190 && (param_2[3] == DAT_6626b194)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626b1b8) && (param_2[1] == DAT_6626b1bc)) &&
     ((param_2[2] == DAT_6626b1c0 && (param_2[3] == DAT_6626b1c4)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if ((((iVar1 == DAT_6626b1a8) && (param_2[1] == DAT_6626b1ac)) &&
           (param_2[2] == DAT_6626b1b0)) && (param_2[3] == DAT_6626b1b4)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if (((iVar1 == DAT_6626b1e8) && (param_2[1] == DAT_6626b1ec)) &&
          ((param_2[2] == DAT_6626b1f0 && (param_2[3] == DAT_6626b1f4)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_6626ae68) || (param_2[1] != DAT_6626ae6c)) ||
       ((param_2[2] != DAT_6626ae70 || (param_2[3] != DAT_6626ae74)))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


