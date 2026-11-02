/* Module: sftrkfx1.dll
   Function: FUN_5cba6760
   Address: 5cba6760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cba6760(void *this,int param_1,float *param_2,int *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  undefined4 auStack_a0 [4];
  undefined4 uStack_90;
  float local_6c [3];
  float local_60;
  float local_54 [9];
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  iVar2 = *param_3;
  if (param_1 == 2) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 != 0) {
    pdVar4 = &local_30;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar4 = 0;
      pdVar4 = (double *)((int)pdVar4 + 4);
    }
    iVar2 = *(int *)this;
    local_10 = 1.0;
    pdVar4 = &local_30;
    puVar5 = auStack_a0;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *(undefined4 *)pdVar4;
      pdVar4 = (double *)((int)pdVar4 + 4);
      puVar5 = puVar5 + 1;
    }
    (**(code **)(iVar2 + 0x68))(this);
    *param_3 = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    return 1;
  }
  if (*(int *)((int)this + 0x2c) == 0) {
    FUN_5cba25c0(this,local_54);
    iVar3 = FUN_5cba5130(this,local_54,param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  iVar3 = FUN_5cba57c0((int)this);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 0x108) == 0) {
      FUN_5cba6520((double *)((int)this + 0xb0),param_2,iVar2);
    }
    return 0;
  }
  uStack_90 = 0x5cba6835;
  FUN_5cbde980(*(ushort **)((int)this + 0x28),0,param_2,iVar2,local_6c);
  fVar1 = local_6c[0] * (float)*(double *)((int)this + 0xf0);
  local_10 = 1000000.0;
  local_30 = (double)fVar1;
  local_28 = (double)(local_60 * (float)*(double *)((int)this + 0xf0));
  if (*(int *)((int)this + 0x108) == 0) {
    FUN_5cba6330((double *)((int)this + 0xb0),param_2,iVar2,&local_10);
    local_10 = local_10 / *(double *)((int)this + 0xf8);
    uStack_90 = 0x5cba68a0;
    FUN_5cbde980(*(ushort **)((int)this + 0x28),0,param_2,iVar2,local_6c);
    local_20 = (double)local_6c[0];
    local_18 = (double)local_60;
  }
  else {
    local_20 = (double)fVar1;
    local_18 = local_28;
    local_10 = 1.0;
  }
  iVar2 = *(int *)this;
  pdVar4 = &local_30;
  puVar5 = auStack_a0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    puVar5 = puVar5 + 1;
  }
  (**(code **)(iVar2 + 0x68))(this);
  return 0;
}


