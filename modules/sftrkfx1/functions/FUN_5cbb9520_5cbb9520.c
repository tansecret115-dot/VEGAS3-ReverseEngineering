/* Module: sftrkfx1.dll
   Function: FUN_5cbb9520
   Address: 5cbb9520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cbb9520(void *this,int param_1,float *param_2,uint *param_3,int param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24 [3];
  double local_18 [2];
  
  uVar8 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  uVar6 = *param_3;
  iVar3 = FUN_5cbb7bf0(this,local_24);
  if ((param_1 == 0) && (*(int *)((int)this + 0x30) != 0)) {
    iVar3 = FUN_5cbb8690(this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else if ((iVar3 != 0) || (*(int *)((int)this + 0x48) == 0)) {
    if (param_1 == 2) {
      return 1;
    }
    iVar3 = FUN_5cbb83b0(this,local_24,param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  local_28 = 0;
  pfVar9 = param_2;
  if (param_1 == 2) {
    if (*(uint *)((int)this + 0xdc) <= uVar6) {
      uVar6 = *(uint *)((int)this + 0xdc);
    }
    iVar3 = *(int *)((int)this + 0xdc) - uVar6;
    *(int *)((int)this + 0xdc) = iVar3;
    local_30 = uVar6;
    if (iVar3 == 0) {
      local_28 = 1;
    }
  }
  else {
    local_30 = uVar6;
    if (param_4 != 0) {
      return 1;
    }
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (uVar8 != 0) {
      pdVar5 = local_18;
      pfVar4 = pfVar9;
      uVar7 = uVar8;
      do {
        fVar1 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *pdVar5 = (double)fVar1;
        pdVar5 = pdVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_5cbb8860(this,(int)local_18,uVar8);
    if (uVar8 != 0) {
      pdVar5 = local_18;
      uVar7 = uVar8;
      do {
        dVar2 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        *pfVar9 = (float)dVar2;
        pfVar9 = pfVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if (*(int *)((int)this + 0xe8) == 0) goto LAB_5cbb9788;
  uVar6 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x100) == 0) {
    iVar3 = *(int *)((int)this + 0xec) - local_30;
    *(int *)((int)this + 0xec) = iVar3;
    if (iVar3 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0xec) = (uVar8 & 3) * (uVar6 >> 4) + uVar6 * 4;
      uVar8 = rand();
      *(uint *)((int)this + 0xf8) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0xfc) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x100) = uVar6 >> 3;
      _DAT_5cc17dd4 = 0;
      _DAT_5cc17dd8 = 0;
      goto LAB_5cbb96e2;
    }
    local_2c = 0;
  }
  else {
LAB_5cbb96e2:
    uVar6 = *(uint *)((int)this + 0x100);
    local_2c = local_30;
    if (uVar6 <= local_30) {
      local_2c = uVar6;
    }
    *(uint *)((int)this + 0x100) = uVar6 - local_2c;
  }
  uVar6 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_2c != 0; local_2c = local_2c - 1) {
    uVar8 = DAT_5cc17dbc % *(uint *)((int)this + 0xf0);
    DAT_5cc17dbc = DAT_5cc17dbc + *(int *)((int)this + 0xf8);
    *param_2 = *(float *)(*(int *)((int)this + 0xf4) + uVar8 * 4) + *param_2;
    if (1 < uVar6) {
      uVar8 = DAT_5cc17dc0 % *(uint *)((int)this + 0xf0);
      DAT_5cc17dc0 = DAT_5cc17dc0 + 1 + *(int *)((int)this + 0xfc);
      param_2[1] = *(float *)(*(int *)((int)this + 0xf4) + uVar8 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar6;
  }
LAB_5cbb9788:
  *param_3 = local_30;
  return local_28;
}


