/* Module: mp3plug.dll
   Function: FUN_5f6cfc50
   Address: 5f6cfc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_5f6cfc50(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float10 fVar17;
  float10 fVar18;
  ulonglong uVar19;
  char local_100 [12];
  char local_f4 [4];
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  int *local_7c;
  int *local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int *local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  int *local_30;
  int *local_2c;
  int local_28;
  
  local_60 = param_4;
  if (param_1 == (int *)0x0) {
    ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x116,
                           (undefined *)0x0,s_invalid_function_parameter_5f75c220);
    goto LAB_5f6cfcd6;
  }
  local_78 = param_3;
  if ((*param_3 < 3) && (0 < *param_3)) {
    if (DAT_5f752980 == 0) {
      FUN_5f6d2270(0x2070001,(undefined4 *)0x0);
      DAT_5f752980 = 1;
    }
    if (local_60 == (int *)0x0) {
      local_60 = &DAT_5f73f9e0;
    }
    if (local_60[5] != 0) {
      FUN_5f6e0b90();
    }
    FUN_5f6de7b0(s_noCmdct_5f75c270,"");
    fVar1 = (float)local_60[2];
    local_38 = (double)fVar1;
    if (_DAT_5f75c0b8 < fVar1) {
      fVar4 = _DAT_5f75c0bc * (float)local_78[1];
      if (fVar1 < _DAT_5f75c0bc * (float)local_78[1]) {
        fVar4 = fVar1;
      }
      sprintf(local_100,s__5_0f_5f75c280,SUB84((double)fVar4,0),
              (int)((ulonglong)(double)fVar4 >> 0x20));
      FUN_5f6de7b0(&DAT_5f75c290,local_100);
    }
    if (local_78[6] != 0) {
      FUN_5f6de7b0(&DAT_5f75c2a0,"");
    }
    if (*local_60 < 7) {
      FUN_5f6de7b0(&DAT_5f75c2b0,&DAT_5f75c2f0);
      FUN_5f6de7b0(&DAT_5f75c2d0,&DAT_5f75c300);
    }
    else {
      FUN_5f6de7b0(&DAT_5f75c2b0,&DAT_5f75c2c0);
      FUN_5f6de7b0(&DAT_5f75c2d0,&DAT_5f75c2e0);
    }
    if ((*local_78 < 3) && (0 < *local_78)) {
      sprintf(local_f4,&DAT_5f75c310,local_60[4]);
      FUN_5f6de7b0(s_padding_5f75c320,local_f4);
      puVar7 = FUN_5f6d9720(1,0xf0);
      *param_1 = (int)puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x166,
                               (undefined *)0x0,s_out_of_memory_5f75c330);
      }
      else {
        *puVar7 = 0;
        *(undefined4 *)(*param_1 + 4) = 0;
        *(int *)(*param_1 + 0x50) = *local_78 * 0x240;
        uVar8 = FUN_5f6d9760(*(int *)(*param_1 + 0x50) * 4);
        *(undefined4 *)(*param_1 + 0x4c) = uVar8;
        *(undefined4 *)(*param_1 + 0x54) = 0;
        *(int *)(*param_1 + 0x5c) = *local_78 * 0x240;
        uVar8 = FUN_5f6d9760(*(int *)(*param_1 + 0x5c) * 4);
        *(undefined4 *)(*param_1 + 0x58) = uVar8;
        *(undefined4 *)(*param_1 + 200) = 0;
        *(undefined4 *)(*param_1 + 0xcc) = 1;
        fVar1 = _DAT_5f75c0c0;
        *(undefined4 *)(*param_1 + 0xd0) = 0x661;
        *(undefined4 *)(*param_1 + 0xd4) = 0;
        *(undefined4 *)(*param_1 + 0xd8) = 0;
        *(undefined4 *)(*param_1 + 0xdc) = 1;
        *(undefined4 *)(*param_1 + 0xe0) = 1;
        if (fVar1 <= (float)local_78[1]) {
          uVar8 = 2;
        }
        else {
          uVar8 = 1;
        }
        *(undefined4 *)(*param_1 + 0xe4) = uVar8;
        *(undefined4 *)(*param_1 + 0xe8) = *(undefined4 *)(*param_1 + 0xe4);
        iVar10 = *param_1;
        *(undefined4 *)(iVar10 + 0x10) = *param_2;
        *(undefined4 *)(iVar10 + 0x14) = param_2[1];
        *(undefined4 *)(iVar10 + 0x18) = param_2[2];
        *(undefined4 *)(iVar10 + 0x1c) = param_2[3];
        *(undefined4 *)(iVar10 + 0x20) = param_2[4];
        iVar10 = *param_1;
        *(int *)(iVar10 + 0x24) = *local_78;
        *(int *)(iVar10 + 0x28) = local_78[1];
        *(int *)(iVar10 + 0x2c) = local_78[2];
        *(int *)(iVar10 + 0x30) = local_78[3];
        *(int *)(iVar10 + 0x34) = local_78[4];
        *(int *)(iVar10 + 0x38) = local_78[5];
        *(int *)(iVar10 + 0x3c) = local_78[6];
        *(int *)(iVar10 + 0x40) = local_78[7];
        *(int *)(iVar10 + 0x44) = local_78[8];
        *(int *)(iVar10 + 0x48) = local_78[9];
        iVar10 = *param_1;
        if (*(int *)(iVar10 + 0x18) == 0) {
          *(undefined1 **)(iVar10 + 0x20) = &LAB_5f6cfa90;
          iVar10 = *param_1;
        }
        else if (*(int *)(iVar10 + 0x18) == 1) {
          *(undefined1 **)(iVar10 + 0x20) = &LAB_5f6cfae0;
          iVar10 = *param_1;
        }
        else if (*(int *)(iVar10 + 0x20) == 0) {
          ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x185,
                                 (undefined *)0x0,s_invalid_castFunc_5f75c340);
          goto LAB_5f6cfcc4;
        }
        if ((*(int *)(iVar10 + 0x4c) == 0) || (*(int *)(iVar10 + 0x58) == 0)) {
          ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x18b,
                                 (undefined *)0x0,s_out_of_memory_5f75c330);
        }
        else {
          if (*(int *)(iVar10 + 0x24) == 1) {
            *(undefined4 *)(iVar10 + 0x34) = 0;
          }
          iVar10 = *param_1;
          ppuVar6 = FUN_5f6db940((undefined4 *)*param_1,*(uint *)(iVar10 + 0x24),
                                 *(uint *)(iVar10 + 0xe4),*(float *)(iVar10 + 0x28),
                                 *(uint *)(iVar10 + 0x2c),*(uint *)(iVar10 + 0x34) & 1,
                                 *(uint *)(iVar10 + 0x34) & 2);
          if (ppuVar6 == (undefined **)0x0) {
            ((int *)*param_1)[0x19] =
                 **(int **)(*(int *)(*(int *)(*(int *)*param_1 + 0x20) + 4) + 0x24);
            fVar17 = FUN_5f6dd590(80.0);
            local_58 = (double)fVar17;
            local_48 = (double)((float)local_78[1] * (_DAT_5f75c0c8 / (float)param_2[1]));
            if (((float)local_78[1] != (float)param_2[1]) ||
               ((3 < *local_60 && (*(float *)(*param_1 + 100) < _DAT_5f75c128)))) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            local_40 = local_48;
            if (0 < *local_60) {
              local_40 = (double)((_DAT_5f75c0c8 / (float)param_2[1]) * *(float *)(*param_1 + 100) *
                                 _DAT_5f75c124);
            }
            if (local_48 < local_40) {
              local_40 = local_48;
            }
            if ((double)_DAT_5f75c0cc < local_40) {
              local_40 = (double)_DAT_5f75c0d0;
            }
            fVar18 = (float10)fpatan(((float10)local_40 * (float10)_DAT_5f75c0d8 *
                                      (float10)(float)param_2[1] - (float10)_DAT_5f75c0e0) *
                                     (float10)_DAT_5f75c0e8,(float10)1);
            fVar18 = (float10)_DAT_5f75c110 -
                     ((float10)_DAT_5f75c0f0 -
                     (fVar18 * (float10)_DAT_5f75c0f8 + (float10)_DAT_5f75c100) *
                     (float10)_DAT_5f75c108);
            local_50 = (double)fVar18;
            uVar9 = FUN_5f6dd5c0((float)fVar18,(float)fVar17);
            piVar11 = (int *)(uint)!bVar5;
            iVar10 = FUN_5f6dda20((undefined8 *)(*param_1 + 0x68),local_48,*local_78,
                                  local_50 * local_40,_DAT_5f75c118,uVar9,local_58,(int)piVar11);
            if (iVar10 == 0) {
              piVar3 = (int *)*param_1;
              uStack_ec = 0;
              local_68 = piVar3[0x34];
              dVar2 = (double)(uint)piVar3[0x20] * local_48;
              local_d8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
              local_d8._0_4_ = SUB84(dVar2,0);
              local_70 = local_d8._4_4_;
              local_6c = local_d8._4_4_ >> 0x14 & 0x7ff;
              local_64 = (uint)local_d8;
              if (local_6c < 0x3ff) {
                local_f0 = 0;
              }
              else {
                local_f0 = (local_d8._4_4_ << 0xb | (uint)local_d8 >> 0x15 | 0x80000000) >>
                           (0x1eU - (char)local_6c & 0x1f);
                local_30 = piVar3;
                if ((longlong)dVar2 < 0) {
                  local_f0 = -local_f0;
                }
              }
              piVar3[0x34] = local_68 + local_f0;
              local_d8 = dVar2;
              piVar11 = FUN_5f6daaa0(*(undefined4 *)*param_1,piVar11);
              *(int **)(*param_1 + 4) = piVar11;
              piVar11 = (int *)*param_1;
              if (piVar11[1] == 0) {
                ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x1db,
                                       (undefined *)0x0,s_CreateLoopKernel___failed_5f75c380);
              }
              else {
                if (piVar11[9] == 1) {
                  local_68 = 3;
                }
                else if ((piVar11[0xd] & 4U) == 0) {
                  if ((piVar11[0xd] & 3U) == 0) {
                    local_68 = 0;
                  }
                  else {
                    local_68 = 1;
                  }
                }
                else {
                  local_68 = 2;
                }
                local_74 = local_60[6];
                dVar2 = (double)(float)piVar11[10];
                local_c8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
                local_c8._0_4_ = SUB84(dVar2,0);
                local_64 = (uint)local_c8;
                local_6c = local_c8._4_4_ >> 0x14 & 0x7ff;
                local_70 = local_c8._4_4_;
                if (local_6c < 0x3ff) {
                  local_f0 = 0;
                }
                else {
                  local_f0 = (local_c8._4_4_ << 0xb | (uint)local_c8 >> 0x15 | 0x80000000) >>
                             (0x1eU - (char)local_6c & 0x1f);
                  local_30 = piVar11;
                  if ((longlong)dVar2 < 0) {
                    local_f0 = -local_f0;
                  }
                }
                uVar19 = CONCAT44(local_74,piVar11[0xe]) & 0x1ffffffff;
                local_c8 = dVar2;
                ppuVar6 = FUN_5f6d97e0((undefined4 *)(*param_1 + 8),local_f0,piVar11[0xb],0,
                                       (int)uVar19,(int)(uVar19 >> 0x20),local_74 & 2,local_74 & 4,
                                       local_60[7],local_68);
                if (ppuVar6 == (undefined **)0x0) {
                  if (local_78[7] != 0) {
                    puVar12 = FUN_5f6dc150();
                    *(undefined1 **)(*param_1 + 0xc) = puVar12;
                    if (*(int *)(*param_1 + 0xc) == 0) {
                      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,
                                             (char *)0x1ff,(undefined *)0x0,
                                             s_CreateTimeStamp___failed_5f75c3a0);
                      goto LAB_5f6cfcc4;
                    }
                  }
                  iVar10 = local_60[4];
                  if (iVar10 == 0) {
                    if (_DAT_5f75c120 <= (float)local_78[1]) {
                      iVar13 = 0x90;
                    }
                    else {
                      iVar13 = 0x48;
                    }
                    dVar2 = (double)(float)local_78[1];
                    iVar13 = iVar13 * local_78[2];
                    local_b8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
                    local_b8._0_4_ = SUB84(dVar2,0);
                    local_7c = (int *)local_b8;
                    uVar9 = local_b8._4_4_ >> 0x14 & 0x7ff;
                    if (uVar9 < 0x3ff) {
                      local_6c = 0;
                    }
                    else {
                      local_2c = param_1;
                      local_6c = (local_b8._4_4_ << 0xb | (uint)(int *)local_b8 >> 0x15 | 0x80000000
                                 ) >> (0x1eU - (char)uVar9 & 0x1f);
                      local_28 = iVar13;
                      if ((longlong)dVar2 < 0) {
                        local_6c = -local_6c;
                      }
                    }
                    local_f0 = local_6c;
                    local_b8 = dVar2;
                    if (iVar13 % (int)local_6c != 0) {
                      *(undefined4 *)(*param_1 + 0xdc) = 1;
                      *(undefined4 *)(*param_1 + 0xe0) = 1;
                      local_30 = (int *)0x0;
                      goto LAB_5f6d07a8;
                    }
                  }
                  else if ((iVar10 != 1) && (iVar10 != 2)) goto LAB_5f6d07a8;
                  local_7c = (int *)(uint)(iVar10 == 2);
                  dVar2 = (double)(float)local_78[1];
                  local_a8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
                  local_a8._0_4_ = SUB84(dVar2,0);
                  uVar9 = local_a8._4_4_ >> 0x14 & 0x7ff;
                  if (uVar9 < 0x3ff) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (local_a8._4_4_ << 0xb | (uint)local_a8 >> 0x15 | 0x80000000) >>
                            (0x1eU - (char)uVar9 & 0x1f);
                    if ((longlong)dVar2 < 0) {
                      uVar9 = -uVar9;
                    }
                  }
                  iVar10 = local_78[2];
                  uVar9 = (uint)((int)uVar9 < 32000);
                  iVar13 = 1;
                  if ((&DAT_5f73f964)[uVar9 * 0x10] != 0) {
                    iVar14 = (&DAT_5f73f964)[uVar9 * 0x10];
                    do {
                      if ((iVar14 * 1000 - iVar10 == 0) ||
                         ((iVar14 * 1000 < iVar10 &&
                          ((&DAT_5f73f964)[uVar9 * 0x10 + iVar13] * 1000 - iVar10 != 0 &&
                           iVar10 <= (&DAT_5f73f964)[uVar9 * 0x10 + iVar13] * 1000)))) break;
                      iVar13 = iVar13 + 1;
                      iVar14 = *(int *)(uVar9 * 0x40 + 0x5f73f960 + iVar13 * 4);
                    } while (iVar14 != 0);
                  }
                  local_70 = 0;
                  local_6c = 0;
                  iVar14 = *(int *)(uVar9 * 0x40 + 0x5f73f960 + iVar13 * 4);
                  if (iVar14 != 0) {
                    local_70 = iVar14 * 1000;
                    local_6c = (&DAT_5f73f964)[uVar9 * 0x10 + iVar13] * 1000;
                  }
                  local_64 = local_6c - iVar10;
                  local_68 = iVar10 - local_70;
                  local_a8 = dVar2;
                  if ((local_68 == 0) || (uVar9 = local_64, uVar15 = local_68, local_64 == 0)) {
                    *(undefined4 *)(*param_1 + 0xdc) = 1;
                    dVar2 = (double)(float)local_78[1];
                    local_88._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
                    local_88._0_4_ = SUB84(dVar2,0);
                    uVar9 = local_88._4_4_ >> 0x14 & 0x7ff;
                    if (uVar9 < 0x3ff) {
                      local_f0 = 0;
                    }
                    else {
                      local_f0 = (local_88._4_4_ << 0xb | (uint)local_88 >> 0x15 | 0x80000000) >>
                                 (0x1eU - (char)uVar9 & 0x1f);
                      if ((longlong)dVar2 < 0) {
                        local_f0 = -local_f0;
                      }
                    }
                    if ((int)local_f0 < 32000) {
                      iVar10 = 0x48;
                    }
                    else {
                      iVar10 = 0x90;
                    }
                    local_30 = local_7c;
                    *(int *)(*param_1 + 0xe0) =
                         (int)local_7c + (int)(local_70 * iVar10) / (int)local_f0;
                    local_88 = dVar2;
                  }
                  else {
                    while (0 < (int)uVar9) {
                      if ((int)uVar9 < (int)uVar15) {
                        uVar15 = (int)uVar15 % (int)uVar9;
                      }
                      else {
                        uVar9 = (int)uVar9 % (int)uVar15;
                      }
                      uVar16 = uVar9;
                      if ((int)uVar15 < (int)uVar9) {
                        uVar16 = uVar15;
                        uVar15 = uVar9;
                      }
                      if ((int)uVar16 < 1) break;
                      if ((int)uVar16 < (int)uVar15) {
                        uVar15 = (int)uVar15 % (int)uVar16;
                      }
                      else {
                        uVar16 = (int)uVar16 % (int)uVar15;
                      }
                      uVar9 = uVar16;
                      if ((int)uVar15 < (int)uVar16) {
                        uVar9 = uVar15;
                        uVar15 = uVar16;
                      }
                    }
                    *(int *)(*param_1 + 0xdc) =
                         (int)local_68 / (int)uVar15 + (int)local_64 / (int)uVar15;
                    dVar2 = (double)(float)local_78[1];
                    local_98._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
                    local_98._0_4_ = SUB84(dVar2,0);
                    uVar9 = local_98._4_4_ >> 0x14 & 0x7ff;
                    if (uVar9 < 0x3ff) {
                      local_f0 = 0;
                    }
                    else {
                      local_f0 = (local_98._4_4_ << 0xb | (uint)local_98 >> 0x15 | 0x80000000) >>
                                 (0x1eU - (char)uVar9 & 0x1f);
                      if ((longlong)dVar2 < 0) {
                        local_f0 = -local_f0;
                      }
                    }
                    if ((int)local_f0 < 32000) {
                      iVar10 = 0x48;
                    }
                    else {
                      iVar10 = 0x90;
                    }
                    local_74 = (int)(iVar10 * local_70) / (int)local_f0;
                    if ((int)local_f0 < 32000) {
                      iVar10 = 0x48;
                    }
                    else {
                      iVar10 = 0x90;
                    }
                    local_70 = (int)(iVar10 * local_6c) / (int)local_f0;
                    local_6c = (int)(local_64 * local_74) / (int)uVar15;
                    local_78 = (int *)((int)local_7c * *(int *)(*param_1 + 0xdc));
                    *(uint *)(*param_1 + 0xe0) =
                         (int)local_78 + (int)(local_68 * local_70) / (int)uVar15 + local_6c;
                    local_98 = dVar2;
                    local_30 = local_78;
                  }
LAB_5f6d07a8:
                  *(undefined4 *)(*param_1 + 0x60) = 0x157c;
                  if (local_60[5] != 0) {
                    FUN_5f6e06b0();
                  }
                  return (undefined **)0x0;
                }
                ppuVar6 = (undefined **)
                          FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,0x1f7,0,
                                       (int)ppuVar6);
              }
            }
            else {
              ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x1d3,
                                     (undefined *)0x0,s_flfChunkBufInit___failed_5f75c360);
            }
          }
          else {
            ppuVar6 = (undefined **)
                      FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,0x19b,0,(int)ppuVar6)
            ;
          }
        }
      }
    }
    else {
      ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x155,
                             (undefined *)0x0,s_wrong_number_of_channels_on_inpu_5f75c240);
    }
  }
  else {
    ppuVar6 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x11b,
                           (undefined *)0x0,s_wrong_number_of_channels_on_inpu_5f75c240);
  }
LAB_5f6cfcc4:
  if (*param_1 != 0) {
    FUN_5f6cfb84();
  }
  *param_1 = 0;
LAB_5f6cfcd6:
  if (local_60[5] != 0) {
    FUN_5f6e06b0();
  }
  return ppuVar6;
}


