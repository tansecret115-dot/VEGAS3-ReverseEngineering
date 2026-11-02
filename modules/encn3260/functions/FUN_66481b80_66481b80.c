/* Module: encn3260.dll
   Function: FUN_66481b80
   Address: 66481b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66481b80(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8))
      && (param_2[3] == DAT_664dc5dc)) ||
     (((iVar1 == DAT_664dcff0 && (param_2[1] == DAT_664dcff4)) &&
      ((param_2[2] == DAT_664dcff8 && (param_2[3] == DAT_664dcffc)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dd030) && (param_2[1] == DAT_664dd034)) &&
     ((param_2[2] == DAT_664dd038 && (param_2[3] == DAT_664dd03c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if ((((iVar1 == DAT_664dd020) && (param_2[1] == DAT_664dd024)) &&
           (param_2[2] == DAT_664dd028)) && (param_2[3] == DAT_664dd02c)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else if (((iVar1 == DAT_664dd040) && (param_2[1] == DAT_664dd044)) &&
          ((param_2[2] == DAT_664dd048 && (param_2[3] == DAT_664dd04c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_664ddb30) || (param_2[1] != DAT_664ddb34)) ||
       ((param_2[2] != DAT_664ddb38 || (param_2[3] != DAT_664ddb3c)))) {
      puVar2 = (undefined4 *)param_1[8];
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = (**(code **)*puVar2)(puVar2,param_2,param_3);
        return uVar3;
      }
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


