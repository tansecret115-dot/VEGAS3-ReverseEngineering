/* Module: rmbe3260.dll
   Function: FUN_66044b00
   Address: 66044b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_66044b00(int *param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  double dVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar13;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined2 extraout_var_03;
  undefined2 *puVar10;
  short *psVar11;
  undefined *puVar12;
  uint uVar14;
  short sVar15;
  ushort uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  double dVar21;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  double local_18;
  undefined2 local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  if ((*(int *)((int)param_1 + 0x52) == 0) || (param_1[1] == 0)) {
    *(undefined4 *)((int)param_1 + 0x487) = 0x80040007;
    return -0x7ffbfff9;
  }
  piVar4 = (int *)FUN_6604b200((void *)*param_1,
                               CONCAT22((short)((uint)param_2 >> 0x10),
                                        *(undefined2 *)(*param_1 + 0x225)),(undefined *)0x6,
                               (short *)&local_8);
  if ((short)local_8 == 4) {
    param_1[9] = *piVar4;
    local_24 = *(int *)((int)param_1 + 0x2a) * (uint)*(ushort *)((int)param_1 + 0x1a);
    uStack_20 = 0;
    uStack_1e = 0;
    dVar3 = (((double)*(uint *)((int)param_1 + 0x16) * (double)*(uint *)((int)param_1 + 0x2e) *
             (double)*(ushort *)((int)param_1 + 0x1a)) / (double)local_24) * _DAT_66068188;
    local_18 = dVar3;
    dVar21 = floor(dVar3);
    if (local_18 - dVar21 <= _DAT_66068190) {
      floor(dVar3);
    }
    else {
      ceil(dVar3);
    }
    uVar5 = ftol();
    *(undefined4 *)((int)param_1 + 0x477) = uVar5;
  }
  if (*(int *)((int)param_1 + 0x56) != 0) {
    local_c = (**(code **)(*(int *)param_1[1] + 4))();
  }
  uVar14 = local_c;
  if (local_c == 0) {
    (**(code **)(*(int *)param_1[1] + 0x3c))((int)param_1 + 0x66);
    (**(code **)(*(int *)param_1[1] + 0x40))((int)param_1 + 0x166);
    (**(code **)(*(int *)param_1[1] + 0x44))((int)param_1 + 0x266);
    (**(code **)(*(int *)param_1[1] + 0x48))((int)param_1 + 0x366);
    (**(code **)(*(int *)param_1[1] + 0x4c))(*(undefined1 *)((int)param_1 + 0x46a));
    iVar6 = *param_1;
    (**(code **)(*(int *)param_1[1] + 0x88))
              (CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(iVar6 + 0x225)),iVar6 + 0x218);
    pbVar19 = &DAT_6606e208;
    pbVar18 = (byte *)(*param_1 + 0x218);
    pbVar17 = pbVar18;
    do {
      bVar1 = *pbVar17;
      bVar20 = bVar1 < *pbVar19;
      if (bVar1 != *pbVar19) {
LAB_66044c7a:
        iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_66044c7f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar17[1];
      bVar20 = bVar1 < pbVar19[1];
      if (bVar1 != pbVar19[1]) goto LAB_66044c7a;
      pbVar17 = pbVar17 + 2;
      pbVar19 = pbVar19 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_66044c7f:
    if (iVar6 == 0) {
      param_1[0xd] = 1;
      (**(code **)(*(int *)param_1[1] + 0x84))(1);
      local_c = (**(code **)(*(int *)param_1[1] + 0x78))(&DAT_6606e63c);
    }
    else {
      pbVar19 = &DAT_6606e614;
      pbVar17 = pbVar18;
      do {
        bVar1 = *pbVar17;
        bVar20 = bVar1 < *pbVar19;
        if (bVar1 != *pbVar19) {
LAB_66044cd7:
          iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_66044cdc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar17[1];
        bVar20 = bVar1 < pbVar19[1];
        if (bVar1 != pbVar19[1]) goto LAB_66044cd7;
        pbVar17 = pbVar17 + 2;
        pbVar19 = pbVar19 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_66044cdc:
      if (iVar6 == 0) {
        param_1[0xd] = 1;
        (**(code **)(*(int *)param_1[1] + 0x84))(1);
        local_c = (**(code **)(*(int *)param_1[1] + 0x78))(&DAT_6606e634);
      }
      else {
        pbVar19 = &DAT_6606cc30;
        pbVar17 = pbVar18;
        do {
          bVar1 = *pbVar17;
          bVar20 = bVar1 < *pbVar19;
          if (bVar1 != *pbVar19) {
LAB_66044d34:
            iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_66044d39;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar17[1];
          bVar20 = bVar1 < pbVar19[1];
          if (bVar1 != pbVar19[1]) goto LAB_66044d34;
          pbVar17 = pbVar17 + 2;
          pbVar19 = pbVar19 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_66044d39:
        if (iVar6 == 0) {
          param_1[0xd] = 1;
          (**(code **)(*(int *)param_1[1] + 0x84))(1);
          local_c = (**(code **)(*(int *)param_1[1] + 0x78))(&DAT_6606cc30);
        }
        else {
          pbVar19 = &DAT_6606e60c;
          pbVar17 = pbVar18;
          do {
            bVar1 = *pbVar17;
            bVar20 = bVar1 < *pbVar19;
            if (bVar1 != *pbVar19) {
LAB_66044d91:
              iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_66044d96;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar17[1];
            bVar20 = bVar1 < pbVar19[1];
            if (bVar1 != pbVar19[1]) goto LAB_66044d91;
            pbVar17 = pbVar17 + 2;
            pbVar19 = pbVar19 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_66044d96:
          if (iVar6 == 0) {
LAB_660451ef:
            param_1[0xd] = 0;
            (**(code **)(*(int *)param_1[1] + 0x84))(0);
            (**(code **)(*(int *)param_1[1] + 0x78))(&DAT_6606e62c);
            pbVar17 = &DAT_6606e210;
            pbVar18 = (byte *)(*param_1 + 0x218);
            do {
              bVar1 = *pbVar18;
              bVar20 = bVar1 < *pbVar17;
              if (bVar1 != *pbVar17) {
LAB_66045245:
                iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_6604524a;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar18[1];
              bVar20 = bVar1 < pbVar17[1];
              if (bVar1 != pbVar17[1]) goto LAB_66045245;
              pbVar18 = pbVar18 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_6604524a:
            if (iVar6 != 0) goto LAB_66044e2f;
            sVar15 = (short)param_1[9] * 0xc;
            iVar6 = *(int *)param_1[1];
            uVar5 = 0xc;
          }
          else {
            pbVar19 = &DAT_6606e210;
            pbVar17 = pbVar18;
            do {
              bVar1 = *pbVar17;
              bVar20 = bVar1 < *pbVar19;
              if (bVar1 != *pbVar19) {
LAB_66044dc9:
                iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_66044dce;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar17[1];
              bVar20 = bVar1 < pbVar19[1];
              if (bVar1 != pbVar19[1]) goto LAB_66044dc9;
              pbVar17 = pbVar17 + 2;
              pbVar19 = pbVar19 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_66044dce:
            if (iVar6 == 0) goto LAB_660451ef;
            pbVar17 = &DAT_6606e604;
            do {
              bVar1 = *pbVar18;
              bVar20 = bVar1 < *pbVar17;
              if (bVar1 != *pbVar17) {
LAB_66044e05:
                iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_66044e0a;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar18[1];
              bVar20 = bVar1 < pbVar17[1];
              if (bVar1 != pbVar17[1]) goto LAB_66044e05;
              pbVar18 = pbVar18 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_66044e0a:
            if (iVar6 != 0) {
              param_1[0xd] = 1;
              (**(code **)(*(int *)param_1[1] + 0x84))(1);
              puVar10 = (undefined2 *)
                        FUN_6604b200((void *)*param_1,
                                     CONCAT22(extraout_var_03,*(undefined2 *)(*param_1 + 0x225)),
                                     (undefined *)0xd,(short *)&local_8);
              local_c = CONCAT22(local_c._2_2_,*puVar10);
              psVar11 = (short *)FUN_6604b200((void *)*param_1,
                                              CONCAT22((short)((uint)puVar10 >> 0x10),
                                                       *(undefined2 *)(*param_1 + 0x225)),
                                              (undefined *)0x6,(short *)&local_8);
              sVar15 = *psVar11;
              psVar11 = (short *)FUN_6604b200((void *)*param_1,
                                              CONCAT22((short)((uint)psVar11 >> 0x10),
                                                       *(undefined2 *)(*param_1 + 0x225)),
                                              (undefined *)0xf,(short *)&local_8);
              uVar16 = sVar15 * *psVar11;
              piVar4 = (int *)FUN_6604b200((void *)*param_1,
                                           CONCAT22((short)((uint)psVar11 >> 0x10),
                                                    *(undefined2 *)(*param_1 + 0x225)),
                                           (undefined *)0x10,(short *)&local_8);
              if (*piVar4 == 0) {
                puVar12 = (undefined *)0x0;
              }
              else {
                pvVar9 = operator_new((int)((ulonglong)uVar16 /
                                           (ulonglong)(longlong)(int)(local_c & 0xffff)) << 1);
                puVar12 = (undefined *)0x0;
                if (pvVar9 != (void *)0x0) {
                  puVar12 = FUN_6604b200((void *)*param_1,
                                         CONCAT22((short)((uint)pvVar9 >> 0x10),
                                                  *(undefined2 *)(*param_1 + 0x225)),
                                         (undefined *)0x11,(short *)&local_8);
                }
              }
              local_c = (**(code **)(*(int *)param_1[1] + 0x74))
                                  (&DAT_6606e61c,local_c,
                                   CONCAT22((short)((uint)pbVar17 >> 0x10),sVar15),
                                   CONCAT22((short)((uint)pbVar18 >> 0x10),uVar16),puVar12);
              goto LAB_66044e43;
            }
            param_1[0xd] = 0;
            (**(code **)(*(int *)param_1[1] + 0x84))(0);
            (**(code **)(*(int *)param_1[1] + 0x78))(&DAT_6606e62c);
LAB_66044e2f:
            sVar15 = (short)param_1[9];
            iVar6 = *(int *)param_1[1];
            uVar5 = 1;
          }
          (**(code **)(iVar6 + 0x80))(uVar5,sVar15,0);
        }
      }
    }
LAB_66044e43:
    if ((*(int *)((int)param_1 + 0x5a) != 0) && ((short)param_1[0x14] == 3)) {
      (**(code **)(*(int *)param_1[1] + 0x48))(&DAT_6606e624);
    }
    (**(code **)(*(int *)param_1[1] + 0x54))(*(undefined4 *)((int)param_1 + 0x477));
    (**(code **)(*(int *)param_1[1] + 0x58))(*(undefined4 *)((int)param_1 + 0x47b));
    (**(code **)(*(int *)param_1[1] + 0x5c))(param_1[9]);
    if (*(int *)((int)param_1 + 0x5a) == 0) {
      uVar13 = 0;
      if (*(int *)((int)param_1 + 0x56) != 0) {
        (**(code **)(*(int *)param_1[1] + 0x6c))(0);
        uVar13 = extraout_var_00;
      }
    }
    else {
      (**(code **)(*(int *)param_1[1] + 0x6c))(2);
      uVar13 = extraout_var;
    }
    (**(code **)(*(int *)param_1[1] + 0x60))(CONCAT22(uVar13,*(undefined2 *)((int)param_1 + 0x32)));
    (**(code **)(*(int *)param_1[1] + 100))
              (CONCAT22(extraout_var_01,*(undefined2 *)((int)param_1 + 0x1a)));
    (**(code **)(*(int *)param_1[1] + 0x50))(*(int *)((int)param_1 + 0x16) << 0x10);
    (**(code **)(*(int *)param_1[1] + 0x68))(0);
    (**(code **)(*(int *)param_1[1] + 0x70))(0);
    if ((short)param_1[0x14] == 5) {
      puVar7 = (undefined4 *)
               FUN_6604b200((void *)*param_1,
                            CONCAT22(extraout_var_02,*(undefined2 *)(*param_1 + 0x225)),
                            (undefined *)0x12,(short *)&local_8);
      puVar8 = operator_new(local_8 & 0xffff);
      param_1[0x10] = (int)puVar8;
      param_1[0xf] = local_8 & 0xffff;
      if (puVar8 == (undefined4 *)0x0) {
        local_c = -0x7fffbffb;
      }
      for (uVar14 = (local_8 & 0xffff) >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      (**(code **)(*(int *)param_1[1] + 0x7c))(param_1[0x10],param_1[0xf]);
    }
    uVar14 = local_c;
    if (((short)param_1[0x14] == 4) && (*(int *)((int)param_1 + 0x56) != 0)) {
      uVar14 = FUN_66047b20((void *)param_1[1],0x2e726134);
    }
    if (((short)param_1[0x14] == 5) && (*(int *)((int)param_1 + 0x56) != 0)) {
      uVar14 = FUN_66047b20((void *)param_1[1],0x2e726135);
    }
    if ((uVar14 == 0) && (*(int *)((int)param_1 + 0x56) != 0)) {
      uVar14 = (**(code **)(*(int *)param_1[1] + 0x34))();
    }
  }
  if (uVar14 == 0) {
    uVar14 = FUN_66044190((int)param_1);
    if (uVar14 == 0) {
      if (*(int *)((int)param_1 + 0x56) != 0) {
        uVar14 = FUN_66047af0(param_1[1]);
      }
      if (uVar14 == 0) {
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x11] = 0;
        if (param_1[7] != 0) {
          uStack_1e = *(undefined2 *)((int)param_1 + 0x32);
          local_10 = (undefined2)param_1[5];
          local_18 = (double)CONCAT62(CONCAT24(uStack_1e,param_1[4]),1);
          local_1c = *(undefined2 *)((int)param_1 + 0x1a);
          local_24._0_2_ = 1;
          local_24._2_2_ = (undefined2)*(undefined4 *)((int)param_1 + 0x16);
          uStack_20 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x16) >> 0x10);
          if (param_1[8] == 0) {
            pvVar9 = operator_new(0x22);
            if (pvVar9 == (void *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = FUN_66046660(pvVar9,(short *)&local_18,
                                    param_1[0xe] * (uint)*(ushort *)(param_1 + 5) * 2,
                                    (short *)&local_24,
                                    *(int *)((int)param_1 + 0x2a) *
                                    (uint)*(ushort *)((int)param_1 + 0x1a) * 2);
            }
            param_1[8] = (int)piVar4;
            uVar14 = *piVar4;
          }
          uVar2 = (ulonglong)(uint)param_1[4] % 0x2b11;
          if (((int)uVar2 == 0) &&
             ((int)((uVar2 << 0x20 | (ulonglong)*(uint *)((int)param_1 + 0x16)) % 8000) == 0)) {
            dVar3 = *(double *)((int)param_1 + 0x497) * _DAT_66068198;
          }
          else {
            uVar2 = (ulonglong)*(uint *)((int)param_1 + 0x16) % 0x2b11;
            local_24 = CONCAT22(local_24._2_2_,(short)local_24);
            if (((int)uVar2 != 0) ||
               (local_24 = CONCAT22(local_24._2_2_,(short)local_24),
               (int)((uVar2 << 0x20 | (ulonglong)(uint)param_1[4]) % 8000) != 0)) goto LAB_660450d5;
            dVar3 = *(double *)((int)param_1 + 0x497) * _DAT_660681a0;
          }
          *(double *)((int)param_1 + 0x497) = dVar3;
          local_24 = CONCAT22(local_24._2_2_,(short)local_24);
        }
      }
    }
  }
LAB_660450d5:
  if (uVar14 != 0) {
    FUN_660443a0(param_1,0);
    if (uVar14 != 0) {
      *(uint *)((int)param_1 + 0x487) = uVar14;
    }
  }
  _control87(0x8001f,0x8001f);
  return uVar14;
}


