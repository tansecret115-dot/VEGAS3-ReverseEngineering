/* Module: rmme3260.dll
   Function: FUN_66201090
   Address: 66201090
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_66201090(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x18] = 0;
  param_1[0x29] = 0;
  *param_1 = (int)&PTR_FUN_6626a3b8;
  pvVar1 = operator_new(0xc);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_66232aa0(pvVar1,param_1);
  }
  param_1[3] = (int)puVar2;
  puVar2 = operator_new(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_66232590(puVar2);
  }
  param_1[4] = (int)puVar2;
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_6622d750(pvVar1,param_1);
  }
  param_1[5] = (int)puVar2;
  pvVar1 = operator_new(0x5c);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_6622d1c0(pvVar1,param_1);
  }
  piVar3 = (int *)param_1[3];
  param_1[6] = (int)puVar2;
  if ((((piVar3 != (int *)0x0) && (param_1[4] != 0)) && (param_1[5] != 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
    (**(code **)(*(int *)param_1[4] + 4))((int *)param_1[4]);
    (**(code **)(*(int *)param_1[5] + 4))((int *)param_1[5]);
    (**(code **)(*(int *)param_1[6] + 4))((int *)param_1[6]);
    piVar3 = param_1 + 0x19;
    iVar4 = 0x10;
    do {
      piVar3[-0x11] = 0;
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (**(code **)(*(int *)param_1[4] + 0x14))
                      ((int *)param_1[4],s_Progressive_Networks_6626f070,s_RealMedia_Player_6626f088
                       ,6,0);
    param_1[2] = iVar4;
    pvVar1 = operator_new(0x5c);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_6625ff60(pvVar1,(char *)0x0);
    }
    param_1[0x29] = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      param_1[2] = -0x7ff8fff2;
      return param_1;
    }
    FUN_66260b40(puVar2,param_1);
    FUN_66260bc0((void *)param_1[0x29]);
  }
  return param_1;
}


