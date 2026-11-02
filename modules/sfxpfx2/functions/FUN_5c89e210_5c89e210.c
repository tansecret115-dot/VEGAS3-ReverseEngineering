/* Module: sfxpfx2.dll
   Function: FUN_5c89e210
   Address: 5c89e210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89e210(void *this,int param_1,short *param_2,uint *param_3)

{
  double *pdVar1;
  double dVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint local_40;
  uint local_38;
  double *local_34;
  double *local_30;
  short *local_2c;
  int local_28;
  uint local_20;
  int local_14 [4];
  
  local_40 = *param_3;
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  local_28 = 0;
  iVar4 = FUN_5c89c000(this,local_14);
  local_38 = local_40;
  if (((iVar4 == 0) && (*(int *)((int)this + 0x48) != 0)) && (param_1 != 0)) {
LAB_5c89e337:
    if (uVar9 != 0) {
      local_34 = (double *)((int)this + 0x68);
      local_2c = param_2;
      piVar7 = (int *)((int)this + 0x128);
      piVar8 = (int *)((int)this + 0x178);
      local_20 = uVar9;
      do {
        psVar3 = local_2c;
        uVar6 = local_40;
        if (param_1 == 2) {
          if (*(uint *)((int)this + 0x168) <= local_40) {
            local_40 = *(uint *)((int)this + 0x168);
          }
          iVar4 = *(int *)((int)this + 0x168) - local_40;
          *(int *)((int)this + 0x168) = iVar4;
          uVar6 = local_40;
          local_38 = local_40;
          if (iVar4 < 1) {
            local_28 = 1;
          }
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          pdVar1 = (double *)(*piVar7 + piVar8[1] * 8);
          dVar2 = (double)(int)*psVar3 * _DAT_5c8dc960;
          *pdVar1 = *local_34 * *pdVar1;
          *(double *)(*piVar7 + piVar8[1] * 8) = dVar2 + *(double *)(*piVar7 + piVar8[1] * 8);
          iVar4 = piVar8[1];
          piVar8[1] = iVar4 + 1;
          if (*piVar8 < iVar4 + 1) {
            piVar8[1] = piVar8[-1];
          }
          iVar4 = ftol();
          if (iVar4 < -0x8000) {
            iVar4 = -0x8000;
          }
          else if (0x7fff < iVar4) {
            iVar4 = 0x7fff;
          }
          *psVar3 = (short)iVar4;
          psVar3 = psVar3 + uVar9;
        }
        local_34 = local_34 + 1;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 6;
        local_2c = local_2c + 1;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
    }
  }
  else {
    local_28 = FUN_5c89dab0(this,local_14,param_1);
    if (local_28 < 0) {
      return local_28;
    }
    *(undefined4 *)((int)this + 0x168) = 0;
    if (uVar9 != 0) {
      local_30 = (double *)((int)this + 0x68);
      local_34 = (double *)((int)this + 0xe8);
      piVar7 = (int *)((int)this + 0x180);
      local_2c = (short *)uVar9;
      do {
        iVar4 = *(int *)local_34;
        *piVar7 = iVar4 * uVar9;
        if ((*(int *)((int)this + 0x60) != 0) && ((float10)*local_30 != (float10)_DAT_5c8dc8e8)) {
          log2((float10)*local_30);
          iVar5 = ftol();
          *piVar7 = iVar5 * iVar4 * uVar9;
        }
        iVar4 = *(int *)((int)this + 0x168);
        if (*(int *)((int)this + 0x168) <= *piVar7) {
          iVar4 = *piVar7;
        }
        *(int *)((int)this + 0x168) = iVar4;
        local_34 = (double *)((int)local_34 + 4);
        local_30 = local_30 + 1;
        piVar7 = piVar7 + 6;
        local_2c = (short *)((int)local_2c - 1);
      } while (local_2c != (short *)0x0);
      goto LAB_5c89e337;
    }
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89e5fb;
  uVar9 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  local_20 = local_38;
  if (*(int *)((int)this + 0x304) == 0) {
    iVar4 = *(int *)((int)this + 0x2f0) - local_38;
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
      goto LAB_5c89e50e;
    }
    local_20 = 0;
  }
  else {
LAB_5c89e50e:
    uVar9 = *(uint *)((int)this + 0x304);
    if (uVar9 <= local_38) {
      local_20 = uVar9;
    }
    *(uint *)((int)this + 0x304) = uVar9 - local_20;
  }
  uVar9 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_20 != 0; local_20 = local_20 - 1) {
    DAT_5c8efcc4 = DAT_5c8efcc4 + *(int *)((int)this + 0x2fc);
    iVar4 = ftol();
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    *param_2 = *param_2 + (short)iVar4;
    if (1 < uVar9) {
      DAT_5c8efcc8 = DAT_5c8efcc8 + 1 + *(int *)((int)this + 0x300);
      iVar4 = ftol();
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      param_2[1] = param_2[1] + (short)iVar4;
    }
    param_2 = param_2 + uVar9;
  }
LAB_5c89e5fb:
  *param_3 = local_38;
  return local_28;
}


