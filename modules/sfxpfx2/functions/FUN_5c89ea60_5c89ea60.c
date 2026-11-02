/* Module: sfxpfx2.dll
   Function: FUN_5c89ea60
   Address: 5c89ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89ea60(void *this,int param_1,float *param_2,uint *param_3)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  int *local_30;
  double *local_2c;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_14 [4];
  
  local_38 = *param_3;
  uVar11 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  local_24 = 0;
  iVar5 = FUN_5c89c000(this,local_14);
  local_34 = local_38;
  if (((iVar5 == 0) && (*(int *)((int)this + 0x48) != 0)) && (param_1 != 0)) {
LAB_5c89eb87:
    if (uVar11 != 0) {
      local_2c = (double *)((int)this + 0x68);
      piVar10 = (int *)((int)this + 0x128);
      piVar8 = (int *)((int)this + 0x178);
      pfVar7 = param_2;
      local_1c = uVar11;
      do {
        pfVar4 = pfVar7;
        uVar9 = local_38;
        if (param_1 == 2) {
          if (*(uint *)((int)this + 0x168) <= local_38) {
            local_38 = *(uint *)((int)this + 0x168);
          }
          iVar5 = *(int *)((int)this + 0x168) - local_38;
          *(int *)((int)this + 0x168) = iVar5;
          uVar9 = local_38;
          local_34 = local_38;
          if (iVar5 < 1) {
            local_24 = 1;
          }
        }
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          fVar2 = *pfVar4;
          dVar3 = *(double *)(*piVar10 + piVar8[1] * 8);
          pdVar1 = (double *)(*piVar10 + piVar8[1] * 8);
          *pdVar1 = *local_2c * *pdVar1;
          *(double *)(*piVar10 + piVar8[1] * 8) =
               (double)((float10)fVar2 + (float10)*(double *)(*piVar10 + piVar8[1] * 8));
          iVar5 = piVar8[1];
          piVar8[1] = iVar5 + 1;
          if (*piVar8 < iVar5 + 1) {
            piVar8[1] = piVar8[-1];
          }
          *pfVar4 = (float)((float10)fVar2 * (float10)*(double *)((int)this + 0x50) +
                           (float10)dVar3 * (float10)*(double *)((int)this + 0x58));
          if (((uint)*pfVar4 & 0x7f800000) < 0x2f800000) {
            *pfVar4 = 0.0;
          }
          pfVar4 = pfVar4 + uVar11;
        }
        local_2c = local_2c + 1;
        piVar8 = piVar8 + 6;
        pfVar7 = pfVar7 + 1;
        piVar10 = piVar10 + 1;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
    }
  }
  else {
    local_24 = FUN_5c89dab0(this,local_14,param_1);
    if (local_24 < 0) {
      return local_24;
    }
    *(undefined4 *)((int)this + 0x168) = 0;
    if (uVar11 != 0) {
      local_2c = (double *)((int)this + 0x68);
      local_30 = (int *)((int)this + 0xe8);
      piVar10 = (int *)((int)this + 0x180);
      local_20 = uVar11;
      do {
        iVar5 = *local_30;
        *piVar10 = iVar5 * uVar11;
        if ((*(int *)((int)this + 0x60) != 0) && ((float10)*local_2c != (float10)_DAT_5c8dc8e8)) {
          log2((float10)*local_2c);
          iVar6 = ftol();
          *piVar10 = iVar6 * iVar5 * uVar11;
        }
        iVar5 = *(int *)((int)this + 0x168);
        if (*(int *)((int)this + 0x168) <= *piVar10) {
          iVar5 = *piVar10;
        }
        *(int *)((int)this + 0x168) = iVar5;
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
        piVar10 = piVar10 + 6;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
      goto LAB_5c89eb87;
    }
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89edbb;
  uVar11 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  local_1c = local_34;
  if (*(int *)((int)this + 0x304) == 0) {
    iVar5 = *(int *)((int)this + 0x2f0) - local_34;
    *(int *)((int)this + 0x2f0) = iVar5;
    if (iVar5 < 1) {
      uVar9 = rand();
      *(uint *)((int)this + 0x2f0) = (uVar9 & 3) * (uVar11 >> 4) + uVar11 * 3;
      uVar9 = rand();
      *(uint *)((int)this + 0x2fc) = (uVar9 & 0x1f) + 1;
      uVar9 = rand();
      *(uint *)((int)this + 0x300) = (uVar9 & 0x1f) + 1;
      *(uint *)((int)this + 0x304) = uVar11 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89ed19;
    }
    local_1c = 0;
  }
  else {
LAB_5c89ed19:
    uVar11 = *(uint *)((int)this + 0x304);
    if (uVar11 <= local_34) {
      local_1c = uVar11;
    }
    *(uint *)((int)this + 0x304) = uVar11 - local_1c;
  }
  uVar11 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_1c != 0; local_1c = local_1c - 1) {
    uVar9 = DAT_5c8efcb4 % *(uint *)((int)this + 0x2f4);
    DAT_5c8efcb4 = DAT_5c8efcb4 + *(int *)((int)this + 0x2fc);
    *param_2 = *(float *)(*(int *)((int)this + 0x2f8) + uVar9 * 4) + *param_2;
    if (1 < uVar11) {
      uVar9 = DAT_5c8efcb8 % *(uint *)((int)this + 0x2f4);
      DAT_5c8efcb8 = DAT_5c8efcb8 + 1 + *(int *)((int)this + 0x300);
      param_2[1] = *(float *)(*(int *)((int)this + 0x2f8) + uVar9 * 4) + param_2[1];
    }
    param_2 = param_2 + uVar11;
  }
LAB_5c89edbb:
  *param_3 = local_34;
  return local_24;
}


