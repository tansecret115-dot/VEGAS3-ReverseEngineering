/* Module: encn3260.dll
   Function: FUN_664812c0
   Address: 664812c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664812c0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[3];
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar4)(puVar4,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *param_2;
  if ((((iVar1 == DAT_664dc5d0) && (param_2[1] == DAT_664dc5d4)) && (param_2[2] == DAT_664dc5d8)) &&
     (param_2[3] == DAT_664dc5dc)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dd2e0) && (param_2[1] == DAT_664dd2e4)) &&
     ((param_2[2] == DAT_664dd2e8 && (param_2[3] == DAT_664dd2ec)))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dc5f0) && (param_2[1] == DAT_664dc5f4)) &&
     ((param_2[2] == DAT_664dc5f8 && (param_2[3] == DAT_664dc5fc)))) {
    if (param_1[4] == 0) {
      pvVar2 = operator_new(0xc);
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_6649bf20(pvVar2,param_1);
      }
      param_1[4] = (int)piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    (**(code **)(*(int *)param_1[4] + 4))((int *)param_1[4]);
    *param_3 = param_1[4];
    return 0;
  }
  piVar3 = (int *)param_1[1];
  if ((((piVar3 != (int *)0x0) && (iVar1 == DAT_664dc6c0)) && (param_2[1] == DAT_664dc6c4)) &&
     ((param_2[2] == DAT_664dc6c8 && (param_2[3] == DAT_664dc6cc)))) {
    (**(code **)(*piVar3 + 4))(piVar3);
    *param_3 = param_1[1];
    return 0;
  }
  if (((iVar1 == DAT_664dcb00) && ((param_2[1] == DAT_664dcb04 && (param_2[2] == DAT_664dcb08)))) &&
     (param_2[3] == DAT_664dcb0c)) {
    if (param_1[5] == 0) {
      puVar4 = operator_new(0x30);
      if (puVar4 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_6649cf10(puVar4);
      }
      param_1[5] = (int)piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      (**(code **)(*(int *)param_1[5] + 0x14))
                ((int *)param_1[5],s_Progressive_Networks_664e2080,s_Encoder_SDK_664e2098,6,0);
      if (param_1[4] == 0) {
        pvVar2 = operator_new(0xc);
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_6649bf20(pvVar2,param_1);
        }
        param_1[4] = (int)piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    (**(code **)(*(int *)param_1[5] + 4))((int *)param_1[5]);
    *param_3 = param_1[5];
    return 0;
  }
  if ((((iVar1 == DAT_664dc710) && (param_2[1] == DAT_664dc714)) && (param_2[2] == DAT_664dc718)) &&
     (param_2[3] == DAT_664dc71c)) {
    if (param_1[6] == 0) {
      pvVar2 = operator_new(0x14);
      if (pvVar2 == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_66497230(pvVar2,param_1);
      }
      param_1[6] = (int)piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    (**(code **)(*(int *)param_1[6] + 4))((int *)param_1[6]);
    *param_3 = param_1[6];
    return 0;
  }
  if (((iVar1 == DAT_664dcb30) && (param_2[1] == DAT_664dcb34)) &&
     ((param_2[2] == DAT_664dcb38 && (param_2[3] == DAT_664dcb3c)))) {
    if (param_1[9] == 0) {
      puVar4 = operator_new(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_6649c930(puVar4);
      }
      param_1[9] = (int)piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    (**(code **)(*(int *)param_1[9] + 4))((int *)param_1[9]);
    *param_3 = param_1[9];
    return 0;
  }
  piVar3 = (int *)param_1[7];
  if (piVar3 != (int *)0x0) {
    if (((iVar1 == DAT_664dcd30) && (param_2[1] == DAT_664dcd34)) &&
       ((param_2[2] == DAT_664dcd38 && (param_2[3] == DAT_664dcd3c)))) {
      if (param_1[8] == 0) {
        pvVar2 = operator_new(0x14);
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_664cff90(pvVar2,param_1[7]);
        }
        param_1[8] = (int)piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      (**(code **)(*(int *)param_1[8] + 4))((int *)param_1[8]);
      *param_3 = param_1[8];
      return 0;
    }
    if (piVar3 != (int *)0x0) {
      if ((((iVar1 == DAT_664dd880) && (param_2[1] == DAT_664dd884)) && (param_2[2] == DAT_664dd888)
          ) && (param_2[3] == DAT_664dd88c)) {
        (**(code **)(*piVar3 + 4))(piVar3);
        *param_3 = param_1[7];
        return 0;
      }
      if (piVar3 != (int *)0x0) {
        iVar1 = (**(code **)*piVar3)(piVar3,param_2,param_3);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  *param_3 = 0;
  return 0x80004002;
}


