/* Module: sfppack2.dll
   Function: FUN_5ccd6210
   Address: 5ccd6210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall
FUN_5ccd6210(void *this,uint param_1,float *param_2,uint *param_3,float *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint local_4;
  
  puVar6 = param_5;
  puVar5 = param_3;
  bVar7 = param_1 == 0;
  *(uint *)((int)this + 0x2c8) = (uint)(param_1 == 2);
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x2b8) + 2);
  if (param_3 == (uint *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_5;
  }
  if (bVar7 != 0) {
    *(undefined4 *)((int)this + 0x2f8) = 0;
    *(undefined4 *)((int)this + 0x2f4) = 0;
  }
  iVar1 = FUN_5ccd5830(this,*(int *)((int)this + 0x300),local_4,(uint)bVar7);
  if (*(int *)(iVar1 * 0x280 + 0x328 + (int)this) != 0) {
    if (*(int *)((int)this + 0x2c8) != 0) {
      *puVar6 = 0;
      return (float *)1;
    }
    if (param_1 <= local_4) {
      local_4 = param_1;
    }
    *puVar5 = local_4;
    *puVar6 = local_4;
    for (; local_4 != 0; local_4 = local_4 - 1) {
      *param_4 = *param_2;
      if (uVar2 == 2) {
        param_4[1] = param_2[1];
      }
      param_4 = param_4 + uVar2;
      param_2 = param_2 + uVar2;
    }
    return (float *)0;
  }
  param_2 = (float *)FUN_5ccdbb00(this,param_2,(int *)&local_4,param_4,&param_1,
                                  (undefined4 *)((int)this + iVar1 * 0x280 + 0x318));
  uVar2 = param_1;
  if (DAT_5cd679f8 != 0) goto LAB_5ccd63e9;
  uVar4 = *(uint *)(*(int *)((int)this + 0x2b8) + 4);
  if (*(int *)((int)this + 0xab0) == 0) {
    iVar1 = *(int *)((int)this + 0xa9c) - param_1;
    *(int *)((int)this + 0xa9c) = iVar1;
    if (iVar1 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0xa9c) = (uVar3 & 3) * (uVar4 >> 4) + uVar4 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0xaa8) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0xaac) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0xab0) = uVar4 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5ccd634b;
    }
    uVar2 = 0;
  }
  else {
LAB_5ccd634b:
    uVar4 = *(uint *)((int)this + 0xab0);
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    *(uint *)((int)this + 0xab0) = uVar4 - uVar2;
  }
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x2b8) + 2);
  for (; puVar5 = param_3, puVar6 = param_5, uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar3 = DAT_5cd764fc % *(uint *)((int)this + 0xaa0);
    DAT_5cd764fc = DAT_5cd764fc + *(int *)((int)this + 0xaa8);
    *param_4 = *(float *)(*(int *)((int)this + 0xaa4) + uVar3 * 4) + *param_4;
    if (1 < uVar4) {
      uVar3 = DAT_5cd76500 % *(uint *)((int)this + 0xaa0);
      DAT_5cd76500 = DAT_5cd76500 + 1 + *(int *)((int)this + 0xaac);
      param_4[1] = *(float *)(*(int *)((int)this + 0xaa4) + uVar3 * 4) + param_4[1];
    }
    param_4 = param_4 + uVar4;
  }
LAB_5ccd63e9:
  if (puVar5 != (uint *)0x0) {
    *puVar5 = local_4;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_1;
  }
  return param_2;
}


