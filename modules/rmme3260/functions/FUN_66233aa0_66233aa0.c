/* Module: rmme3260.dll
   Function: FUN_66233aa0
   Address: 66233aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66233aa0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_6626ac28) && (param_2[1] == DAT_6626ac2c)) && (param_2[2] == DAT_6626ac30)) &&
     (param_2[3] == DAT_6626ac34)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626ad78) && (param_2[1] == DAT_6626ad7c)) &&
     ((param_2[2] == DAT_6626ad80 && (param_2[3] == DAT_6626ad84)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if (((iVar1 == DAT_6626ac58) && (param_2[1] == DAT_6626ac5c)) &&
          ((param_2[2] == DAT_6626ac60 && (param_2[3] == DAT_6626ac64)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if ((((iVar1 == DAT_6626ac88) && (param_2[1] == DAT_6626ac8c)) &&
           (param_2[2] == DAT_6626ac90)) && (param_2[3] == DAT_6626ac94)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else if (((iVar1 == DAT_6626ad58) && (param_2[1] == DAT_6626ad5c)) &&
          ((param_2[2] == DAT_6626ad60 && (param_2[3] == DAT_6626ad64)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_6626a708) || (param_2[1] != DAT_6626a70c)) ||
       ((param_2[2] != DAT_6626a710 || (param_2[3] != DAT_6626a714)))) {
      if ((((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) && (param_2[2] == DAT_6626a5a0)
          ) && (param_2[3] == DAT_6626a5a4)) {
        (**(code **)(*param_1 + 4))(param_1);
        *param_3 = (int)param_1;
        return 0;
      }
      if (((iVar1 == DAT_6626a628) && (param_2[1] == DAT_6626a62c)) &&
         ((param_2[2] == DAT_6626a630 && (param_2[3] == DAT_6626a634)))) {
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = (**(code **)*puVar2)(puVar2,&DAT_6626a628,param_3);
          return uVar3;
        }
      }
      else if (((iVar1 == DAT_6626ac18) && (param_2[1] == DAT_6626ac1c)) &&
              ((param_2[2] == DAT_6626ac20 && ((param_2[3] == DAT_6626ac24 && (param_1[9] != 0))))))
      {
        piVar4 = (int *)FUN_66250c10(param_1[9]);
        puVar2 = *(undefined4 **)(*piVar4 + 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = (**(code **)*puVar2)(puVar2,param_2,param_3);
          return uVar3;
        }
      }
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


