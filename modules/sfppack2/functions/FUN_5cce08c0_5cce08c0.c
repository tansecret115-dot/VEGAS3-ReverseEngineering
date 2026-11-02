/* Module: sfppack2.dll
   Function: FUN_5cce08c0
   Address: 5cce08c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_5cce08c0(void *this,uint param_1,int *param_2,uint *param_3,int *param_4,uint *param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  bool bVar9;
  uint local_4;
  
  puVar7 = param_5;
  puVar5 = param_3;
  bVar9 = param_1 == 0;
  *(uint *)((int)this + 100) = (uint)(param_1 == 2);
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
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
  iVar2 = FUN_5cce0220(this,*(int *)((int)this + 0x90),local_4,(uint)bVar9);
  if (*(int *)((int)this + iVar2 * 0x2c + 0xbc) != 0) {
    if (*(int *)((int)this + 100) != 0) {
      *puVar7 = 0;
      return (int *)1;
    }
    if (param_1 <= local_4) {
      local_4 = param_1;
    }
    *puVar5 = local_4;
    *puVar7 = local_4;
    for (; local_4 != 0; local_4 = local_4 - 1) {
      *param_4 = *param_2;
      if (uVar3 == 2) {
        param_4[1] = param_2[1];
      }
      param_4 = param_4 + uVar3;
      param_2 = param_2 + uVar3;
    }
    return (int *)0;
  }
  param_2 = (int *)FUN_5cce1e40(this,param_2,(int *)&local_4,param_4,&param_1,
                                (undefined4 *)((int)this + iVar2 * 0x2c + 0xac));
  uVar3 = param_1;
  if (DAT_5cd679f8 != 0) goto LAB_5cce0af6;
  uVar6 = *(uint *)(*(int *)((int)this + 0x54) + 4);
  if (*(int *)((int)this + 0x154) == 0) {
    iVar2 = *(int *)((int)this + 0x140) - param_1;
    *(int *)((int)this + 0x140) = iVar2;
    if (iVar2 < 1) {
      uVar4 = rand();
      *(uint *)((int)this + 0x140) = (uVar4 & 3) * (uVar6 >> 4) + uVar6 * 3;
      uVar4 = rand();
      *(uint *)((int)this + 0x14c) = (uVar4 & 0x1f) + 1;
      uVar4 = rand();
      *(uint *)((int)this + 0x150) = (uVar4 & 0x1f) + 1;
      *(uint *)((int)this + 0x154) = uVar6 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      puVar5 = param_3;
      goto LAB_5cce09e6;
    }
    uVar3 = 0;
  }
  else {
LAB_5cce09e6:
    uVar6 = *(uint *)((int)this + 0x154);
    if (uVar6 <= uVar3) {
      uVar3 = uVar6;
    }
    *(uint *)((int)this + 0x154) = uVar6 - uVar3;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  piVar8 = param_4;
  puVar7 = param_5;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    fVar1 = *(float *)(*(int *)((int)this + 0x148) +
                      (DAT_5cd76504 % *(uint *)((int)this + 0x144)) * 4) * (float)_DAT_5cd51758;
    DAT_5cd76504 = DAT_5cd76504 + *(int *)((int)this + 0x14c);
    param_5 = puVar7;
    if ((float)_DAT_5cd51750 <= fVar1) {
      if (fVar1 <= (float)_DAT_5cd51748) {
        iVar2 = ftol();
      }
      else {
        iVar2 = 0x7fffffff;
      }
    }
    else {
      iVar2 = -0x80000000;
    }
    *piVar8 = *piVar8 + iVar2;
    if (1 < uVar6) {
      fVar1 = *(float *)(*(int *)((int)this + 0x148) +
                        (DAT_5cd76508 % *(uint *)((int)this + 0x144)) * 4) * (float)_DAT_5cd51758;
      DAT_5cd76508 = DAT_5cd76508 + 1 + *(int *)((int)this + 0x150);
      if ((float)_DAT_5cd51750 <= fVar1) {
        if (fVar1 <= (float)_DAT_5cd51748) {
          iVar2 = ftol();
        }
        else {
          iVar2 = 0x7fffffff;
        }
      }
      else {
        iVar2 = -0x80000000;
      }
      piVar8[1] = piVar8[1] + iVar2;
    }
    piVar8 = piVar8 + uVar6;
    puVar5 = param_3;
    puVar7 = param_5;
  }
LAB_5cce0af6:
  if (puVar5 != (uint *)0x0) {
    *puVar5 = local_4;
  }
  if (puVar7 != (uint *)0x0) {
    *puVar7 = param_1;
  }
  return param_2;
}


