/* Module: sfppack2.dll
   Function: FUN_5ccf87b0
   Address: 5ccf87b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5ccf87b0(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  undefined8 local_110;
  uint local_108;
  int local_104;
  undefined8 local_100;
  int local_f4;
  uint local_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double adStack_b0 [2];
  undefined8 uStack_a0;
  
  piVar1 = param_1 + 0x82;
  iVar7 = *(int *)(param_1[0x82] + 0x18);
  iVar8 = *(int *)(param_1[0x82] + 0x1c);
  pfVar9 = *(float **)(param_1[0x83] + 0x18);
  iVar10 = *(int *)(param_1[0x83] + 0x1c);
  uVar11 = FUN_5ccf5620((int)param_1);
  local_108 = 0;
  if (*(int *)*piVar1 != 0) {
    do {
      iVar16 = local_108 * 0x30;
      puVar2 = local_c8 + local_108 * 0xc;
      FUN_5ccf6670((int)puVar2);
      if (local_108 < 2) {
        local_104 = param_1[0x8a];
      }
      else {
        local_104 = param_1[0x8b];
      }
      if (uVar11 == 0) {
        iVar12 = 1;
      }
      else {
        iVar12 = param_1[local_108 + 0x92];
      }
      iVar17 = local_108 * 0x1c0;
      if ((*(int *)(iVar17 + 0x20 + *piVar1) == 0) && (iVar12 != 0)) {
        iVar12 = param_1[0x83];
        local_f4 = 0;
        *(undefined4 *)(iVar12 + 0x188 + iVar17) = 0;
        *(undefined4 *)(iVar12 + 0x18c + iVar17) = 0;
        iVar12 = *piVar1;
        *(undefined4 *)(iVar17 + 0x188 + iVar12) = 0;
        *(undefined4 *)(iVar17 + 0x18c + iVar12) = 0;
        iVar12 = *piVar1;
        if (0 < *(int *)(iVar12 + 0x14)) {
          pfVar15 = pfVar9;
          do {
            iVar13 = *(int *)(iVar17 + 0x184 + iVar12);
            local_100 = (double)*(float *)((iVar7 - (int)pfVar9) + (int)pfVar15);
            fVar18 = (float10)*pfVar15;
            if (iVar13 == 0) {
              dVar5 = (*(double *)(iVar17 + 0x68 + iVar12) * *(double *)(iVar17 + 0x58 + iVar12) +
                      local_100 * *(double *)(iVar17 + 0x78 + iVar12)) -
                      *(double *)(iVar17 + 0x70 + iVar12) * *(double *)(iVar17 + 0x60 + iVar12);
              local_100._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar14 = local_100._4_4_ & 0x7ff00000;
              local_100 = dVar5;
              if (uVar14 < 0x3df00000) {
                local_100 = 0.0;
              }
              *(undefined4 *)(iVar17 + 0x60 + iVar12) = *(undefined4 *)(iVar17 + 0x58 + iVar12);
              *(double *)(iVar17 + 0x58 + iVar12) = local_100;
              *(undefined4 *)(iVar17 + 100 + iVar12) = *(undefined4 *)(iVar17 + 0x5c + iVar12);
              iVar12 = param_1[0x83];
              pdVar3 = (double *)(iVar12 + 0x58 + iVar17);
              fVar18 = (fVar18 * (float10)*(double *)(iVar12 + 0x78 + iVar17) +
                       (float10)*(double *)(iVar12 + 0x68 + iVar17) *
                       (float10)*(double *)(iVar12 + 0x58 + iVar17)) -
                       (float10)pdVar3[3] * (float10)pdVar3[1];
              local_110._4_4_ = (uint)((ulonglong)(double)fVar18 >> 0x20);
              if ((local_110._4_4_ & 0x7ff00000) < 0x3df00000) {
                fVar18 = (float10)0.0;
              }
              *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
              *pdVar3 = (double)fVar18;
              *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
            }
            else if (iVar13 == 1) {
              dVar5 = *(double *)(iVar17 + 0x38 + iVar12) * *(double *)(iVar17 + 0x28 + iVar12) +
                      (local_100 * *(double *)(iVar17 + 0x48 + iVar12) -
                      *(double *)(iVar17 + 0x40 + iVar12) * *(double *)(iVar17 + 0x30 + iVar12));
              local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar14 = local_110._4_4_ & 0x7ff00000;
              local_100 = (*(double *)(iVar17 + 0x28 + iVar12) - dVar5) *
                          *(double *)(iVar17 + 0x50 + iVar12);
              local_110 = dVar5;
              if (uVar14 < 0x3df00000) {
                local_110 = 0.0;
              }
              *(undefined4 *)(iVar17 + 0x30 + iVar12) = *(undefined4 *)(iVar17 + 0x28 + iVar12);
              *(double *)(iVar17 + 0x28 + iVar12) = local_110;
              *(undefined4 *)(iVar17 + 0x34 + iVar12) = *(undefined4 *)(iVar17 + 0x2c + iVar12);
              iVar12 = param_1[0x83];
              pdVar3 = (double *)(iVar12 + 0x28 + iVar17);
              dVar5 = (double)((float10)pdVar3[2] * (float10)*pdVar3 +
                              (fVar18 * (float10)*(double *)(iVar12 + 0x48 + iVar17) -
                              (float10)*(double *)(iVar12 + 0x40 + iVar17) *
                              (float10)*(double *)(iVar12 + 0x30 + iVar17)));
              local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar14 = local_110._4_4_ & 0x7ff00000;
              fVar18 = ((float10)*pdVar3 - (float10)dVar5) * (float10)pdVar3[5];
              local_110 = dVar5;
              if (uVar14 < 0x3df00000) {
                local_110 = 0.0;
              }
              *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
              *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
              *(undefined4 *)pdVar3 = (undefined4)local_110;
              *(uint *)((int)pdVar3 + 4) = local_110._4_4_;
            }
            else if (iVar13 == 2) {
              dVar5 = (local_100 * *(double *)(iVar17 + 0x80 + iVar12) +
                      *(double *)(iVar17 + 0x68 + iVar12) * *(double *)(iVar17 + 0x58 + iVar12)) -
                      *(double *)(iVar17 + 0x70 + iVar12) * *(double *)(iVar17 + 0x60 + iVar12);
              local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar14 = local_110._4_4_ & 0x7ff00000;
              local_110 = dVar5;
              if (uVar14 < 0x3df00000) {
                local_110 = 0.0;
              }
              dVar5 = *(double *)(iVar17 + 0x60 + iVar12);
              dVar6 = *(double *)(iVar17 + 0x58 + iVar12);
              *(undefined4 *)(iVar17 + 0x60 + iVar12) = *(undefined4 *)(iVar17 + 0x58 + iVar12);
              local_100 = (local_110 + dVar5) - (dVar6 + dVar6);
              *(undefined4 *)(iVar17 + 100 + iVar12) = *(undefined4 *)(iVar17 + 0x5c + iVar12);
              *(double *)(iVar17 + 0x58 + iVar12) = local_110;
              iVar12 = param_1[0x83];
              pdVar3 = (double *)(iVar12 + 0x58 + iVar17);
              dVar5 = (double)(((float10)*(double *)(iVar12 + 0x68 + iVar17) *
                                (float10)*(double *)(iVar12 + 0x58 + iVar17) +
                               fVar18 * (float10)*(double *)(iVar12 + 0x80 + iVar17)) -
                              (float10)pdVar3[3] * (float10)pdVar3[1]);
              local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar14 = local_110._4_4_ & 0x7ff00000;
              local_110 = dVar5;
              if (uVar14 < 0x3df00000) {
                local_110 = 0.0;
              }
              dVar5 = pdVar3[1];
              *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
              *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
              fVar18 = ((float10)local_110 + (float10)dVar5) - ((float10)*pdVar3 + (float10)*pdVar3)
              ;
              *(undefined4 *)pdVar3 = (undefined4)local_110;
              *(uint *)((int)pdVar3 + 4) = local_110._4_4_;
            }
            pdVar3 = (double *)(iVar17 + 0x188 + *piVar1);
            if (local_100 <= *(double *)(iVar17 + 0x188 + *piVar1)) {
              if (*pdVar3 < -local_100) {
                *pdVar3 = -local_100;
              }
            }
            else {
              *(undefined4 *)pdVar3 = (undefined4)local_100;
              *(uint *)((int)pdVar3 + 4) = local_100._4_4_;
            }
            pdVar3 = (double *)(param_1[0x83] + 0x188 + iVar17);
            if (fVar18 <= (float10)*(double *)(param_1[0x83] + 0x188 + iVar17)) {
              if ((float10)*pdVar3 < -fVar18) {
                *pdVar3 = (double)-fVar18;
              }
            }
            else {
              *pdVar3 = (double)fVar18;
            }
            *(float *)((iVar8 - (int)pfVar9) + (int)pfVar15) = (float)local_100;
            *(float *)((iVar10 - (int)pfVar9) + (int)pfVar15) = (float)fVar18;
            iVar12 = *piVar1;
            local_f4 = local_f4 + 1;
            pfVar15 = pfVar15 + 1;
          } while (local_f4 < *(int *)(iVar12 + 0x14));
        }
        if (local_104 != 0) {
          iVar12 = *piVar1;
          *(undefined4 *)(&uStack_c0 + local_108 * 6) = *(undefined4 *)(iVar17 + 0x188 + iVar12);
          iVar13 = param_1[0x83];
          *(undefined4 *)((int)&uStack_c0 + iVar16 + 4) = *(undefined4 *)(iVar17 + 0x18c + iVar12);
          *(undefined4 *)(&uStack_b8 + local_108 * 6) = *(undefined4 *)(iVar13 + 0x188 + iVar17);
          *(undefined4 *)((int)adStack_b0 + iVar16 + -4) = *(undefined4 *)(iVar13 + 0x18c + iVar17);
        }
        if (param_1[0x8d] != 0) {
          if (*(double *)(iVar17 + 0x188 + *piVar1) <= *(double *)(param_1[0x83] + 0x188 + iVar17))
          {
            dVar5 = *(double *)(param_1[0x83] + 0x188 + iVar17);
          }
          else {
            dVar5 = *(double *)(iVar17 + 0x188 + *piVar1);
          }
          if ((float10)dVar5 == (float10)_DAT_5cd51520) {
LAB_5ccf8c95:
            iVar12 = -600;
          }
          else {
            log2((float10)dVar5);
            iVar12 = ftol();
            iVar12 = -0x3c - iVar12;
            if (iVar12 < -600) goto LAB_5ccf8c95;
          }
          iVar13 = param_1[local_108 + 0x8e];
          if (param_1[local_108 + 0x8e] <= iVar12) {
            iVar13 = iVar12;
          }
          param_1[local_108 + 0x8e] = iVar13;
        }
        iVar12 = *piVar1;
        if (*(int *)(iVar12 + 0x10) == 0) {
          if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)(iVar17 + 0x1a0 + iVar12)) {
            if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)((local_108 + 1) * 0x1c0 + iVar12)
               ) {
              *(undefined4 *)(iVar17 + 0x180 + iVar12) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar17 + 0x180 + iVar12) = 2;
          }
          iVar12 = *piVar1;
          FUN_5ccf7a80(iVar12,iVar17 + 0x20 + iVar12,0,0,*(int *)(iVar12 + 0x14));
          if (local_104 != 0) {
            fVar18 = FUN_5ccf7d50(local_108,*piVar1);
            adStack_b0[local_108 * 6] = (double)fVar18;
          }
          iVar12 = *piVar1;
          if (*(int *)(iVar17 + 0x108 + iVar12) != 0) {
            FUN_5ccf7370(iVar12,iVar17 + 0x20 + iVar12,0,0,*(int *)(iVar12 + 0x14));
          }
          iVar12 = param_1[0x83];
          if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)(iVar17 + 0x1a0 + iVar12)) {
            if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)((local_108 + 1) * 0x1c0 + iVar12)
               ) {
              *(undefined4 *)(iVar17 + 0x180 + iVar12) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar17 + 0x180 + iVar12) = 2;
          }
          FUN_5ccf7a80(param_1[0x83],iVar17 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
          if (local_104 != 0) {
            fVar18 = FUN_5ccf7d50(local_108,param_1[0x83]);
            dVar5 = (double)fVar18;
            adStack_b0[local_108 * 6 + 1] = (double)fVar18;
            if ((double)(&uStack_b8)[local_108 * 6] <= (double)(&uStack_c0)[local_108 * 6]) {
              dVar6 = (double)(&uStack_c0)[local_108 * 6];
            }
            else {
              dVar6 = (double)(&uStack_b8)[local_108 * 6];
            }
            if (dVar5 <= adStack_b0[local_108 * 6]) {
              dVar5 = adStack_b0[local_108 * 6];
            }
            if (dVar6 == _DAT_5cd51520) {
              *(undefined4 *)((int)&uStack_a0 + local_108 * 0x30) = 0;
              *(undefined4 *)((int)&uStack_a0 + iVar16 + 4U) = 0x3ff00000;
            }
            else {
              *(double *)((int)&uStack_a0 + local_108 * 0x30) = dVar5 / dVar6;
            }
          }
          if (*(int *)(iVar17 + 0x108 + *piVar1) != 0) {
            FUN_5ccf7370(param_1[0x83],iVar17 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
          }
          if (local_104 != 0) {
            fVar18 = FUN_5ccf7d50(local_108,*piVar1);
            iVar16 = param_1[0x83];
            adStack_b0[local_108 * 6] = (double)fVar18;
            fVar18 = FUN_5ccf7d50(local_108,iVar16);
            adStack_b0[local_108 * 6 + 1] = (double)fVar18;
            *puVar2 = local_108;
          }
        }
        else {
          puVar4 = (undefined4 *)(param_1[0x83] + 0x188 + iVar17);
          if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)(param_1[0x83] + 0x188 + iVar17)) {
            *(undefined4 *)(iVar17 + 0x188 + iVar12) = *puVar4;
            *(undefined4 *)(iVar17 + 0x18c + iVar12) = puVar4[1];
          }
          iVar12 = *piVar1;
          if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)(iVar17 + 0x1a0 + iVar12)) {
            if (*(double *)(iVar17 + 0x188 + iVar12) < *(double *)((local_108 + 1) * 0x1c0 + iVar12)
               ) {
              *(undefined4 *)(iVar17 + 0x180 + iVar12) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar17 + 0x180 + iVar12) = 2;
          }
          iVar12 = *piVar1;
          FUN_5ccf7a80(iVar12,iVar17 + 0x20 + iVar12,param_1[0x83],iVar17 + 0x20 + param_1[0x83],
                       *(int *)(iVar12 + 0x14));
          if (local_104 != 0) {
            FUN_5ccf83b0(local_108,piVar1,(int)local_c8);
            if ((double)(&uStack_b8)[local_108 * 6] <= (double)(&uStack_c0)[local_108 * 6]) {
              dVar5 = (double)(&uStack_c0)[local_108 * 6];
            }
            else {
              dVar5 = (double)(&uStack_b8)[local_108 * 6];
            }
            if (adStack_b0[local_108 * 6 + 1] <= adStack_b0[local_108 * 6]) {
              dVar6 = adStack_b0[local_108 * 6];
            }
            else {
              dVar6 = adStack_b0[local_108 * 6 + 1];
            }
            if (dVar5 == _DAT_5cd51520) {
              *(undefined4 *)((int)&uStack_a0 + local_108 * 0x30) = 0;
              *(undefined4 *)((int)&uStack_a0 + iVar16 + 4U) = 0x3ff00000;
            }
            else {
              *(double *)((int)&uStack_a0 + local_108 * 0x30) = dVar6 / dVar5;
            }
            *puVar2 = local_108;
          }
          iVar16 = *piVar1;
          if (*(int *)(iVar17 + 0x108 + iVar16) != 0) {
            FUN_5ccf7370(iVar16,iVar17 + 0x20 + iVar16,0,0,*(int *)(iVar16 + 0x14));
            FUN_5ccf7370(param_1[0x83],iVar17 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
            if (local_104 != 0) {
              FUN_5ccf83b0(local_108,piVar1,(int)local_c8);
            }
          }
        }
      }
      local_108 = local_108 + 1;
    } while (local_108 < *(uint *)*piVar1);
  }
  (**(code **)(*param_1 + 0x1a0))(param_1,local_c8);
  return;
}


