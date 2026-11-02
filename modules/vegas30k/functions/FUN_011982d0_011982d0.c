/* Module: vegas30k.dll
   Function: FUN_011982d0
   Address: 011982d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_011982d0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5)

{
  float *pfVar1;
  uint *puVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  double *pdVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_40;
  double *local_3c;
  float *local_38;
  uint local_34;
  uint local_28;
  float local_20;
  uint local_1c [6];
  
  uVar7 = 0;
  local_34 = 0x80004001;
  pfVar9 = param_4;
  if (*(short *)(param_1 + 0x4fa) != 0) {
    do {
      *pfVar9 = 0.0;
      uVar7 = uVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (uVar7 < *(ushort *)(param_1 + 0x4fa));
  }
  if (*(int *)(param_1 + 0x480) == 0) {
    return 1;
  }
  uVar15 = ftol();
  iVar11 = (int)((ulonglong)uVar15 >> 0x20);
  uVar7 = (uint)uVar15;
  local_38 = (float *)(uint)*(ushort *)(param_1 + 0x4fa);
  if (local_38 != (float *)0x0) {
    pfVar12 = &local_20;
    pfVar9 = (float *)(param_1 + 0x464);
    do {
      *pfVar12 = 0.0;
      pfVar12[1] = 0.0;
      pfVar12[2] = 0.0;
      if (*(int *)(param_1 + 0x40) == 0) {
        if ((*(int *)(param_1 + 0x47c) == 0) || (iVar8 = *(int *)(param_1 + 0x458), iVar8 == 0))
        goto LAB_011983d8;
        if ((iVar11 <= *(int *)(iVar8 + 0x24)) &&
           ((iVar11 < *(int *)(iVar8 + 0x24) || (uVar7 < *(uint *)(iVar8 + 0x20)))))
        goto LAB_011983d8;
      }
      else {
        if ((*(int *)(param_1 + 0x47c) != 0) && (iVar8 = *(int *)(param_1 + 0x458), iVar8 != 0)) {
          if ((iVar11 < *(int *)(iVar8 + 0x24)) ||
             ((iVar11 <= *(int *)(iVar8 + 0x24) && (uVar7 <= *(uint *)(iVar8 + 0x20)))))
          goto LAB_011983f0;
        }
LAB_011983d8:
        *pfVar12 = *pfVar9;
        pfVar12[1] = pfVar9[1];
        pfVar12[2] = pfVar9[2];
      }
LAB_011983f0:
      pfVar9 = pfVar9 + 3;
      pfVar12 = pfVar12 + 3;
      local_38 = (float *)((int)local_38 - 1);
    } while (local_38 != (float *)0x0);
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x458) + 0x24);
  if ((iVar11 <= iVar8) &&
     (((iVar11 < iVar8 || (uVar7 <= *(uint *)(*(int *)(param_1 + 0x458) + 0x20))) &&
      (*(int *)(param_1 + 0x49c) != 0)))) {
    iVar8 = *(int *)(param_1 + 0x47c);
    while ((iVar8 != 0 && (*(int *)(*(int *)(param_1 + 0x458) + 0x28) == 0))) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x458) + 0x30);
      *(int *)(param_1 + 0x458) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x454);
      }
      iVar8 = *(int *)(param_1 + 0x47c) + -1;
      *(int *)(param_1 + 0x47c) = iVar8;
    }
    *(int *)(param_1 + 0x49c) = *(int *)(param_1 + 0x49c) + -1;
  }
  iVar8 = *(int *)(param_1 + 0x47c);
  if (*(int *)(param_1 + 0x40) == 0) {
    while ((iVar8 != 0 && (*(int *)(*(int *)(param_1 + 0x458) + 0x2c) != 0))) {
      iVar8 = *(int *)(param_1 + 0x47c) + -1;
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x30);
      *(int *)(param_1 + 0x47c) = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x47c);
    while ((((iVar8 != 0 && (iVar8 = *(int *)(param_1 + 0x458), iVar8 != 0)) &&
            (*(int *)(iVar8 + 0x2c) == 0)) &&
           ((*(int *)(iVar8 + 0x24) <= iVar11 &&
            ((*(int *)(iVar8 + 0x24) < iVar11 || (*(uint *)(iVar8 + 0x20) <= uVar7))))))) {
      uVar13 = 0;
      if (*(short *)(param_1 + 0x4fa) != 0) {
        iVar14 = 0;
        do {
          iVar8 = _isnan((double)*(float *)(iVar14 + 4 + iVar8));
          if (iVar8 == 0) {
            if (*(float *)(iVar14 + 4 + *(int *)(param_1 + 0x458)) <=
                *(float *)((int)&local_20 + iVar14)) {
              uVar3 = *(undefined4 *)((int)&local_20 + iVar14);
            }
            else {
              uVar3 = *(undefined4 *)(iVar14 + 4 + *(int *)(param_1 + 0x458));
            }
            *(undefined4 *)((int)&local_20 + iVar14) = uVar3;
          }
          else {
            _fpreset();
          }
          iVar8 = *(int *)(param_1 + 0x458);
          puVar2 = (uint *)((int)local_1c + iVar14 + 4U);
          *(undefined4 *)((int)local_1c + iVar14) = *(undefined4 *)(iVar14 + 8 + iVar8);
          *puVar2 = *puVar2 | *(uint *)((int)puVar2 + iVar8 + (0xc - (int)(local_1c + 1)));
          uVar13 = uVar13 + 1;
          iVar14 = iVar14 + 0xc;
        } while (uVar13 < *(ushort *)(param_1 + 0x4fa));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x2c) = 0;
      iVar8 = *(int *)(*(int *)(param_1 + 0x458) + 0x30);
      *(int *)(param_1 + 0x458) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x454);
      }
      local_34 = 0;
      iVar8 = *(int *)(param_1 + 0x47c) + -1;
      *(int *)(param_1 + 0x47c) = iVar8;
    }
  }
  else {
    while ((iVar8 != 0 && (*(int *)(*(int *)(param_1 + 0x458) + 0x2c) == 0))) {
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x30);
      iVar8 = *(int *)(param_1 + 0x47c) + -1;
      *(int *)(param_1 + 0x47c) = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x47c);
    while ((((iVar8 != 0 && (iVar8 = *(int *)(param_1 + 0x458), iVar8 != 0)) &&
            (iVar11 <= *(int *)(iVar8 + 0x24))) &&
           ((iVar11 < *(int *)(iVar8 + 0x24) || (uVar7 <= *(uint *)(iVar8 + 0x20)))))) {
      if ((*(int *)(iVar8 + 0x2c) != 0) &&
         (local_34 = (uint)*(ushort *)(param_1 + 0x4fa), local_34 != 0)) {
        pfVar9 = (float *)(iVar8 + 4);
        pfVar12 = &local_20;
        iVar8 = -iVar8;
        do {
          if (*pfVar9 <= *pfVar12) {
            fVar4 = *pfVar12;
          }
          else {
            fVar4 = *pfVar9;
          }
          fVar6 = pfVar9[1];
          *pfVar12 = fVar4;
          *(float *)((int)&local_20 + iVar8 + (int)pfVar9) = fVar6;
          pfVar1 = pfVar9 + 2;
          puVar2 = (uint *)((int)local_1c + iVar8 + (int)pfVar9);
          pfVar9 = pfVar9 + 3;
          *(uint *)((int)&local_28 + iVar8 + (int)pfVar9) = *puVar2 | (uint)*pfVar1;
          pfVar12 = pfVar12 + 3;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
      local_34 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(*(int *)(param_1 + 0x458) + 0x30);
      iVar8 = *(int *)(param_1 + 0x47c) + -1;
      *(int *)(param_1 + 0x47c) = iVar8;
    }
  }
  local_28 = 0;
  if (*(short *)(param_1 + 0x4fa) != 0) {
    local_38 = (float *)(param_1 + 0x464);
    local_3c = (double *)(param_1 + 0x110);
    param_5 = param_5 - (int)param_4;
    pfVar9 = &local_20;
    do {
      if (*(int *)(param_1 + 0x198) == 0) {
        fVar4 = (float)*local_3c * *pfVar9;
      }
      else {
        *param_4 = 0.0;
        local_40 = 0;
        if (*(short *)(param_1 + 0x4fa) != 0) {
          pfVar12 = &local_20;
          pdVar10 = (double *)(param_1 + 0x110);
          do {
            dVar5 = *pdVar10;
            fVar4 = *pfVar12;
            pdVar10 = pdVar10 + 1;
            local_40 = local_40 + 1;
            pfVar12 = pfVar12 + 3;
            *param_4 = (float)dVar5 * fVar4 + *param_4;
          } while (local_40 < *(ushort *)(param_1 + 0x4fa));
        }
        fVar4 = *param_4 / (float)*(ushort *)(param_1 + 0x4fa);
      }
      fVar6 = pfVar9[2];
      *param_4 = fVar4;
      *(float *)(param_5 + (int)param_4) = fVar6;
      param_4 = param_4 + 1;
      *local_38 = *pfVar9;
      local_38[1] = pfVar9[1];
      local_3c = local_3c + 1;
      local_38[2] = pfVar9[2];
      local_38 = local_38 + 3;
      local_28 = local_28 + 1;
      pfVar9 = pfVar9 + 3;
    } while (local_28 < *(ushort *)(param_1 + 0x4fa));
  }
  return local_34;
}


