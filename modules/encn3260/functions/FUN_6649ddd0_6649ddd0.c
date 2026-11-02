/* Module: encn3260.dll
   Function: FUN_6649ddd0
   Address: 6649ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649ddd0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_664dcdc0) && (param_2[1] == DAT_664dcdc4)) && (param_2[2] == DAT_664dcdc8)) &&
     (param_2[3] == DAT_664dcdcc)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dce30) && (param_2[1] == DAT_664dce34)) &&
     ((param_2[2] == DAT_664dce38 && (param_2[3] == DAT_664dce3c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if (((iVar1 == DAT_664dcdf0) && (param_2[1] == DAT_664dcdf4)) &&
          ((param_2[2] == DAT_664dcdf8 && (param_2[3] == DAT_664dcdfc)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if ((((iVar1 == DAT_664dce20) && (param_2[1] == DAT_664dce24)) &&
           (param_2[2] == DAT_664dce28)) && (param_2[3] == DAT_664dce2c)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else if (((iVar1 == DAT_664dd1a0) && (param_2[1] == DAT_664dd1a4)) &&
          ((param_2[2] == DAT_664dd1a8 && (param_2[3] == DAT_664dd1ac)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_664dc770) || (param_2[1] != DAT_664dc774)) ||
       ((param_2[2] != DAT_664dc778 || (param_2[3] != DAT_664dc77c)))) {
      if ((((iVar1 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8)
          ) && (param_2[3] == DAT_664dc5dc)) {
        (**(code **)(*param_1 + 4))(param_1);
        *param_3 = (int)param_1;
        return 0;
      }
      if (((iVar1 == DAT_664dcf90) && (param_2[1] == DAT_664dcf94)) &&
         ((param_2[2] == DAT_664dcf98 && (param_2[3] == DAT_664dcf9c)))) {
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = (**(code **)*puVar2)(puVar2,&DAT_664dcf90,param_3);
          return uVar3;
        }
      }
      else if (((iVar1 == DAT_664dcdb0) && (param_2[1] == DAT_664dcdb4)) &&
              ((param_2[2] == DAT_664dcdb8 && ((param_2[3] == DAT_664dcdbc && (param_1[9] != 0))))))
      {
        piVar4 = (int *)FUN_664bab80(param_1[9]);
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


