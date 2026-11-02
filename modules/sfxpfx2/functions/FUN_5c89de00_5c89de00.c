/* Module: sfxpfx2.dll
   Function: FUN_5c89de00
   Address: 5c89de00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89de00(void *this,int param_1,byte *param_2,uint *param_3)

{
  double *pdVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  uint local_3c;
  uint local_34;
  int *local_30;
  double *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_14 [4];
  
  local_3c = *param_3;
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  local_28 = 0;
  iVar4 = FUN_5c89c000(this,local_14);
  if (((iVar4 != 0) || (*(int *)((int)this + 0x48) == 0)) || (param_1 == 0)) {
    local_28 = FUN_5c89dab0(this,local_14,param_1);
    if (local_28 < 0) {
      return local_28;
    }
    *(undefined4 *)((int)this + 0x168) = 0;
    if (uVar9 != 0) {
      local_2c = (double *)((int)this + 0x68);
      local_30 = (int *)((int)this + 0xe8);
      piVar8 = (int *)((int)this + 0x180);
      local_24 = uVar9;
      do {
        iVar4 = *local_30;
        *piVar8 = uVar9 * iVar4;
        if ((*(int *)((int)this + 0x60) != 0) && ((float10)*local_2c != (float10)_DAT_5c8dc8e8)) {
          log2((float10)*local_2c);
          iVar5 = ftol();
          *piVar8 = iVar5 * uVar9 * iVar4;
        }
        iVar4 = *(int *)((int)this + 0x168);
        if (*(int *)((int)this + 0x168) <= *piVar8) {
          iVar4 = *piVar8;
        }
        *(int *)((int)this + 0x168) = iVar4;
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
        piVar8 = piVar8 + 6;
        local_24 = local_24 - 1;
      } while (local_24 != 0);
    }
  }
  local_20 = 0;
  local_34 = local_3c;
  if (uVar9 != 0) {
    local_2c = (double *)((int)this + 0x68);
    piVar8 = (int *)((int)this + 0x128);
    piVar7 = (int *)((int)this + 0x178);
    do {
      pbVar10 = param_2 + local_20;
      uVar6 = local_3c;
      if (param_1 == 2) {
        if (*(uint *)((int)this + 0x168) <= local_3c) {
          local_3c = *(uint *)((int)this + 0x168);
        }
        iVar4 = *(int *)((int)this + 0x168) - local_3c;
        *(int *)((int)this + 0x168) = iVar4;
        uVar6 = local_3c;
        local_34 = local_3c;
        if (iVar4 < 1) {
          local_28 = 1;
        }
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        pdVar1 = (double *)(*piVar8 + piVar7[1] * 8);
        dVar2 = (double)(int)(char)(*pbVar10 ^ 0x80) * _DAT_5c8dc950;
        *pdVar1 = *pdVar1 * *local_2c;
        *(double *)(*piVar8 + piVar7[1] * 8) = dVar2 + *(double *)(*piVar8 + piVar7[1] * 8);
        iVar4 = piVar7[1];
        piVar7[1] = iVar4 + 1;
        if (*piVar7 < iVar4 + 1) {
          piVar7[1] = piVar7[-1];
        }
        iVar4 = ftol();
        if (iVar4 < -0x80) {
          bVar3 = 0;
        }
        else if (iVar4 < 0x80) {
          bVar3 = (byte)iVar4 ^ 0x80;
        }
        else {
          bVar3 = 0xff;
        }
        *pbVar10 = bVar3;
        pbVar10 = pbVar10 + uVar9;
      }
      local_20 = local_20 + 1;
      local_2c = local_2c + 1;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 6;
    } while (local_20 < uVar9);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89e1f0;
  uVar9 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  local_20 = local_34;
  if (*(int *)((int)this + 0x304) == 0) {
    iVar4 = *(int *)((int)this + 0x2f0) - local_34;
    *(int *)((int)this + 0x2f0) = iVar4;
    if (iVar4 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0x2f0) = (uVar6 & 3) * (uVar9 >> 4) + uVar9 * 3;
      uVar6 = rand();
      *(uint *)((int)this + 0x2fc) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0x300) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0x304) = uVar9 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89e0e1;
    }
    local_20 = 0;
  }
  else {
LAB_5c89e0e1:
    uVar9 = *(uint *)((int)this + 0x304);
    if (uVar9 <= local_34) {
      local_20 = uVar9;
    }
    *(uint *)((int)this + 0x304) = uVar9 - local_20;
  }
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_20 != 0; local_20 = local_20 - 1) {
    DAT_5c8efcd4 = DAT_5c8efcd4 + *(int *)((int)this + 0x2fc);
    iVar4 = ftol();
    if (iVar4 < -0x80) {
      bVar3 = 0;
    }
    else if (iVar4 < 0x80) {
      bVar3 = (byte)iVar4 ^ 0x80;
    }
    else {
      bVar3 = 0xff;
    }
    *param_2 = bVar3;
    if (1 < uVar9) {
      DAT_5c8efcd8 = DAT_5c8efcd8 + 1 + *(int *)((int)this + 0x300);
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      param_2[1] = bVar3;
    }
    param_2 = param_2 + uVar9;
  }
LAB_5c89e1f0:
  *param_3 = local_34;
  return local_28;
}


