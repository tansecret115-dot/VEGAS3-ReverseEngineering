/* Module: rmbe3260.dll
   Function: FUN_6605fd00
   Address: 6605fd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605fd00(int *param_1,int *param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_c;
  int local_8;
  
  puVar1 = param_5;
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  local_8 = 0;
  local_c = 0;
  (**(code **)(*param_1 + 0x28))(param_1,param_5,&param_5,&local_c,&local_8);
  uVar4 = (int)puVar1 - local_8;
  if (param_5 == (undefined4 *)0x0) {
    puVar1 = operator_new(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_6605c060(puVar1);
    }
    (**(code **)(*piVar3 + 4))(piVar3);
    (**(code **)(*piVar3 + 0x14))(piVar3,uVar4 - 1);
    param_5 = operator_new(0xc);
    if (param_5 == (undefined4 *)0x0) {
      param_5 = (undefined4 *)0x0;
    }
    else {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
    }
    FUN_66060550(param_5,piVar3);
    FUN_66060740(param_1 + 6,(int)param_5,(void *)0x0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    piVar3 = (int *)*param_5;
    (**(code **)(*piVar3 + 4))(piVar3);
    FUN_66060580(param_5,piVar3,0,uVar4);
    if (local_c != uVar4) {
      puVar1 = operator_new(0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      puVar5 = param_5;
      piVar2 = FUN_66060580(puVar1,piVar3,uVar4,0xffffffff);
      FUN_66060740(param_1 + 6,(int)piVar2,puVar5);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  FUN_66060580(puVar1,param_2,param_3,param_4);
  FUN_66060740(param_1 + 6,(int)puVar1,param_5);
  return 0;
}


