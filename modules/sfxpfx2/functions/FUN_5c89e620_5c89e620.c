/* Module: sfxpfx2.dll
   Function: FUN_5c89e620
   Address: 5c89e620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89e620(void *this,int param_1,int *param_2,uint *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint local_48;
  uint local_40;
  int *local_3c;
  double *local_38;
  int local_34;
  uint local_30;
  uint local_28;
  int local_14 [4];
  
  local_48 = *param_3;
  uVar11 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  local_34 = 0;
  iVar6 = FUN_5c89c000(this,local_14);
  local_40 = local_48;
  if (((iVar6 == 0) && (*(int *)((int)this + 0x48) != 0)) && (param_1 != 0)) {
LAB_5c89e743:
    if (uVar11 != 0) {
      local_38 = (double *)((int)this + 0x68);
      piVar10 = (int *)((int)this + 0x128);
      piVar12 = (int *)((int)this + 0x178);
      piVar9 = param_2;
      local_28 = uVar11;
      do {
        piVar5 = piVar9;
        uVar8 = local_48;
        if (param_1 == 2) {
          if (*(uint *)((int)this + 0x168) <= local_48) {
            local_48 = *(uint *)((int)this + 0x168);
          }
          iVar6 = *(int *)((int)this + 0x168) - local_48;
          *(int *)((int)this + 0x168) = iVar6;
          uVar8 = local_48;
          local_40 = local_48;
          if (iVar6 < 1) {
            local_34 = 1;
          }
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          pdVar1 = (double *)(*piVar10 + piVar12[1] * 8);
          dVar3 = (double)*piVar5 * _DAT_5c8dc980;
          dVar2 = *pdVar1;
          *pdVar1 = *pdVar1 * *local_38;
          *(double *)(*piVar10 + piVar12[1] * 8) = dVar3 + *(double *)(*piVar10 + piVar12[1] * 8);
          iVar6 = piVar12[1];
          piVar12[1] = iVar6 + 1;
          if (*piVar12 < iVar6 + 1) {
            piVar12[1] = piVar12[-1];
          }
          dVar2 = (dVar2 * *(double *)((int)this + 0x58) + dVar3 * *(double *)((int)this + 0x50)) *
                  _DAT_5c8dc978;
          if (_DAT_5c8dc970 <= dVar2) {
            if (dVar2 <= _DAT_5c8dc968) {
              iVar6 = ftol();
            }
            else {
              iVar6 = 0x7fffffff;
            }
          }
          else {
            iVar6 = -0x80000000;
          }
          *piVar5 = iVar6;
          piVar5 = piVar5 + uVar11;
        }
        local_38 = local_38 + 1;
        piVar12 = piVar12 + 6;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
  }
  else {
    local_34 = FUN_5c89dab0(this,local_14,param_1);
    if (local_34 < 0) {
      return local_34;
    }
    *(undefined4 *)((int)this + 0x168) = 0;
    if (uVar11 != 0) {
      local_38 = (double *)((int)this + 0x68);
      local_3c = (int *)((int)this + 0xe8);
      piVar10 = (int *)((int)this + 0x180);
      local_30 = uVar11;
      do {
        iVar6 = *local_3c;
        *piVar10 = uVar11 * iVar6;
        if ((*(int *)((int)this + 0x60) != 0) && ((float10)*local_38 != (float10)_DAT_5c8dc8e8)) {
          log2((float10)*local_38);
          iVar7 = ftol();
          *piVar10 = iVar7 * uVar11 * iVar6;
        }
        iVar6 = *(int *)((int)this + 0x168);
        if (*(int *)((int)this + 0x168) <= *piVar10) {
          iVar6 = *piVar10;
        }
        *(int *)((int)this + 0x168) = iVar6;
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
        piVar10 = piVar10 + 6;
        local_30 = local_30 - 1;
      } while (local_30 != 0);
      goto LAB_5c89e743;
    }
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c89ea48;
  uVar11 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  local_28 = local_40;
  if (*(int *)((int)this + 0x304) == 0) {
    iVar6 = *(int *)((int)this + 0x2f0) - local_40;
    *(int *)((int)this + 0x2f0) = iVar6;
    if (iVar6 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x2f0) = (uVar8 & 3) * (uVar11 >> 4) + uVar11 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x2fc) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x300) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x304) = uVar11 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c89e91f;
    }
    local_28 = 0;
  }
  else {
LAB_5c89e91f:
    uVar11 = *(uint *)((int)this + 0x304);
    if (uVar11 <= local_40) {
      local_28 = uVar11;
    }
    *(uint *)((int)this + 0x304) = uVar11 - local_28;
  }
  uVar11 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  for (; local_28 != 0; local_28 = local_28 - 1) {
    fVar4 = *(float *)(*(int *)((int)this + 0x2f8) +
                      (DAT_5c8efcbc % *(uint *)((int)this + 0x2f4)) * 4) * (float)_DAT_5c8dc978;
    DAT_5c8efcbc = DAT_5c8efcbc + *(int *)((int)this + 0x2fc);
    if ((float)_DAT_5c8dc970 <= fVar4) {
      if ((double)fVar4 <= _DAT_5c8dc968) {
        iVar6 = ftol();
      }
      else {
        iVar6 = 0x7fffffff;
      }
    }
    else {
      iVar6 = -0x80000000;
    }
    *param_2 = *param_2 + iVar6;
    if (1 < uVar11) {
      fVar4 = *(float *)(*(int *)((int)this + 0x2f8) +
                        (DAT_5c8efcc0 % *(uint *)((int)this + 0x2f4)) * 4) * (float)_DAT_5c8dc978;
      DAT_5c8efcc0 = DAT_5c8efcc0 + 1 + *(int *)((int)this + 0x300);
      if ((float)_DAT_5c8dc970 <= fVar4) {
        if ((double)fVar4 <= _DAT_5c8dc968) {
          iVar6 = ftol();
        }
        else {
          iVar6 = 0x7fffffff;
        }
      }
      else {
        iVar6 = -0x80000000;
      }
      param_2[1] = param_2[1] + iVar6;
    }
    param_2 = param_2 + uVar11;
  }
LAB_5c89ea48:
  *param_3 = local_40;
  return local_34;
}


