/* Module: rmbe3260.dll
   Function: FUN_6605fe60
   Address: 6605fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605fe60(int *param_1,int *param_2,int param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *this;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  piVar5 = param_5;
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  local_8 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,param_5,&param_5,&local_10,&local_8);
  uVar7 = (int)piVar5 - local_8;
  uVar4 = 0;
  piVar5 = param_5;
  while (this = piVar5, this != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)*this + 0x18))((int *)*this);
    uVar2 = iVar1 + uVar4;
    if (param_4 <= uVar2) break;
    piVar5 = (int *)this[2];
    uVar4 = uVar2;
    if (this != param_5) {
      FUN_660606a0(param_1 + 6,this);
    }
  }
  if (param_5 == this) {
    iVar1 = uVar7 - 1;
  }
  else {
    iVar1 = -uVar4;
  }
  local_c = iVar1 + param_4;
  if (param_5 == (int *)0x0) {
    if (uVar7 != 0) {
      puVar6 = operator_new(0x28);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_6605c060(puVar6);
      }
      (**(code **)(*piVar5 + 4))(piVar5);
      (**(code **)(*piVar5 + 0x14))(piVar5,uVar7 - 1);
      param_5 = operator_new(0xc);
      if (param_5 == (int *)0x0) {
        param_5 = (int *)0x0;
      }
      else {
        *param_5 = 0;
        param_5[1] = 0;
        param_5[2] = 0;
      }
      FUN_66060550(param_5,piVar5);
      FUN_66060740(param_1 + 6,(int)param_5,(void *)0x0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
  }
  else {
    piVar5 = (int *)*param_5;
    (**(code **)(*piVar5 + 4))(piVar5);
    if (uVar7 == 0) {
      if (param_5 == this) {
        param_5 = (int *)0x0;
      }
      else {
        piVar3 = (int *)param_5[1];
        FUN_660606a0(param_1 + 6,param_5);
        param_5 = piVar3;
      }
    }
    else {
      FUN_66060580(param_5,piVar5,0,uVar7);
    }
    piVar3 = this;
    if (this != (int *)0x0) {
      if (this == param_5) {
        piVar3 = operator_new(0xc);
        this = (int *)0x0;
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          this = piVar3;
        }
        FUN_66060740(param_1 + 6,(int)this,param_5);
      }
      else {
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        piVar5 = (int *)*this;
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      uVar4 = (**(code **)(*piVar5 + 0x18))(piVar5);
      if (local_c < uVar4) {
        FUN_66060580(this,piVar5,local_c + 1,0xffffffff);
        piVar3 = this;
      }
      else {
        piVar3 = (int *)this[1];
        FUN_660606a0(param_1 + 6,this);
      }
    }
    this = piVar3;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  puVar6 = operator_new(0xc);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  FUN_66060580(puVar6,param_2,param_3,param_4);
  if (param_5 != (int *)0x0) {
    FUN_66060740(param_1 + 6,(int)puVar6,param_5);
    return 0;
  }
  FUN_660606d0(param_1 + 6,(int)puVar6,this);
  return 0;
}


