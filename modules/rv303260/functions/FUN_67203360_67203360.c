/* Module: rv303260.dll
   Function: FUN_67203360
   Address: 67203360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_67203360(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  bool bVar21;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar22;
  float10 fVar23;
  float10 extraout_ST1;
  float10 fVar24;
  FILE *_File;
  byte local_22c;
  undefined4 local_22b;
  undefined1 local_227;
  undefined1 local_226;
  uint local_128;
  undefined4 uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  uint local_28;
  double local_24;
  double local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_40 = 1;
  local_3c = 0;
  local_34 = param_1;
  if (*(short *)(param_1 + 0xf4) != 0) {
    do {
      iVar5 = *(int *)(local_34 + 8 + local_3c * 4);
      if (*(int *)(iVar5 + 0xee) == 5) {
        iVar19 = *(int *)(local_34 + 0xac);
        uVar12 = *(uint *)(iVar5 + 0x267);
        if (uVar12 < iVar19 + 10U) {
          uVar12 = (uVar12 - iVar19) - 0xb;
        }
        else {
          uVar12 = (uVar12 - iVar19) - 10;
        }
        if ((uVar12 < 0x5265c01) || (*(int *)(iVar5 + 0x263) == 0)) {
          if ((*(int *)(local_34 + 0xac) == *(int *)(iVar5 + 0x26b)) &&
             (*(FILE **)(iVar5 + 0x263) != (FILE *)0x0)) {
            lVar15 = ftell(*(FILE **)(iVar5 + 0x263));
            iVar19 = FUN_67205dc0((byte *)s_FrameSkip_67214510,&local_38,*(FILE **)(iVar5 + 0x263));
            if (iVar19 == 0) {
              fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
              iVar19 = FUN_67205dc0((byte *)s_FrameTime_67214504,&local_38,*(FILE **)(iVar5 + 0x263)
                                   );
              if (iVar19 == 0) {
                *(undefined4 *)(iVar5 + 0x231) = 1;
                fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
                iVar19 = FUN_67205dc0((byte *)s_MaxSuggestedFrameTime_672144ec,&local_38,
                                      *(FILE **)(iVar5 + 0x263));
                if (iVar19 != 0) {
                  *(int *)(iVar5 + 0x1ed) = local_38;
                }
              }
              else {
                *(undefined4 *)(iVar5 + 0x231) = 0;
                *(int *)(iVar5 + 0x1c6) = local_38;
              }
            }
            else {
              local_78 = local_38 + 1;
              uStack_74 = 0;
              *(undefined4 *)(iVar5 + 0x231) = 0;
              uVar17 = ftol();
              *(undefined4 *)(iVar5 + 0x1c6) = uVar17;
            }
            fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          }
          goto LAB_67203b00;
        }
        local_22c = DAT_67216748;
        puVar20 = &local_22b;
        for (iVar19 = 0x40; iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar20 = 0;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = 0;
        *(undefined1 *)((int)puVar20 + 2) = 0;
        do {
          pcVar13 = fgets((char *)&local_22c,0x104,*(FILE **)(iVar5 + 0x263));
          if (pcVar13 == (char *)0x0) {
            *(undefined4 *)(iVar5 + 0xee) = 6;
            _File = *(FILE **)(iVar5 + 0x263);
LAB_6720353f:
            fclose(_File);
            *(undefined4 *)(iVar5 + 0x263) = 0;
            break;
          }
          local_226 = 0;
          pcVar13 = s_Stream_672145c8;
          pbVar14 = &local_22c;
          do {
            bVar4 = *pbVar14;
            bVar21 = bVar4 < (byte)*pcVar13;
            if (bVar4 != *pcVar13) {
LAB_6720345a:
              iVar19 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_6720345f;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar14[1];
            bVar21 = bVar4 < (byte)pcVar13[1];
            if (bVar4 != pcVar13[1]) goto LAB_6720345a;
            pbVar14 = pbVar14 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar4 != 0);
          iVar19 = 0;
LAB_6720345f:
          if (iVar19 == 0) {
LAB_6720351b:
            *(undefined4 *)(iVar5 + 0xee) = 6;
            _File = *(FILE **)(iVar5 + 0x263);
            goto LAB_6720353f;
          }
          pcVar13 = s_stream_672145c0;
          pbVar14 = &local_22c;
          do {
            bVar4 = *pbVar14;
            bVar21 = bVar4 < (byte)*pcVar13;
            if (bVar4 != *pcVar13) {
LAB_67203496:
              iVar19 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_6720349b;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar14[1];
            bVar21 = bVar4 < (byte)pcVar13[1];
            if (bVar4 != pcVar13[1]) goto LAB_67203496;
            pbVar14 = pbVar14 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar4 != 0);
          iVar19 = 0;
LAB_6720349b:
          if (iVar19 == 0) goto LAB_6720351b;
          local_227 = 0;
          pcVar13 = s_Scene_672145b8;
          pbVar14 = &local_22c;
          do {
            bVar4 = *pbVar14;
            bVar21 = bVar4 < (byte)*pcVar13;
            if (bVar4 != *pcVar13) {
LAB_672034d5:
              iVar19 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_672034da;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar14[1];
            bVar21 = bVar4 < (byte)pcVar13[1];
            if (bVar4 != pcVar13[1]) goto LAB_672034d5;
            pbVar14 = pbVar14 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar4 != 0);
          iVar19 = 0;
LAB_672034da:
          if (iVar19 == 0) break;
          pcVar13 = s_scene_672145b0;
          pbVar14 = &local_22c;
          do {
            bVar4 = *pbVar14;
            bVar21 = bVar4 < (byte)*pcVar13;
            if (bVar4 != *pcVar13) {
LAB_6720350d:
              iVar19 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_67203512;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar14[1];
            bVar21 = bVar4 < (byte)pcVar13[1];
            if (bVar4 != pcVar13[1]) goto LAB_6720350d;
            pbVar14 = pbVar14 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar4 != 0);
          iVar19 = 0;
LAB_67203512:
        } while (iVar19 != 0);
        if (*(int *)(iVar5 + 0xee) == 5) {
          lVar15 = ftell(*(FILE **)(iVar5 + 0x263));
          iVar19 = FUN_67205dc0((byte *)s_StartTime_672145a4,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 == 0) {
            *(undefined4 *)(iVar5 + 0x26b) = 0x7fffffff;
          }
          else {
            *(uint *)(iVar5 + 0x26b) = local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_EndTime_6721459c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 == 0) {
            *(undefined4 *)(iVar5 + 0x267) = 0x7fffffff;
          }
          else {
            *(uint *)(iVar5 + 0x267) = local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_KeyQP_67214594,(int *)&local_28,*(FILE **)(iVar5 + 0x263))
          ;
          if (iVar19 != 0) {
            uStack_94 = 0;
            local_98 = local_28;
            *(double *)(iVar5 + 0x1e2) = (double)local_28;
            *(undefined4 *)(iVar5 + 0x1c2) = 1;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MinQP_6721458c,(int *)&local_28,*(FILE **)(iVar5 + 0x263))
          ;
          if (iVar19 != 0) {
            uStack_54 = 0;
            local_c8 = local_28;
            local_58 = local_28 + 1;
            uStack_c4 = 0;
            *(char *)(iVar5 + 0x239) = (char)local_28;
            *(char *)(iVar5 + 0x23b) = (char)local_28;
            local_30 = (double)CONCAT44((float)local_28 * _DAT_67213160,(undefined4)local_30);
            uVar11 = ftol();
            *(undefined1 *)(iVar5 + 0x23a) = uVar11;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MaxQP_67214584,(int *)&local_28,*(FILE **)(iVar5 + 0x263))
          ;
          if (iVar19 != 0) {
            local_118 = local_28;
            *(char *)(iVar5 + 0x23c) = (char)local_28;
            local_68 = local_28 + 1;
            *(char *)(iVar5 + 0x23e) = (char)local_28;
            uStack_64 = 0;
            uStack_114 = 0;
            local_30 = (double)CONCAT44((float)local_28 * _DAT_67213160,(undefined4)local_30);
            uVar11 = ftol();
            *(undefined1 *)(iVar5 + 0x23d) = uVar11;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MinKeyQP_67214578,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(undefined1 *)(iVar5 + 0x23b) = (undefined1)local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MaxKeyQP_6721456c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(undefined1 *)(iVar5 + 0x23e) = (undefined1)local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MaxSuggestedQP_6721455c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(undefined1 *)(iVar5 + 0x1eb) = (undefined1)local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_MinSuggestedQP_6721454c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(undefined1 *)(iVar5 + 0x1ec) = (undefined1)local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_NumBFrames_67214540,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(undefined4 *)(iVar5 + 0x24b) = 1;
            *(uint *)(iVar5 + 0x23f) = local_28;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_RPRSize_67214538,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            uVar12 = local_28;
            if ((local_28 == 0) &&
               (((uint)*(ushort *)(iVar5 + 0x9e) < *(uint *)(local_34 + 0xf6) ||
                ((uint)*(ushort *)(iVar5 + 0xa0) < *(uint *)(local_34 + 0xfa))))) {
              uVar12 = *(uint *)(iVar5 + 0x24f);
            }
            iVar19 = uVar12 - 1;
            *(int *)(iVar5 + 0x201) = iVar19;
            if (iVar19 == -1) {
              *(undefined4 *)(iVar5 + 0xe2) = *(undefined4 *)(local_34 + 0xf6);
              *(undefined4 *)(iVar5 + 0xe6) = *(undefined4 *)(local_34 + 0xfa);
            }
            else {
              *(undefined4 *)(iVar5 + 0xe2) = *(undefined4 *)(local_34 + 0x2de + iVar19 * 4);
              *(undefined4 *)(iVar5 + 0xe6) =
                   *(undefined4 *)(local_34 + 0x2fe + *(int *)(iVar5 + 0x201) * 4);
            }
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_ForceKeys_6721452c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            *(uint *)(iVar5 + 0x17e) = (uint)(local_28 != 0);
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
          iVar19 = FUN_67205dc0((byte *)s_KeyFrameRate_6721451c,(int *)&local_28,
                                *(FILE **)(iVar5 + 0x263));
          if (iVar19 != 0) {
            if (local_28 != 0) {
              *(uint *)(iVar5 + 0x17a) = local_28;
              *(undefined4 *)(iVar5 + 0x17e) = 1;
              fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
              goto LAB_67203b1d;
            }
            *(undefined4 *)(iVar5 + 0x17a) = 0x7fffffff;
            *(undefined4 *)(iVar5 + 0x17e) = 0;
          }
          fseek(*(FILE **)(iVar5 + 0x263),lVar15,0);
        }
      }
      else {
LAB_67203b00:
        if ((*(int *)(iVar5 + 0x18e) != 0) && (*(int *)(iVar5 + 0x186) == 1)) {
          *(undefined4 *)(iVar5 + 0x1c2) = 0;
        }
      }
LAB_67203b1d:
      if ((*(int *)(iVar5 + 0x235) == 0) || (*(int *)(iVar5 + 0xee) == 5)) {
        iVar19 = *(int *)(iVar5 + 0x18e);
        if (iVar19 != 0) {
          uVar12 = *(uint *)(iVar5 + 0x126);
          uVar18 = *(uint *)(iVar5 + 0x12a);
          if (uVar12 < uVar18) {
            local_d8 = (uVar12 - uVar18) + -1;
          }
          else {
            local_d8 = uVar12 - uVar18;
          }
          local_88 = *(undefined4 *)(iVar5 + 0xfa);
          uStack_d4 = 0;
          uStack_84 = 0;
          iVar16 = ftol();
          if (*(int *)(iVar5 + 0x192) == 1) {
            iVar19 = iVar19 + 0x40;
          }
          else {
            iVar19 = iVar19 + *(int *)(iVar5 + 0x192) * 0x58;
          }
          local_30 = (double)CONCAT44(iVar19,(undefined4)local_30);
          *(int *)(iVar5 + 0x1a6) = *(int *)(iVar5 + 0x1a6) + (iVar19 - iVar16);
          if (*(int *)(iVar5 + 0xfe) != 0) {
            if ((*(int *)(iVar5 + 0x186) == 1) && (*(int *)(iVar5 + 0x219) < 0)) {
              *(int *)(iVar5 + 0x219) = iVar19;
            }
            else {
              uStack_104 = 0;
              local_108 = *(int *)(iVar5 + 0xfe);
              iVar19 = ftol();
              *(int *)(iVar5 + 0x219) = *(int *)(iVar5 + 0x219) + iVar19;
            }
          }
        }
        if ((*(int *)(iVar5 + 0x186) == 1) || (*(int *)(iVar5 + 0x186) == 2)) {
          uVar12 = *(uint *)(iVar5 + 0x126);
          uVar18 = *(uint *)(iVar5 + 0xfa);
          local_30 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x18a),(undefined4)local_30);
          local_48 = uVar12 - *(int *)(iVar5 + 0x122);
          uStack_44 = 0;
          uStack_e4 = 0;
          *(undefined4 *)(iVar5 + 0x18a) = 0;
          *(uint *)(iVar5 + 0x122) = uVar12;
          local_24 = (double)uVar18;
          local_e8 = uVar18;
          iVar19 = ftol();
          local_c = (double)CONCAT44(iVar19,(undefined4)local_c);
          dVar3 = (double)*(int *)(iVar5 + 0x1a6) / local_24;
          if ((*(int *)(iVar5 + 0xea) == 2) || (*(int *)(iVar5 + 0xea) == 3)) {
            iVar19 = ftol();
            if (extraout_ST0_00 < (float10)_DAT_67213170) {
              *(uint *)(iVar5 + 0x1a6) = uVar18 * -5;
            }
            local_120 = *(uint *)(iVar5 + 0x102);
            uStack_11c = 0;
            local_c = (double)CONCAT44((float)local_120,(undefined4)local_c);
            fVar24 = ((extraout_ST0_00 - (float10)_DAT_672131d8) * (float10)_DAT_67213180) /
                     (float10)local_120;
            local_14 = (double)CONCAT44(local_30._4_4_ - iVar19,(undefined4)local_14);
            fVar9 = _DAT_6721320c;
            if (_DAT_67213120 < (double)(extraout_ST0_00 - (float10)_DAT_672131d8)) {
              fVar9 = _DAT_67213208;
            }
            fVar22 = ((float10)(int)(local_30._4_4_ - iVar19) /
                      ((float10)iVar19 * (float10)*(double *)(iVar5 + 0x1f1)) -
                     (float10)_DAT_672131b0) *
                     ((float10)fVar9 * fVar24 * (float10)(double)fVar24 - (float10)_DAT_672131b0) *
                     (float10)*(double *)(iVar5 + 0x1e2);
            fVar24 = fVar22;
            if ((float10)_DAT_67213150 < fVar22) {
              fVar24 = (float10)_DAT_67213150;
            }
            if ((float10)_DAT_672131d8 <= fVar24) {
              fVar24 = fVar22;
              if ((float10)_DAT_67213150 < fVar22) {
                fVar24 = (float10)_DAT_67213150;
              }
            }
            else {
              fVar24 = (float10)_DAT_672131d8;
            }
            local_1c = (double)fVar24;
            fVar23 = (float10)_DAT_67213150;
            *(double *)(iVar5 + 0x1ca) = (double)fVar24;
            fVar24 = fVar22;
            if (fVar23 < fVar22) {
              fVar24 = (float10)_DAT_67213150;
            }
            if ((float10)_DAT_672131d8 <= fVar24) {
              if ((float10)_DAT_67213150 < fVar22) {
                fVar22 = (float10)_DAT_67213150;
              }
            }
            else {
              fVar22 = (float10)_DAT_672131d8;
            }
            fVar24 = (float10)_DAT_67213120;
            *(double *)(iVar5 + 0x1e2) = (double)fVar22;
            if ((fVar24 < extraout_ST0_00) &&
               (extraout_ST0_00 < (float10)local_120 * (float10)_DAT_67213200)) {
              local_14._4_4_ = (uint)*(byte *)(iVar5 + 0x23c);
              dVar7 = (double)local_14._4_4_;
              dVar3 = local_1c;
              if (dVar7 < local_1c) {
                dVar3 = dVar7;
              }
              local_14._4_4_ = (uint)*(byte *)(iVar5 + 0x239);
              dVar2 = (double)local_14._4_4_;
              if ((dVar2 <= dVar3) && (dVar2 = dVar7, local_1c <= dVar7)) {
                dVar2 = local_1c;
              }
              bVar4 = *(byte *)(iVar5 + 0x23e);
              local_1c = (double)bVar4;
              *(double *)(iVar5 + 0x1ca) = dVar2;
              fVar24 = fVar22;
              if ((float10)bVar4 < fVar22) {
                fVar24 = (float10)bVar4;
              }
              if ((float10)*(byte *)(iVar5 + 0x23b) <= fVar24) {
                if ((float10)bVar4 < fVar22) {
                  fVar22 = (float10)bVar4;
                }
              }
              else {
                fVar22 = (float10)*(byte *)(iVar5 + 0x23b);
              }
              *(double *)(iVar5 + 0x1e2) = (double)fVar22;
              local_14._4_4_ = (uint)*(byte *)(iVar5 + 0x23d);
              dVar3 = (double)local_14._4_4_;
              dVar7 = dVar3;
              if (*(double *)(iVar5 + 0x1da) <= dVar3) {
                dVar7 = *(double *)(iVar5 + 0x1da);
              }
              local_14._4_4_ = (uint)*(byte *)(iVar5 + 0x23a);
              local_14 = (double)local_14._4_4_;
              if (local_14 <= dVar7) {
                if (*(double *)(iVar5 + 0x1da) <= dVar3) {
                  dVar3 = *(double *)(iVar5 + 0x1da);
                }
                *(double *)(iVar5 + 0x1da) = dVar3;
              }
              else {
                *(double *)(iVar5 + 0x1da) = local_14;
              }
            }
            local_24 = _DAT_672130f0 / *(double *)(iVar5 + 0x19e);
            uVar17 = ftol();
            fVar24 = (float10)_DAT_67213120;
            *(undefined4 *)(iVar5 + 0x1c6) = uVar17;
            if (extraout_ST1 < fVar24) {
              uVar12 = *(uint *)(iVar5 + 0x1c6);
              iVar19 = ftol();
              if (200U - iVar19 < uVar12) {
                iVar19 = ftol();
                *(uint *)(iVar5 + 0x1c6) = uVar12 - iVar19;
              }
              else {
                *(undefined4 *)(iVar5 + 0x1c6) = 200;
              }
            }
          }
          else {
            if (((dVar3 < _DAT_67213170) && (*(int *)(iVar5 + 0x186) == 1)) &&
               (*(int *)(iVar5 + 0x225) == 0)) {
              *(uint *)(iVar5 + 0x1a6) = uVar18 * -5;
            }
            if ((*(int *)(iVar5 + 0xee) != 4) ||
               (dVar7 = _DAT_67213120, *(int *)(iVar5 + 0x225) != 0)) {
              local_a8 = *(uint *)(iVar5 + 0x102);
              uStack_a4 = 0;
              dVar7 = (double)local_a8;
              if (_DAT_67213178 < (double)local_a8) {
                dVar7 = _DAT_67213178;
              }
              dVar7 = (dVar3 * _DAT_67213180) / dVar7;
              dVar2 = _DAT_67213190;
              if (_DAT_67213120 < dVar3) {
                dVar2 = _DAT_67213188;
              }
              dVar7 = dVar7 * dVar7 * dVar2;
            }
            if (((*(int *)(iVar5 + 0x225) != 0) && (*(int *)(iVar5 + 0xee) == 6)) &&
               (_DAT_67213198 <= dVar7)) {
              dVar7 = _DAT_67213198;
            }
            uVar6 = *(uint *)(iVar5 + 0x102);
            if ((int)((uVar18 / 1000) * uVar6) < *(int *)(iVar5 + 0x1a6)) {
              local_128 = *(uint *)(iVar5 + 0x205);
              local_40 = 0;
              if (uVar12 < local_128) {
                local_128 = (uVar12 - local_128) - 1;
              }
              else {
                local_128 = uVar12 - local_128;
              }
              uStack_124 = 0;
              uStack_b4 = 0;
              local_b8 = (*(int *)(iVar5 + 0x243) + 1) * 1000;
              if ((double)local_b8 / *(double *)(iVar5 + 0x1b2) < (double)local_128) {
                dVar2 = *(double *)(iVar5 + 0x1b2) * _DAT_672131a0;
                *(uint *)(iVar5 + 0x205) = uVar12;
                *(double *)(iVar5 + 0x1b2) = dVar2;
              }
            }
            else {
              *(undefined4 *)(iVar5 + 0x1b2) = *(undefined4 *)(iVar5 + 0x1ba);
              *(undefined4 *)(iVar5 + 0x1b6) = *(undefined4 *)(iVar5 + 0x1be);
            }
            if (*(int *)(iVar5 + 0x186) == 1) {
              dVar7 = dVar7 - _DAT_672131b0;
              *(undefined4 *)(iVar5 + 0x132) = 0;
              dVar7 = dVar7 * *(double *)(iVar5 + 0x1e2);
              if (*(int *)(iVar5 + 0x235) == 0) {
                if (*(int *)(iVar5 + 0x229) == 0) {
                  if (*(int *)(iVar5 + 0x225) == 0) {
                    uStack_ac = 0;
                    if (dVar3 <= (double)uVar6 * _DAT_672131b8 - _DAT_672131c0) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      if ((double)local_c._4_4_ < dVar7) {
                        dVar7 = (double)local_c._4_4_;
                      }
                    }
                    else {
                      dVar2 = (dVar3 - (double)uVar6 * _DAT_672131b8) - _DAT_672131b0;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      dVar2 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar2) -
                              dVar2 * _DAT_672131c8;
                      if (dVar2 < dVar7) {
                        dVar7 = dVar2;
                      }
                    }
                    local_b0 = uVar6;
                    if (_DAT_67213120 <= dVar3) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_c = (double)local_c._4_4_;
                      if (dVar7 < local_c) goto LAB_67204939;
                    }
                    else {
                      local_c = (double)(ulonglong)
                                        CONCAT14(*(byte *)(iVar5 + 0x1ec),(undefined4)local_c);
                      dVar2 = local_c;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      dVar3 = (double)local_c._4_4_ * (_DAT_672131c0 - -dVar3) -
                              -dVar3 * _DAT_67213158;
                      local_c = dVar2;
                      if (dVar7 < dVar3) {
                        dVar7 = dVar3;
                      }
                    }
                  }
                  else {
                    uStack_9c = 0;
                    if (dVar3 <= (double)uVar6 * _DAT_672131b8 - _DAT_672131d8) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      if ((double)local_c._4_4_ < dVar7) {
                        dVar7 = (double)local_c._4_4_;
                      }
                    }
                    else {
                      dVar2 = ((dVar3 - (double)uVar6 * _DAT_672131b8) - _DAT_67213158) *
                              _DAT_672131a8;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      dVar2 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar2) -
                              dVar2 * _DAT_672131c8;
                      if (dVar2 < dVar7) {
                        dVar7 = dVar2;
                      }
                    }
                    local_a0 = uVar6;
                    if (_DAT_67213170 <= dVar3) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_c = (double)local_c._4_4_;
                      if (dVar7 < local_c) {
LAB_67204939:
                        dVar7 = local_c;
                      }
                    }
                    else {
                      dVar3 = (-dVar3 - _DAT_672131e0) * _DAT_672131e8;
                      local_c = (double)(ulonglong)
                                        CONCAT14(*(byte *)(iVar5 + 0x1ec),(undefined4)local_c);
                      dVar2 = local_c;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      dVar3 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar3) -
                              dVar3 * _DAT_67213158;
                      local_c = dVar2;
                      if (dVar7 < dVar3) {
                        dVar7 = dVar3;
                      }
                    }
                  }
                }
                else {
                  uStack_7c = 0;
                  dVar2 = (double)uVar6 * _DAT_672131b8;
                  if (dVar3 <= dVar2) {
                    dVar1 = (double)*(byte *)(iVar5 + 0x1eb);
                    local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                    dVar2 = (double)local_c._4_4_;
                    local_14 = (double)*(byte *)(iVar5 + 0x1eb);
                    local_c = dVar2;
                  }
                  else {
                    local_90 = uVar6 * 2;
                    uStack_8c = 0;
                    dVar2 = (dVar3 - dVar2) / ((double)local_90 * _DAT_672131b8 - dVar2);
                    dVar8 = _DAT_672131c0 - dVar2;
                    local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                    local_14 = (double)local_c._4_4_;
                    local_30._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                    dVar2 = dVar2 * _DAT_672131c8;
                    dVar1 = dVar8 * local_14 - dVar2;
                    dVar2 = dVar8 * (double)local_30._4_4_ - dVar2;
                    local_c = (double)local_30._4_4_;
                  }
                  if (dVar1 < dVar7) {
                    dVar7 = dVar1;
                  }
                  if (dVar7 < dVar2) {
                    dVar7 = dVar2;
                  }
                  if (_DAT_67213120 <= dVar3) {
                    local_1c = local_14;
                    local_30 = local_c;
                  }
                  else {
                    dVar3 = -dVar3 / -((double)uVar6 * _DAT_672131d0);
                    dVar2 = _DAT_672131c0 - dVar3;
                    dVar3 = dVar3 * _DAT_67213158;
                    local_1c = dVar2 * local_14 - dVar3;
                    local_30 = dVar2 * local_c - dVar3;
                  }
                  if (local_1c < dVar7) {
                    dVar7 = local_1c;
                  }
                  local_80 = uVar6;
                  if (dVar7 < local_30) {
                    dVar7 = local_30;
                  }
                }
              }
              dVar3 = dVar7;
              if (_DAT_67213150 < dVar7) {
                dVar3 = _DAT_67213150;
              }
              dVar2 = _DAT_672131d8;
              if ((_DAT_672131d8 <= dVar3) && (dVar2 = dVar7, _DAT_67213150 < dVar7)) {
                dVar2 = _DAT_67213150;
              }
              *(undefined8 *)(iVar5 + 0x1d2) = *(undefined8 *)(iVar5 + 0x1ca);
              *(double *)(iVar5 + 0x1ca) = dVar2;
              dVar3 = dVar2;
              if (*(double *)(iVar5 + 0x1d2) <= dVar2) {
                dVar3 = *(double *)(iVar5 + 0x1d2);
              }
              dVar7 = dVar2;
              if (*(double *)(iVar5 + 0x1d2) <= dVar2) {
                dVar7 = *(double *)(iVar5 + 0x1d2);
              }
              bVar21 = *(double *)(iVar5 + 0x1d2) <= dVar2;
              if (dVar3 - _DAT_672131b0 <= dVar7 * _DAT_672131f0) {
                local_24 = dVar2;
                if (bVar21) {
                  local_24 = *(double *)(iVar5 + 0x1d2);
                }
                local_24 = local_24 * _DAT_672131f0;
              }
              else if (bVar21) {
                local_24 = *(double *)(iVar5 + 0x1d2) - _DAT_672131b0;
              }
              else {
                local_24 = dVar2 - _DAT_672131b0;
              }
              bVar21 = _DAT_67213150 < local_24;
              *(double *)(iVar5 + 0x1da) = local_24;
              if (bVar21) {
                local_24 = _DAT_67213150;
              }
              *(double *)(iVar5 + 0x1da) = local_24;
              if (*(int *)(iVar5 + 0x1c2) == 0) {
                *(double *)(iVar5 + 0x1e2) = dVar2;
              }
              dVar7 = (double)*(byte *)(iVar5 + 0x23c);
              local_30 = (double)*(byte *)(iVar5 + 0x23c);
              dVar3 = dVar2;
              if (dVar7 < dVar2) {
                dVar3 = dVar7;
              }
              dVar1 = (double)*(byte *)(iVar5 + 0x239);
              if (((double)*(byte *)(iVar5 + 0x239) <= dVar3) && (dVar1 = dVar2, dVar7 < dVar2)) {
                dVar1 = local_30;
              }
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23e);
              local_1c = (double)local_c._4_4_;
              *(double *)(iVar5 + 0x1ca) = dVar1;
              dVar3 = local_1c;
              if (*(double *)(iVar5 + 0x1e2) <= local_1c) {
                dVar3 = *(double *)(iVar5 + 0x1e2);
              }
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23b);
              dVar7 = (double)local_c._4_4_;
              if ((dVar7 <= dVar3) && (dVar7 = local_1c, *(double *)(iVar5 + 0x1e2) <= local_1c)) {
                dVar7 = *(double *)(iVar5 + 0x1e2);
              }
              *(double *)(iVar5 + 0x1e2) = dVar7;
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23d);
              dVar7 = (double)local_c._4_4_;
              dVar3 = local_24;
              if (dVar7 < local_24) {
                dVar3 = dVar7;
              }
              local_c = (double)(ulonglong)CONCAT14(*(byte *)(iVar5 + 0x23a),(undefined4)local_c);
              uVar10 = (ulonglong)local_c;
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23a);
              local_14 = (double)local_c._4_4_;
              dVar2 = local_14;
              local_c = (double)uVar10;
              if ((local_14 <= dVar3) && (dVar2 = dVar7, local_24 <= dVar7)) {
                dVar2 = local_24;
              }
            }
            else {
              local_c = (double)CONCAT44(local_30._4_4_ - iVar19,(undefined4)local_c);
              dVar2 = (double)(int)(local_30._4_4_ - iVar19) /
                      ((double)iVar19 * *(double *)(iVar5 + 0x1f1));
              if ((dVar7 < _DAT_67213120) && (_DAT_67213120 <= dVar2)) {
                dVar2 = dVar2 * _DAT_672131a8;
              }
              dVar7 = (dVar7 - _DAT_672131b0) * (dVar2 - _DAT_672131b0) * *(double *)(iVar5 + 0x1ca)
              ;
              if (*(int *)(iVar5 + 0x235) == 0) {
                if (*(int *)(iVar5 + 0x229) == 0) {
                  if (*(int *)(iVar5 + 0x225) == 0) {
                    uStack_6c = 0;
                    if (dVar3 <= (double)uVar6 * _DAT_672131b8 - _DAT_672131c0) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      if ((double)local_c._4_4_ < dVar7) {
                        dVar7 = (double)local_c._4_4_;
                      }
                    }
                    else {
                      dVar2 = (dVar3 - (double)uVar6 * _DAT_672131b8) - _DAT_672131b0;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      local_24 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar2) -
                                 dVar2 * _DAT_672131c8;
                      if (local_24 < dVar7) {
                        dVar7 = local_24;
                      }
                    }
                    local_70 = uVar6;
                    if (_DAT_67213120 <= dVar3) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_c = (double)local_c._4_4_;
                      if (dVar7 < local_c) goto LAB_67204277;
                    }
                    else {
                      local_c = (double)(ulonglong)
                                        CONCAT14(*(byte *)(iVar5 + 0x1ec),(undefined4)local_c);
                      dVar2 = local_c;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_24 = (double)local_c._4_4_ * (_DAT_672131c0 - -dVar3) -
                                 -dVar3 * _DAT_67213158;
                      local_c = dVar2;
                      if (dVar7 < local_24) {
                        dVar7 = local_24;
                      }
                    }
                  }
                  else {
                    uStack_5c = 0;
                    if (dVar3 <= (double)uVar6 * _DAT_672131b8 - _DAT_672131d8) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      if ((double)local_c._4_4_ < dVar7) {
                        dVar7 = (double)local_c._4_4_;
                      }
                    }
                    else {
                      dVar2 = ((dVar3 - (double)uVar6 * _DAT_672131b8) - _DAT_67213158) *
                              _DAT_672131a8;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                      local_24 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar2) -
                                 dVar2 * _DAT_672131c8;
                      if (local_24 < dVar7) {
                        dVar7 = local_24;
                      }
                    }
                    local_60 = uVar6;
                    if (_DAT_67213170 <= dVar3) {
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_c = (double)local_c._4_4_;
                      if (dVar7 < local_c) {
LAB_67204277:
                        dVar7 = local_c;
                      }
                    }
                    else {
                      dVar3 = (-dVar3 - _DAT_672131e0) * _DAT_672131e8;
                      local_c = (double)(ulonglong)
                                        CONCAT14(*(byte *)(iVar5 + 0x1ec),(undefined4)local_c);
                      dVar2 = local_c;
                      local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                      local_24 = (double)local_c._4_4_ * (_DAT_672131c0 - dVar3) -
                                 dVar3 * _DAT_67213158;
                      local_c = dVar2;
                      if (dVar7 < local_24) {
                        dVar7 = local_24;
                      }
                    }
                  }
                }
                else {
                  uStack_f4 = 0;
                  local_24 = (double)uVar6;
                  dVar2 = (double)uVar6 * _DAT_672131b8;
                  if (dVar3 <= dVar2) {
                    local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                    dVar2 = (double)local_c._4_4_;
                    local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                    dVar1 = (double)local_c._4_4_;
                    local_14 = dVar2;
                    local_c = dVar1;
                  }
                  else {
                    local_50 = uVar6 * 2;
                    uStack_4c = 0;
                    dVar1 = (dVar3 - dVar2) / ((double)local_50 * _DAT_672131b8 - dVar2);
                    local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x1eb);
                    local_30._4_4_ = (uint)*(byte *)(iVar5 + 0x1ec);
                    dVar8 = _DAT_672131c0 - dVar1;
                    dVar1 = dVar1 * _DAT_672131c8;
                    dVar2 = (double)local_c._4_4_ * dVar8 - dVar1;
                    dVar1 = (double)local_30._4_4_ * dVar8 - dVar1;
                    local_14 = (double)local_c._4_4_;
                    local_c = (double)local_30._4_4_;
                  }
                  if (dVar2 < dVar7) {
                    dVar7 = dVar2;
                  }
                  if (dVar7 < dVar1) {
                    dVar7 = dVar1;
                  }
                  if (_DAT_67213120 <= dVar3) {
                    local_30 = local_14;
                    local_1c = local_c;
                  }
                  else {
                    local_24 = -dVar3 / -(local_24 * _DAT_672131d0);
                    dVar3 = _DAT_672131c0 - local_24;
                    local_24 = local_24 * _DAT_67213158;
                    local_30 = local_14 * dVar3 - local_24;
                    local_1c = local_c * dVar3 - local_24;
                  }
                  if (local_30 < dVar7) {
                    dVar7 = local_30;
                  }
                  local_f8 = uVar6;
                  if (dVar7 < local_1c) {
                    dVar7 = local_1c;
                  }
                }
              }
              dVar3 = dVar7;
              if (_DAT_67213150 < dVar7) {
                dVar3 = _DAT_67213150;
              }
              dVar2 = _DAT_672131d8;
              if ((_DAT_672131d8 <= dVar3) && (dVar2 = dVar7, _DAT_67213150 < dVar7)) {
                dVar2 = _DAT_67213150;
              }
              *(undefined8 *)(iVar5 + 0x1d2) = *(undefined8 *)(iVar5 + 0x1ca);
              *(double *)(iVar5 + 0x1ca) = dVar2;
              dVar3 = dVar2;
              if (*(double *)(iVar5 + 0x1d2) <= dVar2) {
                dVar3 = *(double *)(iVar5 + 0x1d2);
              }
              dVar7 = dVar2;
              if (*(double *)(iVar5 + 0x1d2) <= dVar2) {
                dVar7 = *(double *)(iVar5 + 0x1d2);
              }
              bVar21 = *(double *)(iVar5 + 0x1d2) <= dVar2;
              if (dVar3 - _DAT_672131b0 <= dVar7 * _DAT_672131f0) {
                local_1c = dVar2;
                if (bVar21) {
                  local_1c = *(double *)(iVar5 + 0x1d2);
                }
                local_1c = local_1c * _DAT_672131f0;
              }
              else if (bVar21) {
                local_1c = *(double *)(iVar5 + 0x1d2) - _DAT_672131b0;
              }
              else {
                local_1c = dVar2 - _DAT_672131b0;
              }
              bVar21 = _DAT_67213150 < local_1c;
              *(double *)(iVar5 + 0x1da) = local_1c;
              if (bVar21) {
                local_1c = _DAT_67213150;
              }
              *(double *)(iVar5 + 0x1da) = local_1c;
              if (*(int *)(iVar5 + 0x1c2) == 0) {
                bVar4 = *(byte *)(iVar5 + 0x1ea);
                if (bVar4 < 0x20) {
                  local_c = (double)(ulonglong)CONCAT14(bVar4,(undefined4)local_c);
                }
                else {
                  local_c = (double)CONCAT44(0x1f,(undefined4)local_c);
                }
                dVar3 = dVar2;
                if (dVar2 <= (double)local_c._4_4_) {
                  if (bVar4 < 0x20) {
                    local_c = (double)(ulonglong)CONCAT14(bVar4,(undefined4)local_c);
                  }
                  else {
                    local_c = (double)CONCAT44(0x1f,(undefined4)local_c);
                  }
                  dVar3 = (double)local_c._4_4_;
                }
                *(double *)(iVar5 + 0x1e2) = dVar3;
              }
              dVar7 = (double)*(byte *)(iVar5 + 0x23c);
              local_30 = (double)*(byte *)(iVar5 + 0x23c);
              dVar3 = dVar2;
              if (dVar7 < dVar2) {
                dVar3 = dVar7;
              }
              dVar1 = (double)*(byte *)(iVar5 + 0x239);
              if (((double)*(byte *)(iVar5 + 0x239) <= dVar3) && (dVar1 = dVar2, dVar7 < dVar2)) {
                dVar1 = local_30;
              }
              *(double *)(iVar5 + 0x1ca) = dVar1;
              if (*(int *)(iVar5 + 0x1c2) == 0) {
                local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23e);
                dVar7 = (double)local_c._4_4_;
                dVar3 = dVar7;
                if (*(double *)(iVar5 + 0x1e2) <= dVar7) {
                  dVar3 = *(double *)(iVar5 + 0x1e2);
                }
                local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23b);
                dVar2 = (double)local_c._4_4_;
                if ((dVar2 <= dVar3) && (dVar2 = dVar7, *(double *)(iVar5 + 0x1e2) <= dVar7)) {
                  dVar2 = *(double *)(iVar5 + 0x1e2);
                }
                *(double *)(iVar5 + 0x1e2) = dVar2;
              }
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23d);
              dVar7 = (double)local_c._4_4_;
              dVar3 = local_1c;
              if (dVar7 < local_1c) {
                dVar3 = dVar7;
              }
              local_c = (double)(ulonglong)CONCAT14(*(byte *)(iVar5 + 0x23a),(undefined4)local_c);
              uVar10 = (ulonglong)local_c;
              local_c._4_4_ = (uint)*(byte *)(iVar5 + 0x23a);
              local_14 = (double)local_c._4_4_;
              dVar2 = local_14;
              local_c = (double)uVar10;
              if ((local_14 <= dVar3) && (dVar2 = dVar7, local_1c <= dVar7)) {
                dVar2 = local_1c;
              }
            }
            *(double *)(iVar5 + 0x1da) = dVar2;
            if (*(int *)(iVar5 + 0x22d) == 0) {
              if (*(int *)(iVar5 + 0x231) != 0) {
                if (local_40 == 0) {
LAB_67204c52:
                  uVar12 = ftol();
                }
                else {
                  local_c0 = *(uint *)(iVar5 + 0x1c6);
                  uStack_bc = 0;
                  if (_DAT_672131f8 /
                      (*(double *)(iVar5 + 0x1b2) * *(double *)(iVar5 + 0x1ca) +
                      (_DAT_67213150 - *(double *)(iVar5 + 0x1ca)) * *(double *)(iVar5 + 0x1aa)) <=
                      (double)local_c0) goto LAB_67204c52;
                  uVar12 = ftol();
                }
                *(uint *)(iVar5 + 0x1c6) = uVar12;
                local_d0 = uVar12;
                if (4999 < uVar12) {
                  local_d0 = 5000;
                }
                uStack_cc = 0;
                if (_DAT_672130f0 / *(double *)(iVar5 + 0x19e) <= (double)local_d0) {
                  if (4999 < uVar12) {
                    uVar12 = 5000;
                  }
                  uStack_dc = 0;
                  local_e0 = uVar12;
                }
                uVar12 = ftol();
                local_f0 = *(uint *)(iVar5 + 0x102);
                uStack_ec = 0;
                *(uint *)(iVar5 + 0x1c6) = uVar12;
                if (extraout_ST0 <
                    (float10)local_f0 * (float10)_DAT_67213200 - (float10)_DAT_67213204) {
                  uVar18 = *(uint *)(iVar5 + 0x1ed);
                  if (uVar12 < *(uint *)(iVar5 + 0x1ed)) {
                    uVar18 = uVar12;
                  }
                  *(uint *)(iVar5 + 0x1c6) = uVar18;
                }
              }
            }
            else {
              uVar17 = ftol();
              *(undefined4 *)(iVar5 + 0x1c6) = uVar17;
            }
            if (*(int *)(iVar5 + 0x24b) == 0) {
              local_100 = *(uint *)(iVar5 + 0x1c6);
              uStack_fc = 0;
              local_24 = (double)local_100;
              iVar19 = *(int *)(iVar5 + 0x243);
              uStack_10c = 0;
              local_110 = iVar19 + 1;
              uVar12 = ftol();
              if (iVar19 == 1) {
                if (*(uint *)(iVar5 + 0x247) < uVar12) {
                  *(undefined4 *)(iVar5 + 0x23f) = 0;
                }
                else {
LAB_67204dea:
                  *(undefined4 *)(iVar5 + 0x23f) = 1;
                }
              }
              else if (iVar19 == 2) {
                if ((*(uint *)(iVar5 + 0x247) * 5) / 3 < uVar12) {
                  *(undefined4 *)(iVar5 + 0x23f) = 0;
                }
                else if (*(uint *)(iVar5 + 0x247) < uVar12) {
                  *(undefined4 *)(iVar5 + 0x23f) = 1;
                }
                else {
                  *(undefined4 *)(iVar5 + 0x23f) = 2;
                }
              }
              else if (*(uint *)(iVar5 + 0x247) * 2 < uVar12) {
                *(undefined4 *)(iVar5 + 0x23f) = 0;
              }
              else {
                if (*(uint *)(iVar5 + 0x247) < uVar12) goto LAB_67204dea;
                *(undefined4 *)(iVar5 + 0x23f) = 3;
              }
            }
            *(undefined4 *)(iVar5 + 0x209) = *(undefined4 *)(iVar5 + 0x243);
            iVar19 = *(int *)(iVar5 + 0x23f);
            if (iVar19 == 0) {
              *(undefined4 *)(iVar5 + 0x215) = 1;
              *(undefined4 *)(iVar5 + 0x211) = 1;
              *(undefined4 *)(iVar5 + 0x20d) = 1;
            }
            else if (iVar19 == 1) {
              *(undefined4 *)(iVar5 + 0x215) = 0;
              *(undefined4 *)(iVar5 + 0x211) = 1;
              *(undefined4 *)(iVar5 + 0x20d) = 0;
            }
            else {
              *(undefined4 *)(iVar5 + 0x215) = 0;
              *(undefined4 *)(iVar5 + 0x211) = 0;
              if (iVar19 == 2) {
                *(undefined4 *)(iVar5 + 0x20d) = 1;
              }
              else {
                *(undefined4 *)(iVar5 + 0x20d) = 0;
              }
            }
          }
          uVar12 = *(uint *)(iVar5 + 0x253);
          if ((uVar12 != 0) && (uVar12 < 4)) {
            iVar19 = ftol();
            if (uVar12 == 1) {
              *(undefined4 *)(iVar5 + 599) = *(undefined4 *)(&DAT_67214020 + iVar19 * 4);
            }
            else if (uVar12 == 2) {
              *(undefined4 *)(iVar5 + 599) = *(undefined4 *)(&DAT_67214120 + iVar19 * 4);
            }
            else if (uVar12 == 3) {
              *(undefined4 *)(iVar5 + 599) = *(undefined4 *)(&DAT_67214220 + iVar19 * 4);
            }
          }
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < (int)(uint)*(ushort *)(local_34 + 0xf4));
  }
  return 0;
}


