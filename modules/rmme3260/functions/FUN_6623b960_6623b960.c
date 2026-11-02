/* Module: rmme3260.dll
   Function: FUN_6623b960
   Address: 6623b960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623b960(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (((((iVar2 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0))
      && (param_2[3] == DAT_6626a5a4)) ||
     (((iVar2 == DAT_6626ac28 && (param_2[1] == DAT_6626ac2c)) &&
      ((param_2[2] == DAT_6626ac30 && (param_2[3] == DAT_6626ac34)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar2 == DAT_6626ad78) && (param_2[1] == DAT_6626ad7c)) &&
     ((param_2[2] == DAT_6626ad80 && (param_2[3] == DAT_6626ad84)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_6626a708) && (param_2[1] == DAT_6626a70c)) &&
           (param_2[2] == DAT_6626a710)) && (param_2[3] == DAT_6626a714)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else if (((iVar2 == DAT_6626ac18) && (param_2[1] == DAT_6626ac1c)) &&
          ((param_2[2] == DAT_6626ac20 && (param_2[3] == DAT_6626ac24)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else if (((iVar2 == DAT_6626abe8) && (param_2[1] == DAT_6626abec)) &&
          ((param_2[2] == DAT_6626abf0 && (param_2[3] == DAT_6626abf4)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_6626acd8) && (param_2[1] == DAT_6626acdc)) &&
           (param_2[2] == DAT_6626ace0)) && (param_2[3] == DAT_6626ace4)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if (((iVar2 == DAT_6626ac98) && (param_2[1] == DAT_6626ac9c)) &&
          ((param_2[2] == DAT_6626aca0 && (param_2[3] == DAT_6626aca4)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_6626ace8) && (param_2[1] == DAT_6626acec)) &&
           (param_2[2] == DAT_6626acf0)) && (param_2[3] == DAT_6626acf4)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  else {
    if ((((iVar2 != DAT_6626ad68) || (param_2[1] != DAT_6626ad6c)) || (param_2[2] != DAT_6626ad70))
       || (param_2[3] != DAT_6626ad74)) {
      puVar1 = (undefined4 *)param_1[0xb];
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
        if (iVar2 == 0) {
          return 0;
        }
      }
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


