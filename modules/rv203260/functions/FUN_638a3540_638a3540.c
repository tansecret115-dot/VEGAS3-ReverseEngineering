/* Module: rv203260.dll
   Function: FUN_638a3540
   Address: 638a3540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_638a3540(int param_1)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  bool bVar19;
  float10 fVar20;
  float10 extraout_ST0;
  float10 fVar21;
  float10 extraout_ST0_00;
  float10 fVar22;
  FILE *_File;
  byte local_200;
  undefined4 local_1ff;
  undefined1 local_1fb;
  undefined1 local_1fa;
  uint local_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  uint local_e4;
  undefined4 uStack_e0;
  int local_dc;
  undefined4 uStack_d8;
  uint local_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined4 uStack_c0;
  int local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 uStack_b0;
  int local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 uStack_a0;
  uint local_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 uStack_88;
  uint local_84;
  undefined4 uStack_80;
  int local_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  double local_34;
  float local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  double local_18;
  uint local_10;
  undefined8 local_c;
  
  local_3c = 1;
  local_38 = 0;
  local_28 = param_1;
  if (*(short *)(param_1 + 0xf4) != 0) {
    do {
      iVar4 = *(int *)(local_28 + 8 + local_38 * 4);
      if (*(int *)(iVar4 + 0xee) == 5) {
        iVar17 = *(int *)(local_28 + 0xac);
        uVar10 = *(uint *)(iVar4 + 0x26f);
        if (uVar10 < iVar17 + 10U) {
          uVar10 = (uVar10 - iVar17) - 0xb;
        }
        else {
          uVar10 = (uVar10 - iVar17) - 10;
        }
        if ((uVar10 < 0x5265c01) || (*(int *)(iVar4 + 0x26b) == 0)) {
          if ((*(int *)(local_28 + 0xac) == *(int *)(iVar4 + 0x273)) &&
             (*(FILE **)(iVar4 + 0x26b) != (FILE *)0x0)) {
            lVar13 = ftell(*(FILE **)(iVar4 + 0x26b));
            iVar17 = FUN_638a59f0((byte *)s_FrameSkip_638b4414,&local_24,*(FILE **)(iVar4 + 0x26b));
            if (iVar17 == 0) {
              fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
              iVar17 = FUN_638a59f0((byte *)s_FrameTime_638b4408,&local_24,*(FILE **)(iVar4 + 0x26b)
                                   );
              if (iVar17 == 0) {
                *(undefined4 *)(iVar4 + 0x23d) = 1;
                fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
                iVar17 = FUN_638a59f0((byte *)s_MaxSuggestedFrameTime_638b43f0,&local_24,
                                      *(FILE **)(iVar4 + 0x26b));
                if (iVar17 != 0) {
                  *(int *)(iVar4 + 0x1f5) = local_24;
                }
              }
              else {
                *(undefined4 *)(iVar4 + 0x23d) = 0;
                *(int *)(iVar4 + 0x1ce) = local_24;
              }
            }
            else {
              local_bc = local_24 + 1;
              uStack_b8 = 0;
              *(undefined4 *)(iVar4 + 0x23d) = 0;
              uVar15 = ftol();
              *(undefined4 *)(iVar4 + 0x1ce) = uVar15;
            }
            fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          }
          goto LAB_638a3ce9;
        }
        local_200 = DAT_638b6658;
        puVar18 = &local_1ff;
        for (iVar17 = 0x40; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
        *(undefined2 *)puVar18 = 0;
        *(undefined1 *)((int)puVar18 + 2) = 0;
        do {
          pcVar11 = fgets((char *)&local_200,0x104,*(FILE **)(iVar4 + 0x26b));
          if (pcVar11 == (char *)0x0) {
            *(undefined4 *)(iVar4 + 0xee) = 6;
            _File = *(FILE **)(iVar4 + 0x26b);
LAB_638a371f:
            fclose(_File);
            *(undefined4 *)(iVar4 + 0x26b) = 0;
            break;
          }
          local_1fa = 0;
          pcVar11 = s_Stream_638b44cc;
          pbVar12 = &local_200;
          do {
            bVar2 = *pbVar12;
            bVar19 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_638a363a:
              iVar17 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_638a363f;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar19 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_638a363a;
            pbVar12 = pbVar12 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar17 = 0;
LAB_638a363f:
          if (iVar17 == 0) {
LAB_638a36fb:
            *(undefined4 *)(iVar4 + 0xee) = 6;
            _File = *(FILE **)(iVar4 + 0x26b);
            goto LAB_638a371f;
          }
          pcVar11 = s_stream_638b44c4;
          pbVar12 = &local_200;
          do {
            bVar2 = *pbVar12;
            bVar19 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_638a3676:
              iVar17 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_638a367b;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar19 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_638a3676;
            pbVar12 = pbVar12 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar17 = 0;
LAB_638a367b:
          if (iVar17 == 0) goto LAB_638a36fb;
          local_1fb = 0;
          pcVar11 = s_Scene_638b44bc;
          pbVar12 = &local_200;
          do {
            bVar2 = *pbVar12;
            bVar19 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_638a36b5:
              iVar17 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_638a36ba;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar19 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_638a36b5;
            pbVar12 = pbVar12 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar17 = 0;
LAB_638a36ba:
          if (iVar17 == 0) break;
          pcVar11 = s_scene_638b44b4;
          pbVar12 = &local_200;
          do {
            bVar2 = *pbVar12;
            bVar19 = bVar2 < (byte)*pcVar11;
            if (bVar2 != *pcVar11) {
LAB_638a36ed:
              iVar17 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_638a36f2;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar19 = bVar2 < (byte)pcVar11[1];
            if (bVar2 != pcVar11[1]) goto LAB_638a36ed;
            pbVar12 = pbVar12 + 2;
            pcVar11 = pcVar11 + 2;
          } while (bVar2 != 0);
          iVar17 = 0;
LAB_638a36f2:
        } while (iVar17 != 0);
        if (*(int *)(iVar4 + 0xee) == 5) {
          lVar13 = ftell(*(FILE **)(iVar4 + 0x26b));
          iVar17 = FUN_638a59f0((byte *)s_StartTime_638b44a8,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 == 0) {
            *(undefined4 *)(iVar4 + 0x273) = 0x7fffffff;
          }
          else {
            *(uint *)(iVar4 + 0x273) = local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_EndTime_638b44a0,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 == 0) {
            *(undefined4 *)(iVar4 + 0x26f) = 0x7fffffff;
          }
          else {
            *(uint *)(iVar4 + 0x26f) = local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_KeyQP_638b4498,(int *)&local_10,*(FILE **)(iVar4 + 0x26b))
          ;
          if (iVar17 != 0) {
            uStack_f8 = 0;
            local_fc = local_10;
            *(double *)(iVar4 + 0x1ea) = (double)local_10;
            *(undefined4 *)(iVar4 + 0x1ca) = 1;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MinQP_638b4490,(int *)&local_10,*(FILE **)(iVar4 + 0x26b))
          ;
          if (iVar17 != 0) {
            uStack_a8 = 0;
            local_5c = local_10;
            local_ac = local_10 + 1;
            uStack_58 = 0;
            *(char *)(iVar4 + 0x241) = (char)local_10;
            *(char *)(iVar4 + 0x243) = (char)local_10;
            local_20 = (double)CONCAT44((float)local_10 * _DAT_638b3158,(undefined4)local_20);
            uVar9 = ftol();
            *(undefined1 *)(iVar4 + 0x242) = uVar9;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MaxQP_638b4488,(int *)&local_10,*(FILE **)(iVar4 + 0x26b))
          ;
          if (iVar17 != 0) {
            local_6c = local_10;
            *(char *)(iVar4 + 0x244) = (char)local_10;
            local_dc = local_10 + 1;
            *(char *)(iVar4 + 0x246) = (char)local_10;
            uStack_d8 = 0;
            uStack_68 = 0;
            local_20 = (double)CONCAT44((float)local_10 * _DAT_638b3158,(undefined4)local_20);
            uVar9 = ftol();
            *(undefined1 *)(iVar4 + 0x245) = uVar9;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MinKeyQP_638b447c,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(undefined1 *)(iVar4 + 0x243) = (undefined1)local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MaxKeyQP_638b4470,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(undefined1 *)(iVar4 + 0x246) = (undefined1)local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MaxSuggestedQP_638b4460,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(undefined1 *)(iVar4 + 499) = (undefined1)local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_MinSuggestedQP_638b4450,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(undefined1 *)(iVar4 + 500) = (undefined1)local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_NumBFrames_638b4444,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(undefined4 *)(iVar4 + 0x253) = 1;
            *(uint *)(iVar4 + 0x247) = local_10;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_RPRSize_638b443c,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            uVar10 = local_10;
            if ((local_10 == 0) &&
               (((uint)*(ushort *)(iVar4 + 0x9e) < *(uint *)(local_28 + 0xf6) ||
                ((uint)*(ushort *)(iVar4 + 0xa0) < *(uint *)(local_28 + 0xfa))))) {
              uVar10 = *(uint *)(iVar4 + 599);
            }
            iVar17 = uVar10 - 1;
            *(int *)(iVar4 + 0x209) = iVar17;
            if (iVar17 == -1) {
              *(undefined4 *)(iVar4 + 0xe2) = *(undefined4 *)(local_28 + 0xf6);
              *(undefined4 *)(iVar4 + 0xe6) = *(undefined4 *)(local_28 + 0xfa);
            }
            else {
              *(undefined4 *)(iVar4 + 0xe2) = *(undefined4 *)(local_28 + 0x2d6 + iVar17 * 4);
              *(undefined4 *)(iVar4 + 0xe6) =
                   *(undefined4 *)(local_28 + 0x2f6 + *(int *)(iVar4 + 0x209) * 4);
            }
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_ForceKeys_638b4430,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            *(uint *)(iVar4 + 0x186) = (uint)(local_10 != 0);
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
          iVar17 = FUN_638a59f0((byte *)s_KeyFrameRate_638b4420,(int *)&local_10,
                                *(FILE **)(iVar4 + 0x26b));
          if (iVar17 != 0) {
            if (local_10 != 0) {
              *(uint *)(iVar4 + 0x182) = local_10;
              *(undefined4 *)(iVar4 + 0x186) = 1;
              fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
              goto LAB_638a3d06;
            }
            *(undefined4 *)(iVar4 + 0x182) = 0x7fffffff;
            *(undefined4 *)(iVar4 + 0x186) = 0;
          }
          fseek(*(FILE **)(iVar4 + 0x26b),lVar13,0);
        }
      }
      else {
LAB_638a3ce9:
        if ((*(int *)(iVar4 + 0x196) != 0) && (*(int *)(iVar4 + 0x18e) == 1)) {
          *(undefined4 *)(iVar4 + 0x1ca) = 0;
        }
      }
LAB_638a3d06:
      iVar17 = *(int *)(iVar4 + 0x196);
      if (iVar17 != 0) {
        uVar10 = *(uint *)(iVar4 + 0x12a);
        uVar16 = *(uint *)(iVar4 + 0x12e);
        if (uVar10 < uVar16) {
          local_7c = (uVar10 - uVar16) + -1;
        }
        else {
          local_7c = uVar10 - uVar16;
        }
        local_44 = *(undefined4 *)(iVar4 + 0xfa);
        uStack_78 = 0;
        uStack_40 = 0;
        iVar14 = ftol();
        if (*(int *)(iVar4 + 0x19a) == 1) {
          iVar17 = iVar17 + 0x40;
        }
        else {
          iVar17 = iVar17 + *(int *)(iVar4 + 0x19a) * 0x58;
        }
        local_20 = (double)CONCAT44(iVar17,(undefined4)local_20);
        *(int *)(iVar4 + 0x1ae) = *(int *)(iVar4 + 0x1ae) + (iVar17 - iVar14);
        if (*(int *)(iVar4 + 0xfe) != 0) {
          if ((*(int *)(iVar4 + 0x18e) == 1) && (*(int *)(iVar4 + 0x225) < 0)) {
            *(int *)(iVar4 + 0x225) = iVar17;
          }
          else {
            uStack_88 = 0;
            local_8c = *(int *)(iVar4 + 0xfe);
            iVar17 = ftol();
            *(int *)(iVar4 + 0x225) = *(int *)(iVar4 + 0x225) + iVar17;
          }
        }
      }
      if ((*(int *)(iVar4 + 0x18e) == 1) || (*(int *)(iVar4 + 0x18e) == 2)) {
        uVar10 = *(uint *)(iVar4 + 0x12a);
        uVar16 = *(uint *)(iVar4 + 0xfa);
        local_20 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x192),(undefined4)local_20);
        local_cc = uVar10 - *(int *)(iVar4 + 0x126);
        uStack_c8 = 0;
        uStack_98 = 0;
        *(undefined4 *)(iVar4 + 0x192) = 0;
        *(uint *)(iVar4 + 0x126) = uVar10;
        local_18 = (double)uVar16;
        local_9c = uVar16;
        uVar15 = ftol();
        local_c = CONCAT44(uVar15,(undefined4)local_c);
        if ((*(int *)(iVar4 + 0xea) == 2) || (*(int *)(iVar4 + 0xea) == 3)) {
          uVar15 = ftol();
          *(undefined4 *)(iVar4 + 0x1ce) = uVar15;
        }
        else {
          local_ec = *(uint *)(iVar4 + 0x102);
          uStack_e8 = 0;
          fVar20 = (float10)*(int *)(iVar4 + 0x1ae) / (float10)local_18;
          local_2c = (float)local_ec;
          if ((((float10)local_ec - (float10)_DAT_638b3114 < fVar20 * (float10)_DAT_638b3168) &&
              (*(int *)(iVar4 + 0x18e) == 1)) && (*(int *)(iVar4 + 0x235) == 0)) {
            uStack_48 = 0;
            local_4c = uVar16;
            uVar15 = ftol();
            *(undefined4 *)(iVar4 + 0x1ae) = uVar15;
            fVar20 = extraout_ST0;
          }
          if ((*(int *)(iVar4 + 0xee) == 4) && (*(int *)(iVar4 + 0x235) == 0)) {
            fVar21 = (float10)_DAT_638b3118;
          }
          else {
            fVar21 = (fVar20 * (float10)_DAT_638b3178) / (float10)local_2c;
            fVar7 = _DAT_638b3184;
            if ((float10)_DAT_638b3118 < fVar20) {
              fVar7 = _DAT_638b3180;
            }
            fVar21 = (float10)fVar7 * fVar21 * fVar21;
          }
          if (((*(int *)(iVar4 + 0x235) != 0) && (*(int *)(iVar4 + 0xee) == 6)) &&
             ((float10)_DAT_638b3188 <= fVar21)) {
            fVar21 = (float10)_DAT_638b3188;
          }
          if ((int)((uVar16 / 1000) * *(int *)(iVar4 + 0x102)) < *(int *)(iVar4 + 0x1ae)) {
            local_54 = *(uint *)(iVar4 + 0x20d);
            local_3c = 0;
            if (uVar10 < local_54) {
              local_54 = (uVar10 - local_54) - 1;
            }
            else {
              local_54 = uVar10 - local_54;
            }
            uStack_50 = 0;
            uStack_60 = 0;
            local_64 = (*(int *)(iVar4 + 0x24b) + 1) * 1000;
            if ((double)local_64 / *(double *)(iVar4 + 0x1ba) < (double)local_54) {
              dVar1 = *(double *)(iVar4 + 0x1ba) * _DAT_638b3190;
              *(uint *)(iVar4 + 0x20d) = uVar10;
              *(double *)(iVar4 + 0x1ba) = dVar1;
            }
          }
          else {
            *(undefined4 *)(iVar4 + 0x1ba) = *(undefined4 *)(iVar4 + 0x1c2);
            *(undefined4 *)(iVar4 + 0x1be) = *(undefined4 *)(iVar4 + 0x1c6);
            *(undefined4 *)(iVar4 + 0x211) = 0;
          }
          if (*(int *)(iVar4 + 0x18e) == 1) {
            fVar22 = (float10)_DAT_638b3198;
            *(undefined4 *)(iVar4 + 0x136) = 0;
            fVar21 = (fVar21 - fVar22) * (float10)*(double *)(iVar4 + 0x1ea);
            uVar10 = *(uint *)(iVar4 + 0x102);
            if (*(int *)(iVar4 + 0x235) == 0) {
              uStack_a0 = 0;
              if (fVar20 <= (float10)uVar10 * (float10)_DAT_638b3140 - (float10)_DAT_638b31b8) {
                if ((float10)*(byte *)(iVar4 + 499) < fVar21) {
                  fVar21 = (float10)*(byte *)(iVar4 + 499);
                }
              }
              else {
                fVar22 = (fVar20 - (float10)uVar10 * (float10)_DAT_638b3140) -
                         (float10)_DAT_638b3198;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 499);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar22) * (float10)local_c._4_4_ -
                                fVar22 * (float10)_DAT_638b31c0);
                if ((float10)dVar1 < fVar21) {
                  fVar21 = (float10)dVar1;
                }
              }
              local_a4 = uVar10;
              if ((float10)_DAT_638b3118 <= fVar20) {
                bVar2 = *(byte *)(iVar4 + 500);
                if (fVar21 < (float10)bVar2) goto LAB_638a48b6;
              }
              else {
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 500);
                dVar1 = (double)(((float10)_DAT_638b31b8 - -fVar20) * (float10)local_c._4_4_ -
                                -fVar20 * (float10)_DAT_638b31a8);
                if (fVar21 < (float10)dVar1) {
                  fVar21 = (float10)dVar1;
                }
              }
            }
            else {
              uStack_90 = 0;
              if (fVar20 <= (float10)uVar10 * (float10)_DAT_638b3140 - (float10)_DAT_638b31a0) {
                if ((float10)*(byte *)(iVar4 + 499) < fVar21) {
                  fVar21 = (float10)*(byte *)(iVar4 + 499);
                }
              }
              else {
                fVar22 = ((fVar20 - (float10)uVar10 * (float10)_DAT_638b3140) -
                         (float10)_DAT_638b31a8) * (float10)_DAT_638b31b0;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 499);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar22) * (float10)local_c._4_4_ -
                                fVar22 * (float10)_DAT_638b31c0);
                if ((float10)dVar1 < fVar21) {
                  fVar21 = (float10)dVar1;
                }
              }
              local_94 = uVar10;
              if ((float10)_DAT_638b31c8 <= fVar20) {
                bVar2 = *(byte *)(iVar4 + 500);
                if (fVar21 < (float10)bVar2) {
LAB_638a48b6:
                  fVar21 = (float10)bVar2;
                }
              }
              else {
                fVar20 = (-fVar20 - (float10)_DAT_638b31d0) * (float10)_DAT_638b31d8;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 500);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar20) * (float10)local_c._4_4_ -
                                fVar20 * (float10)_DAT_638b31a8);
                if (fVar21 < (float10)dVar1) {
                  fVar21 = (float10)dVar1;
                }
              }
            }
            fVar20 = fVar21;
            if ((float10)_DAT_638b3150 < fVar21) {
              fVar20 = (float10)_DAT_638b3150;
            }
            if ((float10)_DAT_638b31a0 <= fVar20) {
              if ((float10)_DAT_638b3150 < fVar21) {
                fVar21 = (float10)_DAT_638b3150;
              }
            }
            else {
              fVar21 = (float10)_DAT_638b31a0;
            }
            *(undefined8 *)(iVar4 + 0x1da) = *(undefined8 *)(iVar4 + 0x1d2);
            *(double *)(iVar4 + 0x1d2) = (double)fVar21;
            fVar20 = fVar21;
            if ((float10)*(double *)(iVar4 + 0x1da) <= fVar21) {
              fVar20 = (float10)*(double *)(iVar4 + 0x1da);
            }
            fVar22 = fVar21;
            if ((float10)*(double *)(iVar4 + 0x1da) <= fVar21) {
              fVar22 = (float10)*(double *)(iVar4 + 0x1da);
            }
            bVar19 = (float10)*(double *)(iVar4 + 0x1da) <= fVar21;
            if (fVar20 - (float10)_DAT_638b3198 <= fVar22 * (float10)_DAT_638b31e0) {
              fVar20 = fVar21;
              if (bVar19) {
                fVar20 = (float10)*(double *)(iVar4 + 0x1da);
              }
              fVar20 = fVar20 * (float10)_DAT_638b31e0;
            }
            else if (bVar19) {
              fVar20 = (float10)*(double *)(iVar4 + 0x1da) - (float10)_DAT_638b3198;
            }
            else {
              fVar20 = fVar21 - (float10)_DAT_638b3198;
            }
            fVar22 = (float10)_DAT_638b3150;
            *(double *)(iVar4 + 0x1e2) = (double)fVar20;
            if (fVar22 < fVar20) {
              fVar20 = (float10)_DAT_638b3150;
            }
            local_20 = (double)fVar20;
            *(double *)(iVar4 + 0x1e2) = (double)fVar20;
            if (*(int *)(iVar4 + 0x1ca) == 0) {
              *(double *)(iVar4 + 0x1ea) = (double)fVar21;
            }
            fVar22 = (float10)*(byte *)(iVar4 + 0x244);
            fVar20 = fVar21;
            if (fVar22 < fVar21) {
              fVar20 = fVar22;
            }
            bVar2 = *(byte *)(iVar4 + 0x241);
            if ((float10)bVar2 <= fVar20) {
              if (fVar22 < fVar21) {
                fVar21 = (float10)*(byte *)(iVar4 + 0x244);
              }
            }
            else {
              fVar21 = (float10)bVar2;
            }
            local_c._0_4_ = SUB84((double)bVar2,0);
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x246);
            dVar1 = (double)local_c._4_4_;
            *(double *)(iVar4 + 0x1d2) = (double)fVar21;
            dVar6 = dVar1;
            if (*(double *)(iVar4 + 0x1ea) <= dVar1) {
              dVar6 = *(double *)(iVar4 + 0x1ea);
            }
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x243);
            local_34 = (double)local_c._4_4_;
            dVar5 = local_34;
            if ((local_34 <= dVar6) && (dVar5 = dVar1, *(double *)(iVar4 + 0x1ea) <= dVar1)) {
              dVar5 = *(double *)(iVar4 + 0x1ea);
            }
            *(double *)(iVar4 + 0x1ea) = dVar5;
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x245);
            dVar6 = (double)local_c._4_4_;
            dVar1 = local_20;
            if (dVar6 < local_20) {
              dVar1 = dVar6;
            }
            local_c = (ulonglong)CONCAT14(*(byte *)(iVar4 + 0x242),(undefined4)local_c);
            uVar8 = local_c;
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x242);
            local_18 = (double)local_c._4_4_;
            dVar5 = local_18;
            local_c = uVar8;
            if ((local_18 <= dVar1) && (dVar5 = dVar6, local_20 <= dVar6)) {
              dVar5 = local_20;
            }
          }
          else {
            fVar22 = (float10)(int)(local_20._4_4_ - local_c._4_4_) /
                     ((float10)(int)local_c._4_4_ * (float10)*(double *)(iVar4 + 0x1f9));
            if ((fVar21 < (float10)_DAT_638b3118) && ((float10)_DAT_638b3118 < fVar22)) {
              fVar22 = (float10)_DAT_638b3118;
            }
            uVar10 = *(uint *)(iVar4 + 0x102);
            fVar21 = (fVar21 - (float10)_DAT_638b3198) * (fVar22 - (float10)_DAT_638b3198) *
                     (float10)*(double *)(iVar4 + 0x1d2);
            if (*(int *)(iVar4 + 0x235) == 0) {
              uStack_80 = 0;
              if (fVar20 <= (float10)uVar10 * (float10)_DAT_638b3140 - (float10)_DAT_638b31b8) {
                if ((float10)*(byte *)(iVar4 + 499) < fVar21) {
                  fVar21 = (float10)*(byte *)(iVar4 + 499);
                }
              }
              else {
                fVar22 = (fVar20 - (float10)uVar10 * (float10)_DAT_638b3140) -
                         (float10)_DAT_638b3198;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 499);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar22) * (float10)local_c._4_4_ -
                                fVar22 * (float10)_DAT_638b31c0);
                if ((float10)dVar1 < fVar21) {
                  fVar21 = (float10)dVar1;
                }
              }
              local_84 = uVar10;
              if ((float10)_DAT_638b3118 <= fVar20) {
                bVar2 = *(byte *)(iVar4 + 500);
                if (fVar21 < (float10)bVar2) goto LAB_638a42bf;
              }
              else {
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 500);
                dVar1 = (double)(((float10)_DAT_638b31b8 - -fVar20) * (float10)local_c._4_4_ -
                                -fVar20 * (float10)_DAT_638b31a8);
                if (fVar21 < (float10)dVar1) {
                  fVar21 = (float10)dVar1;
                }
              }
            }
            else {
              uStack_70 = 0;
              if (fVar20 <= (float10)uVar10 * (float10)_DAT_638b3140 - (float10)_DAT_638b31a0) {
                if ((float10)*(byte *)(iVar4 + 499) < fVar21) {
                  fVar21 = (float10)*(byte *)(iVar4 + 499);
                }
              }
              else {
                fVar22 = ((fVar20 - (float10)uVar10 * (float10)_DAT_638b3140) -
                         (float10)_DAT_638b31a8) * (float10)_DAT_638b31b0;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 499);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar22) * (float10)local_c._4_4_ -
                                fVar22 * (float10)_DAT_638b31c0);
                if ((float10)dVar1 < fVar21) {
                  fVar21 = (float10)dVar1;
                }
              }
              local_74 = uVar10;
              if ((float10)_DAT_638b31c8 <= fVar20) {
                bVar2 = *(byte *)(iVar4 + 500);
                if (fVar21 < (float10)bVar2) {
LAB_638a42bf:
                  fVar21 = (float10)bVar2;
                }
              }
              else {
                fVar20 = (-fVar20 - (float10)_DAT_638b31d0) * (float10)_DAT_638b31d8;
                local_c._4_4_ = (uint)*(byte *)(iVar4 + 500);
                dVar1 = (double)(((float10)_DAT_638b31b8 - fVar20) * (float10)local_c._4_4_ -
                                fVar20 * (float10)_DAT_638b31a8);
                if (fVar21 < (float10)dVar1) {
                  fVar21 = (float10)dVar1;
                }
              }
            }
            fVar20 = fVar21;
            if ((float10)_DAT_638b3150 < fVar21) {
              fVar20 = (float10)_DAT_638b3150;
            }
            if ((float10)_DAT_638b31a0 <= fVar20) {
              if ((float10)_DAT_638b3150 < fVar21) {
                fVar21 = (float10)_DAT_638b3150;
              }
            }
            else {
              fVar21 = (float10)_DAT_638b31a0;
            }
            *(undefined8 *)(iVar4 + 0x1da) = *(undefined8 *)(iVar4 + 0x1d2);
            *(double *)(iVar4 + 0x1d2) = (double)fVar21;
            fVar20 = fVar21;
            if ((float10)*(double *)(iVar4 + 0x1da) <= fVar21) {
              fVar20 = (float10)*(double *)(iVar4 + 0x1da);
            }
            fVar22 = fVar21;
            if ((float10)*(double *)(iVar4 + 0x1da) <= fVar21) {
              fVar22 = (float10)*(double *)(iVar4 + 0x1da);
            }
            bVar19 = (float10)*(double *)(iVar4 + 0x1da) <= fVar21;
            if (fVar20 - (float10)_DAT_638b3198 <= fVar22 * (float10)_DAT_638b31e0) {
              fVar20 = fVar21;
              if (bVar19) {
                fVar20 = (float10)*(double *)(iVar4 + 0x1da);
              }
              fVar20 = fVar20 * (float10)_DAT_638b31e0;
            }
            else if (bVar19) {
              fVar20 = (float10)*(double *)(iVar4 + 0x1da) - (float10)_DAT_638b3198;
            }
            else {
              fVar20 = fVar21 - (float10)_DAT_638b3198;
            }
            fVar22 = (float10)_DAT_638b3150;
            *(double *)(iVar4 + 0x1e2) = (double)fVar20;
            if (fVar22 < fVar20) {
              fVar20 = (float10)_DAT_638b3150;
            }
            local_20 = (double)fVar20;
            *(double *)(iVar4 + 0x1e2) = (double)fVar20;
            if (*(int *)(iVar4 + 0x1ca) == 0) {
              if ((float10)_DAT_638b31e8 <= fVar21) {
                bVar2 = *(byte *)(iVar4 + 0x1f2);
                if ((float10)_DAT_638b31f0 <= fVar21) {
                  bVar3 = bVar2;
                  if (0x1f < bVar2) {
                    bVar3 = 0x1f;
                  }
                  fVar20 = fVar21 - (float10)_DAT_638b31a0;
                  if (fVar21 - (float10)_DAT_638b31a0 <= (float10)bVar3) {
                    if (0x1f < bVar2) {
                      bVar2 = 0x1f;
                    }
                    fVar20 = (float10)bVar2;
                  }
                }
                else {
                  bVar3 = bVar2;
                  if (0x1f < bVar2) {
                    bVar3 = 0x1f;
                  }
                  fVar20 = fVar21 - (float10)_DAT_638b31b8;
                  if (fVar21 - (float10)_DAT_638b31b8 <= (float10)bVar3) {
                    if (bVar2 < 0x20) {
                      local_c._4_4_ = (uint)bVar2;
                      fVar20 = (float10)local_c._4_4_;
                    }
                    else {
                      fVar20 = (float10)0x1f;
                    }
                  }
                }
              }
              else {
                bVar2 = *(byte *)(iVar4 + 0x1f2);
                bVar3 = bVar2;
                if (0x1f < bVar2) {
                  bVar3 = 0x1f;
                }
                fVar20 = fVar21;
                if (fVar21 <= (float10)bVar3) {
                  if (bVar2 < 0x20) {
                    local_c._4_4_ = (uint)bVar2;
                    fVar20 = (float10)local_c._4_4_;
                  }
                  else {
                    fVar20 = (float10)0x1f;
                  }
                }
              }
              *(double *)(iVar4 + 0x1ea) = (double)fVar20;
            }
            bVar2 = *(byte *)(iVar4 + 0x244);
            fVar22 = (float10)bVar2;
            local_34 = (double)bVar2;
            fVar20 = fVar21;
            if (fVar22 < fVar21) {
              fVar20 = fVar22;
            }
            bVar3 = *(byte *)(iVar4 + 0x241);
            if ((float10)bVar3 <= fVar20) {
              if (fVar22 < fVar21) {
                fVar21 = (float10)bVar2;
              }
            }
            else {
              fVar21 = (float10)bVar3;
            }
            *(double *)(iVar4 + 0x1d2) = (double)fVar21;
            if (*(int *)(iVar4 + 0x1ca) == 0) {
              local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x246);
              dVar6 = (double)local_c._4_4_;
              dVar1 = dVar6;
              if (*(double *)(iVar4 + 0x1ea) <= dVar6) {
                dVar1 = *(double *)(iVar4 + 0x1ea);
              }
              local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x243);
              local_34 = (double)local_c._4_4_;
              dVar5 = local_34;
              if ((local_34 <= dVar1) && (dVar5 = dVar6, *(double *)(iVar4 + 0x1ea) <= dVar6)) {
                dVar5 = *(double *)(iVar4 + 0x1ea);
              }
              *(double *)(iVar4 + 0x1ea) = dVar5;
            }
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x245);
            dVar6 = (double)local_c._4_4_;
            dVar1 = local_20;
            if (dVar6 < local_20) {
              dVar1 = dVar6;
            }
            local_c = (ulonglong)CONCAT14(*(byte *)(iVar4 + 0x242),SUB84((double)bVar3,0));
            uVar8 = local_c;
            local_c._4_4_ = (uint)*(byte *)(iVar4 + 0x242);
            local_18 = (double)local_c._4_4_;
            dVar5 = local_18;
            local_c = uVar8;
            if ((local_18 <= dVar1) && (dVar5 = dVar6, local_20 <= dVar6)) {
              dVar5 = local_20;
            }
          }
          *(double *)(iVar4 + 0x1e2) = dVar5;
          if (*(int *)(iVar4 + 0x239) == 0) {
            if (*(int *)(iVar4 + 0x23d) != 0) {
              if (local_3c == 0) {
LAB_638a4bcf:
                uVar10 = ftol();
              }
              else {
                local_b4 = *(uint *)(iVar4 + 0x1ce);
                uStack_b0 = 0;
                if (_DAT_638b31f8 /
                    (*(double *)(iVar4 + 0x1ba) * *(double *)(iVar4 + 0x1d2) +
                    (_DAT_638b3150 - *(double *)(iVar4 + 0x1d2)) * *(double *)(iVar4 + 0x1b2)) <=
                    (double)local_b4) goto LAB_638a4bcf;
                uVar10 = ftol();
              }
              *(uint *)(iVar4 + 0x1ce) = uVar10;
              local_c4 = uVar10;
              if (4999 < uVar10) {
                local_c4 = 5000;
              }
              uStack_c0 = 0;
              if (_DAT_638b30f0 / *(double *)(iVar4 + 0x1a6) <= (double)local_c4) {
                if (4999 < uVar10) {
                  uVar10 = 5000;
                }
                uStack_d0 = 0;
                local_d4 = uVar10;
              }
              uVar10 = ftol();
              fVar20 = (float10)_DAT_638b3200;
              *(uint *)(iVar4 + 0x1ce) = uVar10;
              if (extraout_ST0_00 < (float10)local_2c * fVar20 - (float10)_DAT_638b3174) {
                uVar16 = *(uint *)(iVar4 + 0x1f5);
                if (uVar10 < *(uint *)(iVar4 + 0x1f5)) {
                  uVar16 = uVar10;
                }
                *(uint *)(iVar4 + 0x1ce) = uVar16;
              }
            }
          }
          else {
            uVar15 = ftol();
            *(undefined4 *)(iVar4 + 0x1ce) = uVar15;
          }
          if (*(int *)(iVar4 + 0x253) == 0) {
            local_e4 = *(uint *)(iVar4 + 0x1ce);
            uStack_e0 = 0;
            local_18 = (double)local_e4;
            iVar17 = *(int *)(iVar4 + 0x24b);
            uStack_f0 = 0;
            local_f4 = iVar17 + 1;
            uVar10 = ftol();
            if (iVar17 == 1) {
              if (*(uint *)(iVar4 + 0x24f) < uVar10) {
                *(undefined4 *)(iVar4 + 0x247) = 0;
              }
              else {
LAB_638a4d48:
                *(undefined4 *)(iVar4 + 0x247) = 1;
              }
            }
            else if (iVar17 == 2) {
              if ((*(uint *)(iVar4 + 0x24f) * 5) / 3 < uVar10) {
                *(undefined4 *)(iVar4 + 0x247) = 0;
              }
              else if (*(uint *)(iVar4 + 0x24f) < uVar10) {
                *(undefined4 *)(iVar4 + 0x247) = 1;
              }
              else {
                *(undefined4 *)(iVar4 + 0x247) = 2;
              }
            }
            else if (*(uint *)(iVar4 + 0x24f) * 2 < uVar10) {
              *(undefined4 *)(iVar4 + 0x247) = 0;
            }
            else {
              if (*(uint *)(iVar4 + 0x24f) < uVar10) goto LAB_638a4d48;
              *(undefined4 *)(iVar4 + 0x247) = 3;
            }
          }
          *(undefined4 *)(iVar4 + 0x215) = *(undefined4 *)(iVar4 + 0x24b);
          iVar17 = *(int *)(iVar4 + 0x247);
          if (iVar17 == 0) {
            *(undefined4 *)(iVar4 + 0x221) = 1;
            *(undefined4 *)(iVar4 + 0x21d) = 1;
            *(undefined4 *)(iVar4 + 0x219) = 1;
          }
          else if (iVar17 == 1) {
            *(undefined4 *)(iVar4 + 0x221) = 0;
            *(undefined4 *)(iVar4 + 0x21d) = 1;
            *(undefined4 *)(iVar4 + 0x219) = 0;
          }
          else {
            *(undefined4 *)(iVar4 + 0x221) = 0;
            *(undefined4 *)(iVar4 + 0x21d) = 0;
            if (iVar17 == 2) {
              *(undefined4 *)(iVar4 + 0x219) = 1;
            }
            else {
              *(undefined4 *)(iVar4 + 0x219) = 0;
            }
          }
        }
        uVar10 = *(uint *)(iVar4 + 0x25b);
        if ((uVar10 != 0) && (uVar10 < 4)) {
          iVar17 = ftol();
          if (uVar10 == 1) {
            *(undefined4 *)(iVar4 + 0x25f) = *(undefined4 *)(&DAT_638b4020 + iVar17 * 4);
          }
          else if (uVar10 == 2) {
            *(undefined4 *)(iVar4 + 0x25f) = *(undefined4 *)(&DAT_638b4120 + iVar17 * 4);
          }
          else if (uVar10 == 3) {
            *(undefined4 *)(iVar4 + 0x25f) = *(undefined4 *)(&DAT_638b4220 + iVar17 * 4);
          }
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < (int)(uint)*(ushort *)(local_28 + 0xf4));
  }
  return 0;
}


