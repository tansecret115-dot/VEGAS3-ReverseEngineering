/* Module: encn3260.dll
   Function: FUN_6649f680
   Address: 6649f680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649f680(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_664dcf90) && (param_2[1] == DAT_664dcf94)) && (param_2[2] == DAT_664dcf98)) &&
     (param_2[3] == DAT_664dcf9c)) {
    (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
    if (param_1 != 0) {
      *param_3 = param_1 + 0x10;
      return 0;
    }
  }
  else {
    if (((iVar1 == DAT_664dcdc0) && (param_2[1] == DAT_664dcdc4)) &&
       ((param_2[2] == DAT_664dcdc8 && (param_2[3] == DAT_664dcdcc)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4U);
      *param_3 = -(uint)(param_1 != 0) & param_1 + 4U;
      return 0;
    }
    if (((iVar1 == DAT_664dce30) && (param_2[1] == DAT_664dce34)) &&
       ((param_2[2] == DAT_664dce38 && (param_2[3] == DAT_664dce3c)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x14;
        return 0;
      }
    }
    else if ((((iVar1 == DAT_664dcda0) && (param_2[1] == DAT_664dcda4)) &&
             (param_2[2] == DAT_664dcda8)) && (param_2[3] == DAT_664dcdac)) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 8;
        return 0;
      }
    }
    else if (((iVar1 == DAT_664dce40) && (param_2[1] == DAT_664dce44)) &&
            ((param_2[2] == DAT_664dce48 && (param_2[3] == DAT_664dce4c)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0xc;
        return 0;
      }
    }
    else if (((iVar1 == DAT_664dda90) && (param_2[1] == DAT_664dda94)) &&
            ((param_2[2] == DAT_664dda98 && (param_2[3] == DAT_664dda9c)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x18;
        return 0;
      }
    }
    else if ((((iVar1 == DAT_664dce90) && (param_2[1] == DAT_664dce94)) &&
             (param_2[2] == DAT_664dce98)) && (param_2[3] == DAT_664dce9c)) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x1c;
        return 0;
      }
    }
    else {
      if (((iVar1 != DAT_664dc770) || (param_2[1] != DAT_664dc774)) ||
         ((param_2[2] != DAT_664dc778 || (param_2[3] != DAT_664dc77c)))) {
        if (((iVar1 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) &&
           ((param_2[2] == DAT_664dc5d8 && (param_2[3] == DAT_664dc5dc)))) {
          (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4U);
          *param_3 = -(uint)(param_1 != 0) & param_1 + 4U;
          return 0;
        }
        *param_3 = 0;
        return 0x80004002;
      }
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x20;
        return 0;
      }
    }
  }
  *param_3 = 0;
  return 0;
}


