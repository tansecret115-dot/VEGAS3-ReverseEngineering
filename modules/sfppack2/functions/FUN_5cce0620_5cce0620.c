/* Module: sfppack2.dll
   Function: FUN_5cce0620
   Address: 5cce0620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __thiscall
FUN_5cce0620(void *this,uint param_1,short *param_2,uint *param_3,short *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  short *psVar7;
  bool bVar8;
  uint local_4;
  
  puVar6 = param_5;
  puVar4 = param_3;
  bVar8 = param_1 == 0;
  *(uint *)((int)this + 100) = (uint)(param_1 == 2);
  uVar2 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
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
  iVar1 = FUN_5cce0220(this,*(int *)((int)this + 0x90),local_4,(uint)bVar8);
  if (*(int *)((int)this + iVar1 * 0x2c + 0xbc) != 0) {
    if (*(int *)((int)this + 100) != 0) {
      *puVar6 = 0;
      return (short *)1;
    }
    if (param_1 <= local_4) {
      local_4 = param_1;
    }
    *puVar4 = local_4;
    *puVar6 = local_4;
    for (; local_4 != 0; local_4 = local_4 - 1) {
      *param_4 = *param_2;
      if (uVar2 == 2) {
        param_4[1] = param_2[1];
      }
      param_4 = param_4 + uVar2;
      param_2 = param_2 + uVar2;
    }
    return (short *)0;
  }
  param_2 = (short *)FUN_5cce1700(this,param_2,(int *)&local_4,param_4,&param_1,
                                  (undefined4 *)((int)this + iVar1 * 0x2c + 0xac));
  uVar2 = param_1;
  if (DAT_5cd679f8 != 0) goto LAB_5cce082d;
  uVar5 = *(uint *)(*(int *)((int)this + 0x54) + 4);
  if (*(int *)((int)this + 0x154) == 0) {
    iVar1 = *(int *)((int)this + 0x140) - param_1;
    *(int *)((int)this + 0x140) = iVar1;
    if (iVar1 < 1) {
      uVar3 = rand();
      *(uint *)((int)this + 0x140) = (uVar3 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar3 = rand();
      *(uint *)((int)this + 0x14c) = (uVar3 & 0x1f) + 1;
      uVar3 = rand();
      *(uint *)((int)this + 0x150) = (uVar3 & 0x1f) + 1;
      *(uint *)((int)this + 0x154) = uVar5 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      puVar4 = param_3;
      goto LAB_5cce0746;
    }
    uVar2 = 0;
  }
  else {
LAB_5cce0746:
    uVar5 = *(uint *)((int)this + 0x154);
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    *(uint *)((int)this + 0x154) = uVar5 - uVar2;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x54) + 2);
  psVar7 = param_4;
  puVar6 = param_5;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    DAT_5cd7650c = DAT_5cd7650c + *(int *)((int)this + 0x14c);
    param_5 = puVar6;
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *psVar7 = *psVar7 + (short)iVar1;
    if (1 < uVar5) {
      DAT_5cd76510 = DAT_5cd76510 + 1 + *(int *)((int)this + 0x150);
      iVar1 = ftol();
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      else if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      psVar7[1] = psVar7[1] + (short)iVar1;
    }
    psVar7 = psVar7 + uVar5;
    puVar4 = param_3;
    puVar6 = param_5;
  }
LAB_5cce082d:
  if (puVar4 != (uint *)0x0) {
    *puVar4 = local_4;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_1;
  }
  return param_2;
}


