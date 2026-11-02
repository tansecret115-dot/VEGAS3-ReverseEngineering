/* Module: encn3260.dll
   Function: FUN_664a5dc0
   Address: 664a5dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a5dc0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (((((iVar2 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8))
      && (param_2[3] == DAT_664dc5dc)) ||
     (((iVar2 == DAT_664dcdc0 && (param_2[1] == DAT_664dcdc4)) &&
      ((param_2[2] == DAT_664dcdc8 && (param_2[3] == DAT_664dcdcc)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar2 == DAT_664dce30) && (param_2[1] == DAT_664dce34)) &&
     ((param_2[2] == DAT_664dce38 && (param_2[3] == DAT_664dce3c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_664dc770) && (param_2[1] == DAT_664dc774)) &&
           (param_2[2] == DAT_664dc778)) && (param_2[3] == DAT_664dc77c)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else if (((iVar2 == DAT_664dcdb0) && (param_2[1] == DAT_664dcdb4)) &&
          ((param_2[2] == DAT_664dcdb8 && (param_2[3] == DAT_664dcdbc)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else if (((iVar2 == DAT_664dcda0) && (param_2[1] == DAT_664dcda4)) &&
          ((param_2[2] == DAT_664dcda8 && (param_2[3] == DAT_664dcdac)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_664dce90) && (param_2[1] == DAT_664dce94)) &&
           (param_2[2] == DAT_664dce98)) && (param_2[3] == DAT_664dce9c)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if (((iVar2 == DAT_664dce40) && (param_2[1] == DAT_664dce44)) &&
          ((param_2[2] == DAT_664dce48 && (param_2[3] == DAT_664dce4c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if ((((iVar2 == DAT_664dcec0) && (param_2[1] == DAT_664dcec4)) &&
           (param_2[2] == DAT_664dcec8)) && (param_2[3] == DAT_664dcecc)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  else {
    if ((((iVar2 != DAT_664dda90) || (param_2[1] != DAT_664dda94)) || (param_2[2] != DAT_664dda98))
       || (param_2[3] != DAT_664dda9c)) {
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


