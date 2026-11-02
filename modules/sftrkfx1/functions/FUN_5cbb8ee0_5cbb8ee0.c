/* Module: sftrkfx1.dll
   Function: FUN_5cbb8ee0
   Address: 5cbb8ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbb8ee0(void *this,int param_1,short *param_2,uint *param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  short *psVar7;
  uint uVar8;
  uint local_3c;
  uint local_34;
  int local_30;
  undefined4 local_24 [3];
  double local_18 [2];
  
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  uVar4 = *param_3;
  iVar2 = FUN_5cbb7bf0(this,local_24);
  if ((param_1 == 0) && (*(int *)((int)this + 0x30) != 0)) {
    iVar2 = FUN_5cbb8690(this);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else if ((iVar2 != 0) || (*(int *)((int)this + 0x48) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar2 = FUN_5cbb83b0(this,local_24,param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  local_30 = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  psVar7 = param_2;
  local_3c = uVar4;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0xdc) <= uVar4) {
      uVar4 = *(uint *)((int)this + 0xdc);
    }
    iVar2 = *(int *)((int)this + 0xdc) - uVar4;
    *(int *)((int)this + 0xdc) = iVar2;
    local_3c = uVar4;
    if (iVar2 == 0) {
      local_30 = 1;
    }
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (uVar5 != 0) {
      psVar3 = psVar7;
      pdVar6 = local_18;
      uVar8 = uVar5;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        uVar8 = uVar8 - 1;
        *pdVar6 = (double)(int)sVar1 * _DAT_5cc04270;
        pdVar6 = pdVar6 + 1;
      } while (uVar8 != 0);
    }
    FUN_5cbb8860(this,(int)local_18,uVar5);
    for (uVar8 = uVar5; uVar8 != 0; uVar8 = uVar8 - 1) {
      iVar2 = ftol();
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      *psVar7 = (short)iVar2;
      psVar7 = psVar7 + 1;
    }
  }
  if (*(int *)((int)this + 0xe8) == 0) goto LAB_5cbb91cb;
  uVar4 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x100) == 0) {
    iVar2 = *(int *)((int)this + 0xec) - local_3c;
    *(int *)((int)this + 0xec) = iVar2;
    if (iVar2 < 1) {
      uVar5 = rand();
      *(uint *)((int)this + 0xec) = (uVar5 & 3) * (uVar4 >> 4) + uVar4 * 4;
      uVar5 = rand();
      *(uint *)((int)this + 0xf8) = (uVar5 & 0x1f) + 1;
      uVar5 = rand();
      *(uint *)((int)this + 0xfc) = (uVar5 & 0x1f) + 1;
      *(uint *)((int)this + 0x100) = uVar4 >> 3;
      _DAT_5cc17dd4 = 0;
      _DAT_5cc17dd8 = 0;
      goto LAB_5cbb90da;
    }
    local_34 = 0;
  }
  else {
LAB_5cbb90da:
    uVar4 = *(uint *)((int)this + 0x100);
    local_34 = local_3c;
    if (uVar4 <= local_3c) {
      local_34 = uVar4;
    }
    *(uint *)((int)this + 0x100) = uVar4 - local_34;
  }
  uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_34 != 0; local_34 = local_34 - 1) {
    DAT_5cc17dcc = DAT_5cc17dcc + *(int *)((int)this + 0xf8);
    iVar2 = ftol();
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar2;
    if (1 < uVar4) {
      DAT_5cc17dd0 = DAT_5cc17dd0 + 1 + *(int *)((int)this + 0xfc);
      iVar2 = ftol();
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar2;
    }
    param_2 = param_2 + uVar4;
  }
LAB_5cbb91cb:
  *param_3 = local_3c;
  return local_30;
}


