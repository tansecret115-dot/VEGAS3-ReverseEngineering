/* Module: sfppack1.dll
   Function: FUN_5cdb6ee0
   Address: 5cdb6ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cdb6ee0(void *this,int param_1,undefined4 param_2,int *param_3,double *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  double local_28 [4];
  
  local_34 = 0;
  local_30 = (uint)(param_1 == 2);
  local_38 = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_34;
  }
  else {
    local_34 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_5 = &local_38;
  }
  else {
    local_38 = *param_5;
  }
  *(uint *)((int)this + 0x70) = local_30;
  iVar1 = FUN_5cdb3080(this,(undefined4 *)local_28);
  if ((param_1 == 0) && (*(int *)((int)this + 0x4c) != 0)) {
    iVar1 = FUN_5cdb6230(this);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else if (((iVar1 != 0) || (*(int *)((int)this + 0x68) == 0)) &&
          ((local_30 == 0 && (iVar1 = FUN_5cdb5bb0(this,local_28), iVar1 < 0)))) {
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x4c) = 1;
  local_2c = FUN_5cdb85e0(this,param_2,&local_34,param_4,&local_38);
  if (DAT_5ce237e8 != 0) goto LAB_5cdb70df;
  uVar3 = *(uint *)(*(int *)((int)this + 0x60) + 4);
  local_30 = local_38;
  if (*(int *)((int)this + 0x128) == 0) {
    iVar1 = *(int *)((int)this + 0x114) - local_38;
    *(int *)((int)this + 0x114) = iVar1;
    if (iVar1 < 1) {
      uVar2 = rand();
      *(uint *)((int)this + 0x114) = (uVar2 & 3) * (uVar3 >> 4) + uVar3 * 4;
      uVar2 = rand();
      *(uint *)((int)this + 0x120) = (uVar2 & 0x1f) + 1;
      uVar2 = rand();
      *(uint *)((int)this + 0x124) = (uVar2 & 0x1f) + 1;
      *(uint *)((int)this + 0x128) = uVar3 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdb703f;
    }
    local_30 = 0;
  }
  else {
LAB_5cdb703f:
    uVar3 = *(uint *)((int)this + 0x128);
    if (uVar3 <= local_30) {
      local_30 = uVar3;
    }
    *(uint *)((int)this + 0x128) = uVar3 - local_30;
  }
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2);
  for (; local_30 != 0; local_30 = local_30 - 1) {
    uVar2 = DAT_5ce2a0dc % *(uint *)((int)this + 0x118);
    DAT_5ce2a0dc = DAT_5ce2a0dc + *(int *)((int)this + 0x120);
    *param_4 = (double)(*(float *)(*(int *)((int)this + 0x11c) + uVar2 * 4) + (float)*param_4);
    if (1 < uVar3) {
      uVar2 = DAT_5ce2a0e0 % *(uint *)((int)this + 0x118);
      DAT_5ce2a0e0 = DAT_5ce2a0e0 + 1 + *(int *)((int)this + 0x124);
      param_4[1] = (double)(*(float *)(*(int *)((int)this + 0x11c) + uVar2 * 4) + (float)param_4[1])
      ;
    }
    param_4 = param_4 + uVar3;
  }
LAB_5cdb70df:
  *param_3 = local_34;
  *param_5 = local_38;
  return local_2c;
}


