/* Module: sfppack1.dll
   Function: FUN_5cdb67f0
   Address: 5cdb67f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cdb67f0(void *this,uint param_1,int param_2,int *param_3,short *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  bool bVar6;
  bool bVar7;
  int local_24;
  double local_20 [4];
  
  bVar6 = param_1 == 0;
  local_24 = 0;
  bVar7 = param_1 == 2;
  param_1 = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_24;
  }
  else {
    local_24 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_5 = &param_1;
  }
  else {
    param_1 = *param_5;
  }
  *(uint *)((int)this + 0x70) = (uint)bVar7;
  iVar1 = FUN_5cdb3080(this,(undefined4 *)local_20);
  if ((bVar6) && (*(int *)((int)this + 0x4c) != 0)) {
    iVar1 = FUN_5cdb6230(this);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else if (((iVar1 != 0) || (*(int *)((int)this + 0x68) == 0)) &&
          ((bVar7 == 0 && (iVar1 = FUN_5cdb5bb0(this,local_20), iVar1 < 0)))) {
    return iVar1;
  }
  *(undefined4 *)((int)this + 0x4c) = 1;
  param_2 = FUN_5cdb7b40(this,param_2,&local_24,param_4,&param_1);
  uVar2 = param_1;
  if (DAT_5ce237e8 != 0) goto LAB_5cdb6a22;
  uVar4 = *(uint *)(*(int *)((int)this + 0x60) + 4);
  if (*(int *)((int)this + 0x128) == 0) {
    iVar1 = *(int *)((int)this + 0x114) - param_1;
    *(int *)((int)this + 0x114) = iVar1;
    if (iVar1 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x114) = (uVar3 & 3) * (uVar4 >> 4) + uVar4 * 4;
      uVar3 = rand();
      *(uint *)((int)this + 0x120) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x124) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x128) = uVar4 >> 3;
      _DAT_5ce2a0fc = 0;
      _DAT_5ce2a100 = 0;
      goto LAB_5cdb6944;
    }
    uVar2 = 0;
  }
  else {
LAB_5cdb6944:
    uVar4 = *(uint *)((int)this + 0x128);
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    *(uint *)((int)this + 0x128) = uVar4 - uVar2;
  }
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x60) + 2);
  psVar5 = param_4;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    DAT_5ce2a0f4 = DAT_5ce2a0f4 + *(int *)((int)this + 0x120);
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *psVar5 = *psVar5 + (short)iVar1;
    if (1 < uVar4) {
      DAT_5ce2a0f8 = DAT_5ce2a0f8 + 1 + *(int *)((int)this + 0x124);
      iVar1 = ftol();
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      else if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      psVar5[1] = psVar5[1] + (short)iVar1;
    }
    psVar5 = psVar5 + uVar4;
  }
LAB_5cdb6a22:
  *param_3 = local_24;
  *param_5 = param_1;
  return param_2;
}


