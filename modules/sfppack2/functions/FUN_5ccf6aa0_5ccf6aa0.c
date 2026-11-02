/* Module: sfppack2.dll
   Function: FUN_5ccf6aa0
   Address: 5ccf6aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5ccf6aa0(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
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
  iVar8 = *(int *)(param_1[0x82] + 0x18);
  iVar9 = *(int *)(param_1[0x82] + 0x1c);
  pdVar10 = *(double **)(param_1[0x83] + 0x18);
  iVar11 = *(int *)(param_1[0x83] + 0x1c);
  uVar12 = FUN_5ccf5620((int)param_1);
  local_108 = 0;
  if (*(int *)*piVar1 != 0) {
    do {
      iVar17 = local_108 * 0x30;
      puVar2 = local_c8 + local_108 * 0xc;
      FUN_5ccf6670((int)puVar2);
      if (local_108 < 2) {
        local_104 = param_1[0x8a];
      }
      else {
        local_104 = param_1[0x8b];
      }
      if (uVar12 == 0) {
        iVar13 = 1;
      }
      else {
        iVar13 = param_1[local_108 + 0x92];
      }
      iVar18 = local_108 * 0x1c0;
      if ((*(int *)(iVar18 + 0x20 + *piVar1) == 0) && (iVar13 != 0)) {
        iVar13 = param_1[0x83];
        local_f4 = 0;
        *(undefined4 *)(iVar13 + 0x188 + iVar18) = 0;
        *(undefined4 *)(iVar13 + 0x18c + iVar18) = 0;
        iVar13 = *piVar1;
        *(undefined4 *)(iVar18 + 0x188 + iVar13) = 0;
        *(undefined4 *)(iVar18 + 0x18c + iVar13) = 0;
        iVar13 = *piVar1;
        if (0 < *(int *)(iVar13 + 0x14)) {
          pdVar16 = pdVar10;
          do {
            local_100 = *(double *)((iVar8 - (int)pdVar10) + (int)pdVar16);
            iVar14 = *(int *)(iVar18 + 0x184 + iVar13);
            dVar5 = *pdVar16;
            if (iVar14 == 0) {
              dVar6 = (*(double *)(iVar18 + 0x68 + iVar13) * *(double *)(iVar18 + 0x58 + iVar13) +
                      local_100 * *(double *)(iVar18 + 0x78 + iVar13)) -
                      *(double *)(iVar18 + 0x70 + iVar13) * *(double *)(iVar18 + 0x60 + iVar13);
              local_100._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
              uVar15 = local_100._4_4_ & 0x7ff00000;
              local_100 = dVar6;
              if (uVar15 < 0x3df00000) {
                local_100 = 0.0;
              }
              *(undefined4 *)(iVar18 + 0x60 + iVar13) = *(undefined4 *)(iVar18 + 0x58 + iVar13);
              *(double *)(iVar18 + 0x58 + iVar13) = local_100;
              *(undefined4 *)(iVar18 + 100 + iVar13) = *(undefined4 *)(iVar18 + 0x5c + iVar13);
              iVar13 = param_1[0x83];
              pdVar3 = (double *)(iVar13 + 0x58 + iVar18);
              dVar5 = (dVar5 * *(double *)(iVar13 + 0x78 + iVar18) +
                      *(double *)(iVar13 + 0x68 + iVar18) * *(double *)(iVar13 + 0x58 + iVar18)) -
                      pdVar3[3] * pdVar3[1];
              local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
              uVar15 = local_110._4_4_ & 0x7ff00000;
              local_110 = dVar5;
              if (uVar15 < 0x3df00000) {
                local_110 = 0.0;
              }
              *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
              *pdVar3 = local_110;
              *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
            }
            else if (iVar14 == 1) {
              dVar6 = *(double *)(iVar18 + 0x38 + iVar13) * *(double *)(iVar18 + 0x28 + iVar13) +
                      (local_100 * *(double *)(iVar18 + 0x48 + iVar13) -
                      *(double *)(iVar18 + 0x40 + iVar13) * *(double *)(iVar18 + 0x30 + iVar13));
              local_110._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
              uVar15 = local_110._4_4_ & 0x7ff00000;
              local_100 = (*(double *)(iVar18 + 0x28 + iVar13) - dVar6) *
                          *(double *)(iVar18 + 0x50 + iVar13);
              local_110 = dVar6;
              if (uVar15 < 0x3df00000) {
                local_110 = 0.0;
              }
              *(undefined4 *)(iVar18 + 0x30 + iVar13) = *(undefined4 *)(iVar18 + 0x28 + iVar13);
              *(double *)(iVar18 + 0x28 + iVar13) = local_110;
              *(undefined4 *)(iVar18 + 0x34 + iVar13) = *(undefined4 *)(iVar18 + 0x2c + iVar13);
              iVar13 = param_1[0x83];
              pdVar3 = (double *)(iVar13 + 0x28 + iVar18);
              dVar6 = pdVar3[2] * *pdVar3 +
                      (dVar5 * *(double *)(iVar13 + 0x48 + iVar18) -
                      *(double *)(iVar13 + 0x40 + iVar18) * *(double *)(iVar13 + 0x30 + iVar18));
              dVar5 = *pdVar3;
              local_110._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
              uVar15 = local_110._4_4_ & 0x7ff00000;
              local_110 = dVar6;
              if (uVar15 < 0x3df00000) {
                local_110 = 0.0;
              }
              *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
              *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
              *(undefined4 *)pdVar3 = (undefined4)local_110;
              *(uint *)((int)pdVar3 + 4) = local_110._4_4_;
              local_110 = (dVar5 - dVar6) * pdVar3[5];
            }
            else {
              local_110 = dVar5;
              if (iVar14 == 2) {
                dVar6 = (local_100 * *(double *)(iVar18 + 0x80 + iVar13) +
                        *(double *)(iVar18 + 0x68 + iVar13) * *(double *)(iVar18 + 0x58 + iVar13)) -
                        *(double *)(iVar18 + 0x70 + iVar13) * *(double *)(iVar18 + 0x60 + iVar13);
                local_110._4_4_ = (uint)((ulonglong)dVar6 >> 0x20);
                uVar15 = local_110._4_4_ & 0x7ff00000;
                local_110 = dVar6;
                if (uVar15 < 0x3df00000) {
                  local_110 = 0.0;
                }
                dVar6 = *(double *)(iVar18 + 0x60 + iVar13);
                dVar7 = *(double *)(iVar18 + 0x58 + iVar13);
                *(undefined4 *)(iVar18 + 0x60 + iVar13) = *(undefined4 *)(iVar18 + 0x58 + iVar13);
                local_100 = (local_110 + dVar6) - (dVar7 + dVar7);
                *(undefined4 *)(iVar18 + 100 + iVar13) = *(undefined4 *)(iVar18 + 0x5c + iVar13);
                *(double *)(iVar18 + 0x58 + iVar13) = local_110;
                iVar13 = param_1[0x83];
                pdVar3 = (double *)(iVar13 + 0x58 + iVar18);
                dVar5 = (*(double *)(iVar13 + 0x68 + iVar18) * *(double *)(iVar13 + 0x58 + iVar18) +
                        dVar5 * *(double *)(iVar13 + 0x80 + iVar18)) - pdVar3[3] * pdVar3[1];
                local_110._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
                uVar15 = local_110._4_4_ & 0x7ff00000;
                local_110 = dVar5;
                if (uVar15 < 0x3df00000) {
                  local_110 = 0.0;
                }
                dVar5 = pdVar3[1];
                dVar6 = *pdVar3;
                *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)pdVar3;
                *(undefined4 *)((int)pdVar3 + 0xc) = *(undefined4 *)((int)pdVar3 + 4);
                *(undefined4 *)pdVar3 = (undefined4)local_110;
                *(uint *)((int)pdVar3 + 4) = local_110._4_4_;
                local_110 = (local_110 + dVar5) - (dVar6 + dVar6);
              }
            }
            pdVar3 = (double *)(iVar18 + 0x188 + *piVar1);
            if (local_100 <= *(double *)(iVar18 + 0x188 + *piVar1)) {
              if (*pdVar3 < -local_100) {
                *pdVar3 = -local_100;
              }
            }
            else {
              *(undefined4 *)pdVar3 = (undefined4)local_100;
              *(uint *)((int)pdVar3 + 4) = local_100._4_4_;
            }
            pdVar3 = (double *)(param_1[0x83] + 0x188 + iVar18);
            if (local_110 <= *(double *)(param_1[0x83] + 0x188 + iVar18)) {
              if (*pdVar3 < -local_110) {
                *pdVar3 = -local_110;
              }
            }
            else {
              *pdVar3 = local_110;
            }
            *(double *)((iVar9 - (int)pdVar10) + (int)pdVar16) = local_100;
            *(double *)((iVar11 - (int)pdVar10) + (int)pdVar16) = local_110;
            iVar13 = *piVar1;
            local_f4 = local_f4 + 1;
            pdVar16 = pdVar16 + 1;
          } while (local_f4 < *(int *)(iVar13 + 0x14));
        }
        if (local_104 != 0) {
          iVar13 = *piVar1;
          *(undefined4 *)(&uStack_c0 + local_108 * 6) = *(undefined4 *)(iVar18 + 0x188 + iVar13);
          iVar14 = param_1[0x83];
          *(undefined4 *)((int)&uStack_c0 + iVar17 + 4) = *(undefined4 *)(iVar18 + 0x18c + iVar13);
          *(undefined4 *)(&uStack_b8 + local_108 * 6) = *(undefined4 *)(iVar14 + 0x188 + iVar18);
          *(undefined4 *)((int)adStack_b0 + iVar17 + -4) = *(undefined4 *)(iVar14 + 0x18c + iVar18);
        }
        if (param_1[0x8d] != 0) {
          if (*(double *)(iVar18 + 0x188 + *piVar1) <= *(double *)(param_1[0x83] + 0x188 + iVar18))
          {
            dVar5 = *(double *)(param_1[0x83] + 0x188 + iVar18);
          }
          else {
            dVar5 = *(double *)(iVar18 + 0x188 + *piVar1);
          }
          if ((float10)dVar5 == (float10)_DAT_5cd51520) {
LAB_5ccf6f85:
            iVar13 = -600;
          }
          else {
            log2((float10)dVar5);
            iVar13 = ftol();
            iVar13 = -0x3c - iVar13;
            if (iVar13 < -600) goto LAB_5ccf6f85;
          }
          iVar14 = param_1[local_108 + 0x8e];
          if (param_1[local_108 + 0x8e] <= iVar13) {
            iVar14 = iVar13;
          }
          param_1[local_108 + 0x8e] = iVar14;
        }
        iVar13 = *piVar1;
        if (*(int *)(iVar13 + 0x10) == 0) {
          if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)(iVar18 + 0x1a0 + iVar13)) {
            if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)((local_108 + 1) * 0x1c0 + iVar13)
               ) {
              *(undefined4 *)(iVar18 + 0x180 + iVar13) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar18 + 0x180 + iVar13) = 2;
          }
          iVar13 = *piVar1;
          FUN_5ccf5d40(iVar13,iVar18 + 0x20 + iVar13,0,0,*(int *)(iVar13 + 0x14));
          if (local_104 != 0) {
            fVar19 = FUN_5ccf6010(local_108,*piVar1);
            adStack_b0[local_108 * 6] = (double)fVar19;
          }
          iVar13 = *piVar1;
          if (*(int *)(iVar18 + 0x108 + iVar13) != 0) {
            FUN_5ccf5640(iVar13,iVar18 + 0x20 + iVar13,0,0,*(int *)(iVar13 + 0x14));
          }
          iVar13 = param_1[0x83];
          if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)(iVar18 + 0x1a0 + iVar13)) {
            if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)((local_108 + 1) * 0x1c0 + iVar13)
               ) {
              *(undefined4 *)(iVar18 + 0x180 + iVar13) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar18 + 0x180 + iVar13) = 2;
          }
          FUN_5ccf5d40(param_1[0x83],iVar18 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
          if (local_104 != 0) {
            fVar19 = FUN_5ccf6010(local_108,param_1[0x83]);
            dVar5 = (double)fVar19;
            adStack_b0[local_108 * 6 + 1] = (double)fVar19;
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
              *(undefined4 *)((int)&uStack_a0 + iVar17 + 4U) = 0x3ff00000;
            }
            else {
              *(double *)((int)&uStack_a0 + local_108 * 0x30) = dVar5 / dVar6;
            }
          }
          if (*(int *)(iVar18 + 0x108 + *piVar1) != 0) {
            FUN_5ccf5640(param_1[0x83],iVar18 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
          }
          if (local_104 != 0) {
            fVar19 = FUN_5ccf6010(local_108,*piVar1);
            iVar17 = param_1[0x83];
            adStack_b0[local_108 * 6] = (double)fVar19;
            fVar19 = FUN_5ccf6010(local_108,iVar17);
            adStack_b0[local_108 * 6 + 1] = (double)fVar19;
            *puVar2 = local_108;
          }
        }
        else {
          puVar4 = (undefined4 *)(param_1[0x83] + 0x188 + iVar18);
          if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)(param_1[0x83] + 0x188 + iVar18)) {
            *(undefined4 *)(iVar18 + 0x188 + iVar13) = *puVar4;
            *(undefined4 *)(iVar18 + 0x18c + iVar13) = puVar4[1];
          }
          iVar13 = *piVar1;
          if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)(iVar18 + 0x1a0 + iVar13)) {
            if (*(double *)(iVar18 + 0x188 + iVar13) < *(double *)((local_108 + 1) * 0x1c0 + iVar13)
               ) {
              *(undefined4 *)(iVar18 + 0x180 + iVar13) = 0;
            }
          }
          else {
            *(undefined4 *)(iVar18 + 0x180 + iVar13) = 2;
          }
          iVar13 = *piVar1;
          FUN_5ccf5d40(iVar13,iVar18 + 0x20 + iVar13,param_1[0x83],iVar18 + 0x20 + param_1[0x83],
                       *(int *)(iVar13 + 0x14));
          if (local_104 != 0) {
            FUN_5ccf66a0(local_108,piVar1,(int)local_c8);
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
              *(undefined4 *)((int)&uStack_a0 + iVar17 + 4U) = 0x3ff00000;
            }
            else {
              *(double *)((int)&uStack_a0 + local_108 * 0x30) = dVar6 / dVar5;
            }
            *puVar2 = local_108;
          }
          iVar17 = *piVar1;
          if (*(int *)(iVar18 + 0x108 + iVar17) != 0) {
            FUN_5ccf5640(iVar17,iVar18 + 0x20 + iVar17,0,0,*(int *)(iVar17 + 0x14));
            FUN_5ccf5640(param_1[0x83],iVar18 + 0x20 + param_1[0x83],0,0,*(int *)(*piVar1 + 0x14));
            if (local_104 != 0) {
              FUN_5ccf66a0(local_108,piVar1,(int)local_c8);
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


