/* Module: vegas30.exe
   Function: FUN_005add10
   Address: 005add10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_005add10(int param_1,undefined4 *param_2,uint *param_3,int param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,int param_11,undefined4 *param_12,int param_13)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 unaff_EBP;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *local_d94;
  int local_d90;
  uint local_d8c;
  int *local_d88;
  int local_d84;
  int local_d80;
  int local_d7c;
  int *local_d78;
  uint local_d74;
  int local_d70;
  int iStack_d6c;
  undefined4 *puStack_d68;
  uint local_d64;
  uint *local_d60;
  int iStack_d5c;
  uint *local_d58 [2];
  int iStack_d50;
  int *local_d4c [2];
  tagRECT tStack_d44;
  undefined4 local_d34;
  undefined4 local_d30;
  undefined4 local_d2c;
  undefined4 local_d28;
  int local_d24;
  uint local_d20;
  RECT local_d1c;
  RECT RStack_d0c;
  undefined1 auStack_cfc [12];
  undefined4 local_cf0 [4];
  double local_ce0;
  int local_cb0 [267];
  undefined4 local_884;
  undefined1 *local_860;
  int aiStack_85c [266];
  int aiStack_434 [268];
  undefined4 uStack_4;
  
  local_d90 = param_1 + 0x9c0;
  local_d58[0] = *(uint **)(param_1 + 0xc0);
  puVar7 = param_12;
  puVar16 = local_cf0;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar16 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar16 = puVar16 + 1;
  }
  if ((param_11 == 2) || (param_11 == 3)) {
    local_ce0 = local_ce0 + local_ce0;
  }
  local_d4c[0] = (int *)0x0;
  local_d4c[1] = (int *)0x0;
  if (param_4 < 2) {
    if ((param_4 != 1) || (param_5 != (undefined4 *)0x0)) goto LAB_005adda9;
  }
  else {
    param_4 = 2;
LAB_005adda9:
    param_13 = 1;
  }
  local_d78 = (int *)0x0;
  if (0 < param_4) {
    do {
      local_d64 = 0x1000003;
      puVar15 = param_3 + (int)local_d78 * 0x136;
      local_d8c = puVar15[1];
      if (*(int *)(param_1 + 0xc0) == 4) {
        local_d64 = 0x7000003;
      }
      else if (*(int *)(param_1 + 0xc0) == 1) {
        local_d64 = 0x1000002;
      }
      piVar14 = local_cb0;
      for (iVar11 = 0x118; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      local_860 = &LAB_005ac450;
      local_cb0[0] = 0;
      local_884 = 0;
      local_d58[1] = puVar15;
      if (local_d8c == 0) {
        local_d94 = (int *)FUN_005a5bd0(param_8,1,local_d90);
        iVar11 = _SfDibFillRect_24(*local_d94,local_d94[0x10b],0,local_d94[0x10c],&DAT_00629e10,3);
        local_d74 = *(uint *)(*local_d94 + 4);
        local_d70 = *(int *)(*local_d94 + 8);
        local_d94[0x10d] = local_d94[0x10d] | 2;
        if (iVar11 < 0) goto LAB_005adea9;
LAB_005adf7b:
        uVar8 = *puVar15;
        local_d20 = local_d74;
        local_d28 = 0;
        local_d24 = 0;
        local_d1c.left = local_d70;
        if ((((uVar8 & 1) == 0) && (*(uint *)(param_1 + 0x88) == local_d74)) &&
           (*(int *)(param_1 + 0x8c) == local_d70)) {
          if ((*(double *)(puVar15 + 0x12a) < *(double *)(param_12 + 6) - _DAT_00629e08) ||
             (*(double *)(param_12 + 6) + _DAT_00629e08 < *(double *)(puVar15 + 0x12a)))
          goto LAB_005ae000;
          local_d84 = 1;
        }
        else {
LAB_005ae000:
          local_d84 = 0;
        }
        if (((puVar15[0x12e] == 2) &&
            ((float)puVar15[0x132] + (float)puVar15[0x131] + (float)puVar15[0x130] <= _DAT_00610f20)
            ) || ((local_d88 != (int *)0x1c && (local_d88 != (int *)0x20)))) {
          local_d7c = 0;
        }
        else {
          local_d7c = 1;
        }
        if ((puVar15[0x127] == 1) || (puVar15[0x127] == 2)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        bVar5 = false;
        if (param_11 == 1) {
          if ((*(int *)(param_1 + 0xfc) != 0) && (bVar4)) {
LAB_005ae08e:
            bVar5 = true;
          }
        }
        else if (((param_11 != 0) && (bVar4)) && (*(int *)(param_1 + 0xfc) != 0)) goto LAB_005ae08e;
        if ((((uVar8 & 0x80) != 0) && (bVar4)) && (param_11 != 0)) {
          bVar5 = true;
        }
        if (((uVar8 & 0x40) == 0) || ((param_11 != 2 && (param_11 != 3)))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        iVar11 = FUN_005ac4b0(puVar15);
        if ((((iVar11 == 0) && (local_d84 != 0)) && (param_13 == 0)) && (local_d7c == 0)) {
          if (bVar5) {
LAB_005ae17f:
            iVar11 = FUN_005acbc0();
            if (-1 < iVar11) {
              if ((bVar4) && (param_11 != 1)) {
                local_d94 = (int *)FUN_005ad9e0(local_d94,&local_d28,param_10,1,1,*puVar15 >> 7 & 1,
                                                puVar15 + 0x124,param_12,local_d90);
                bVar4 = false;
                puVar15[0x127] = 0;
              }
              else {
                local_d94 = (int *)FUN_005ad9e0(local_d94,&local_d28,param_10,
                                                *(undefined4 *)(param_1 + 0xfc),param_11,
                                                *puVar15 >> 7 & 1,puVar15 + 0x124,param_12,local_d90
                                               );
                puVar15[0x127] = 0;
              }
              goto LAB_005ae251;
            }
            goto LAB_005ae3dd;
          }
          if (bVar4) goto LAB_005ae255;
          if ((local_d74 != *(uint *)(*local_d94 + 4)) || (local_d70 != *(int *)(*local_d94 + 8)))
          goto LAB_005ae2f5;
          if (local_d8c == 0) {
            local_d4c[(int)local_d78] = local_d94;
          }
          else {
            piVar14 = local_d94;
            piVar10 = param_9;
            for (iVar11 = 0x118; iVar11 != 0; iVar11 = iVar11 + -1) {
              *piVar10 = *piVar14;
              piVar14 = piVar14 + 1;
              piVar10 = piVar10 + 1;
            }
            local_d94[0x10e] = local_d94[0x10e] + -1;
            if ((int *)*local_d94 == local_d94 + 1) {
              *param_9 = (int)(param_9 + 1);
            }
            local_d4c[(int)local_d78] = param_9;
          }
        }
        else {
          if (bVar5) goto LAB_005ae17f;
LAB_005ae251:
          if (bVar4) {
LAB_005ae255:
            FUN_005acbc0();
            if ((*(byte *)(local_d94 + 0x10d) & 1) != 0) {
              local_d94 = (int *)FUN_005a5de0(param_10,local_d94,&local_d28,local_d90);
            }
            FUN_005ad8e0(local_d94,&local_d28,param_11);
          }
          if (local_d7c != 0) {
            FUN_005acbc0();
            if ((*(byte *)(local_d94 + 0x10d) & 1) != 0) {
              local_d94 = (int *)FUN_005a5de0(param_10,local_d94,&local_d28,local_d90);
            }
            FUN_005ad7d0(local_d94,&local_d28,puVar15 + 0x12e);
          }
LAB_005ae2f5:
          if (puVar15[0x120] != 0) {
            iVar11 = FUN_005acbc0();
            if (iVar11 < 0) goto LAB_005ae3dd;
            FUN_005ac880(param_2,&local_d94,local_d94,puVar15 + 0x124,param_11,param_10,
                         puVar15[0x121],puVar15[0x120],&local_d74,local_d58[0],local_d90);
          }
          if ((((((local_d64 & 0x6000000) != 0) && (local_d84 == 0)) && ((*puVar15 & 2) == 0)) &&
              (((iVar11 = _SfGetPixelType_4(*local_d94), iVar11 != 0x20 ||
                (iVar11 = _SfGetPixelType_4(*local_d94), iVar11 != 0x1d)) ||
               (iVar11 = _SfGetPixelType_4(*local_d94), iVar11 != 0x1c)))) &&
             (iVar11 = FUN_005acbc0(), -1 < iVar11)) {
            local_d94 = (int *)FUN_005a5de0(param_10,local_d94,&local_d28,local_d90);
          }
LAB_005ae3dd:
          puVar6 = (uint *)FUN_005a5bd0(param_8,1,local_d90);
          local_d60 = puVar6;
          local_d1c.top =
               FUN_005ac4f0(param_1,puVar15,*puVar6,puVar6[0x10b],puVar6[0x10c],param_12,*local_d94,
                            local_d94[0x10b],&local_d74,local_d94[0x10c],puVar15 + 0x124,local_d64);
          if ((local_d1c.top == 0) && ((*(byte *)(local_d94 + 0x10d) & 2) == 0)) {
            iVar11 = 0;
          }
          else {
            iVar11 = 1;
          }
          puVar6[0x10d] = iVar11 << 1 | puVar6[0x10d] & 0xfffffffd;
          (*(code *)local_d94[0x114])(local_d94,local_d94[0x115],local_d94[0x116]);
          puStack_d68 = (undefined4 *)FUN_005a5bd0(param_8,1,unaff_EBP);
          if (puVar15[0x11e] != 0) {
            FUN_005abbd0(*puStack_d68,puStack_d68[0x10b],puStack_d68[0x10c],puVar15 + 0x11a,0,
                         &DAT_00629e10,0);
          }
          local_d74 = 0;
          local_d8c = 0;
          if (0 < (int)puVar15[0x11e]) {
            iVar11 = 0;
            do {
              puVar7 = (undefined4 *)(iVar11 + puVar15[0x11f]);
              local_d88 = (int *)(uint)(local_d74 == 0);
              if (puVar7[0xe] != 0) {
                local_d88 = (int *)local_d74;
              }
              puVar16 = (undefined4 *)(&iStack_d6c)[(int)local_d88];
              iVar9 = _SfGetPixelType_4(*puVar16);
              piVar14 = (int *)*puVar16;
              local_d4c[0] = (int *)((-(uint)(iVar9 != 0x20) & 0xfffffff4) + 0x10);
              iStack_d50 = puVar16[0x10b];
              if ((int *)puVar16[0x10c] == (int *)0x0) {
                uVar8 = (uint)*(ushort *)((int)piVar14 + 0xe) * piVar14[1] + 0x1f;
                local_d4c[1] = (int *)((int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3)
                ;
              }
              else {
                local_d4c[1] = (int *)puVar16[0x10c];
              }
              if (puVar7[0xe] == 0) {
                local_d78 = *(int **)(&iStack_d6c)[local_d74];
                local_d90 = *(int *)((&iStack_d6c)[local_d74] + 0x42c);
                iStack_d5c = ((int *)(&iStack_d6c)[local_d74])[0x10c];
                iVar9 = *(int *)(&iStack_d6c)[local_d74];
                if (iStack_d5c == 0) {
                  uVar8 = (uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f;
                  iStack_d5c = (int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3;
                }
              }
              else {
                local_d78 = (int *)0x0;
                local_d90 = 0;
                iStack_d5c = 0;
              }
              if (local_d24 != 0) {
                RStack_d0c.left =
                     (int)((local_d60[0x11a] & 0xffffc000) +
                          ((int)local_d60[0x11a] >> 0x1f & 0x3fffU)) >> 0xe;
                iVar9 = (local_d60[0x11c] - 1 | 0x3fff) + 1;
                RStack_d0c.right = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
                local_d1c.bottom = piVar14[2];
                RStack_d0c.top =
                     (int)((local_d60[0x11b] & 0xffffc000) +
                          ((int)local_d60[0x11b] >> 0x1f & 0x3fffU)) >> 0xe;
                iVar9 = (local_d60[0x11d] - 1 | 0x3fff) + 1;
                RStack_d0c.bottom = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
                local_d1c.left = 0;
                local_d1c.top = 0;
                local_d1c.right = piVar14[1];
                IntersectRect(&tStack_d44,&RStack_d0c,&local_d1c);
                if (piVar14[4] == 3) {
                  iVar9 = 0xc;
                }
                else {
                  iVar9 = piVar14[8] << 2;
                }
                iVar13 = *piVar14;
                piVar10 = piVar14;
                piVar17 = aiStack_434;
                for (uVar8 = (uint)(iVar13 + iVar9) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *piVar17 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar17 = piVar17 + 1;
                }
                for (uVar8 = iVar13 + iVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(char *)piVar17 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar17 = (int *)((int)piVar17 + 1);
                }
                local_d20 = tStack_d44.right - tStack_d44.left;
                local_d4c[0] = (int *)(tStack_d44.left * (int)local_d4c[0]);
                iVar9 = tStack_d44.bottom - tStack_d44.top;
                iStack_d50 = (int)local_d4c[0] +
                             iStack_d50 + (piVar14[2] - tStack_d44.bottom) * (int)local_d4c[1];
                piVar14 = aiStack_434;
                aiStack_434[1] = local_d20;
                aiStack_434[2] = iVar9;
                if (local_d78 != (int *)0x0) {
                  if (local_d78[4] == 3) {
                    iVar13 = 0xc;
                  }
                  else {
                    iVar13 = local_d78[8] << 2;
                  }
                  iVar3 = *local_d78;
                  piVar10 = local_d78;
                  piVar17 = aiStack_85c;
                  for (uVar8 = (uint)(iVar13 + iVar3) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *piVar17 = *piVar10;
                    piVar10 = piVar10 + 1;
                    piVar17 = piVar17 + 1;
                  }
                  for (uVar8 = iVar13 + iVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(char *)piVar17 = (char)*piVar10;
                    piVar10 = (int *)((int)piVar10 + 1);
                    piVar17 = (int *)((int)piVar17 + 1);
                  }
                  local_d90 = (int)local_d4c[0] +
                              local_d90 + (local_d78[2] - tStack_d44.bottom) * iStack_d5c;
                  local_d78 = aiStack_85c;
                  aiStack_85c[1] = local_d20;
                  aiStack_85c[2] = iVar9;
                }
              }
              puVar6 = local_d60;
              iVar9 = _SfVideoPlugin_ApplyFilterAutoCooked_108
                                (piVar14,iStack_d50,0,local_d4c[1],auStack_cfc,local_d60[0xe],
                                 local_d60[0xf],local_d78,local_d90,0,iStack_d5c,auStack_cfc,
                                 local_d60[0xe],local_d60[0xf],uStack_4,*puVar7,puVar7[1],puVar7[6],
                                 puVar7[7],puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],puVar7[0xc],
                                 puVar7[0xd],0,local_d64);
              if (puVar7[0xe] == 0) {
                uVar8 = *(uint *)((&iStack_d6c)[(int)local_d88] + 0x434);
                *(uint *)((&iStack_d6c)[(int)local_d88] + 0x434) =
                     (*(uint *)((&iStack_d6c)[local_d74] + 0x434) ^ uVar8) & 2 ^ uVar8;
              }
              if ((*(byte *)(puVar7 + 0x12) & 1) != 0) {
                *(uint *)((&iStack_d6c)[(int)local_d88] + 0x434) =
                     *(uint *)((&iStack_d6c)[(int)local_d88] + 0x434) | 2;
              }
              if (-1 < iVar9) {
                local_d74 = (uint)local_d88;
              }
              local_d8c = local_d8c + 1;
              iVar11 = iVar11 + 0x50;
              param_5 = param_2;
              puVar15 = local_d60;
            } while ((int)local_d8c < (int)puVar6[0x11e]);
          }
          uVar8 = local_d74;
          if (param_5 == (undefined4 *)0x0) {
            fVar1 = (float)puVar15[0x122];
            if ((_DAT_00619ab0 != fVar1) && (param_1 == 1)) goto LAB_005ae8db;
          }
          else {
            fVar1 = (float)puVar15[0x123];
            if (_DAT_00619ab0 != fVar1) {
LAB_005ae8db:
              puVar7 = (undefined4 *)(&iStack_d6c)[local_d74];
              _SfDibFadeToColor_32
                        (*puVar7,puVar7[0x10b],0,puVar7[0x10c],&DAT_00629e10,_DAT_00619ab0 - fVar1,0
                         ,local_d70);
              puVar7[0x10d] = puVar7[0x10d] | 2;
            }
          }
          local_d58[local_d84] = (uint *)(&iStack_d6c)[uVar8];
          iVar11 = (&iStack_d6c)[uVar8 ^ 1];
          (**(code **)(iVar11 + 0x450))
                    (iVar11,*(undefined4 *)(iVar11 + 0x454),*(undefined4 *)(iVar11 + 0x458));
        }
      }
      else {
        local_d94 = local_cb0;
        local_d94 = (int *)FUN_005acee0();
        if (local_d94 != (int *)0x0) {
          local_d88 = (int *)puVar15[0x134];
          if (local_d88 == (int *)0x1d) {
            local_d88 = (int *)0x1c;
          }
          goto LAB_005adf7b;
        }
LAB_005adea9:
        local_d94 = (int *)FUN_005a5bd0(param_8,1,local_d90);
        _SfDibFillRect_24(*local_d94,local_d94[0x10b],0,local_d94[0x10c],&DAT_00629e10,3);
        local_d74 = *(uint *)(*local_d94 + 4);
        local_d70 = *(int *)(*local_d94 + 8);
        local_d94[0x10d] = local_d94[0x10d] | 2;
        local_d4c[(int)local_d78] = local_d94;
      }
      local_d78 = (int *)((int)local_d78 + 1);
    } while ((int)local_d78 < param_4);
  }
  piVar10 = local_d4c[1];
  piVar14 = local_d4c[0];
  if (param_4 != 2) {
    if (param_5 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)FUN_005a5bd0(param_8,1,local_d90);
      piVar10 = (int *)FUN_005a5bd0(param_8,1,local_d90);
      _SfDibFillRect_24(*piVar10,piVar10[0x10b],0,piVar10[0x10c],&DAT_00629e10,3);
      if ((*param_3 & 0x10) == 0) {
        local_d80 = piVar14[0x10b];
        local_d88 = (int *)*piVar14;
        local_d8c = piVar10[0x10b];
        iVar11 = *piVar10;
      }
      else {
        local_d80 = piVar10[0x10b];
        local_d88 = (int *)*piVar10;
        local_d8c = piVar14[0x10b];
        iVar11 = *piVar14;
      }
      _SfVideoPlugin_ApplyTransitionCooked_132
                (*puVar7,puVar7[0x10b],0,0,local_cf0,param_6,param_7,iVar11,local_d8c,0,0,local_cf0,
                 param_6,param_7,local_d88,local_d80,0,0,local_cf0,param_6,param_7,param_2,*param_5,
                 param_5[1],param_5[6],param_5[7],param_5[8],param_5[9],param_5[10],param_5[0xb],
                 param_5[0xc],param_5[0xd],local_d58[0]);
      puVar7[0x10d] = puVar7[0x10d] | 2;
      (*(code *)piVar14[0x114])(piVar14,piVar14[0x115],piVar14[0x116]);
      (*(code *)piVar10[0x114])(piVar10,piVar10[0x115],piVar10[0x116]);
      return puVar7;
    }
    goto LAB_005aec3b;
  }
  if ((local_d4c[0] == (int *)0x0) || (local_d4c[1] == (int *)0x0)) goto LAB_005aec3b;
  if (param_5 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)FUN_005a5bd0(param_8,1,local_d90);
    _SfVideoPlugin_ApplyTransitionCooked_132
              (*puVar7,puVar7[0x10b],0,0,local_cf0,param_6,param_7,*piVar14,piVar14[0x10b],0,0,
               local_cf0,param_6,param_7,*piVar10,piVar10[0x10b],0,0,local_cf0,param_6,param_7,
               param_2,*param_5,param_5[1],param_5[6],param_5[7],param_5[8],param_5[9],param_5[10],
               param_5[0xb],param_5[0xc],param_5[0xd],local_d58[0]);
    if ((((*(byte *)(piVar14 + 0x10d) & 2) == 0) && ((*(byte *)(piVar10 + 0x10d) & 2) == 0)) &&
       ((*(byte *)(param_5 + 0x12) & 1) == 0)) {
      iVar11 = 0;
    }
    else {
      iVar11 = 1;
    }
    puVar7[0x10d] = iVar11 << 1 | puVar7[0x10d] & 0xfffffffd;
    (*(code *)piVar14[0x114])(piVar14,piVar14[0x115],piVar14[0x116]);
    (*(code *)piVar10[0x114])(piVar10,piVar10[0x115],piVar10[0x116]);
    return puVar7;
  }
  iVar11 = _SfGetPixelType_4(*local_d4c[1]);
  local_d2c = *(undefined4 *)(*piVar10 + 8);
  local_d30 = *(undefined4 *)(*piVar10 + 4);
  tStack_d44.bottom = 0;
  local_d34 = 0;
  local_d80 = piVar14[0x10c];
  piVar17 = (int *)*piVar14;
  if (local_d80 == 0) {
    uVar8 = (uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f;
    local_d80 = (int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3;
  }
  local_d88 = (int *)piVar14[0x10b];
  if (local_d88 == (int *)0x0) {
    if (piVar17[4] == 0) {
      if (((piVar17[8] != 0) || (uVar2 = *(ushort *)((int)piVar17 + 0xe), uVar2 == 0)) ||
         (8 < uVar2)) goto LAB_005aeb40;
      iVar9 = *piVar17 + (1 << ((byte)uVar2 & 0x1f)) * 4;
    }
    else {
      if (piVar17[4] == 3) {
        local_d88 = piVar17 + 0xd;
        goto LAB_005aeb4a;
      }
LAB_005aeb40:
      iVar9 = *piVar17 + piVar17[8] * 4;
    }
    local_d88 = (int *)(iVar9 + (int)piVar17);
  }
LAB_005aeb4a:
  piVar17 = (int *)*piVar10;
  iVar9 = piVar10[0x10c];
  if (iVar9 == 0) {
    uVar8 = (uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f;
    iVar9 = (int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3;
  }
  piVar12 = (int *)piVar10[0x10b];
  if (piVar12 == (int *)0x0) {
    if (piVar17[4] == 0) {
      if (((piVar17[8] != 0) || (uVar2 = *(ushort *)((int)piVar17 + 0xe), uVar2 == 0)) ||
         (8 < uVar2)) goto LAB_005aebac;
      iVar13 = 1 << ((byte)uVar2 & 0x1f);
    }
    else {
      if (piVar17[4] == 3) {
        piVar12 = piVar17 + 0xd;
        goto LAB_005aebb6;
      }
LAB_005aebac:
      iVar13 = piVar17[8];
    }
    piVar12 = (int *)(*piVar17 + iVar13 * 4 + (int)piVar17);
  }
LAB_005aebb6:
  _SfDibWeightedCrossFade_52
            (piVar12,&tStack_d44.bottom,iVar9,0,(double)(float)param_3[600],local_d88,
             &tStack_d44.bottom,local_d80,0,(double)(float)param_3[0x122],
             (-(uint)(iVar11 != 0x20) & 0xfffffff4) + 0x10);
  if (((piVar10[0x10d] & 2U) == 0) && ((*(byte *)(piVar14 + 0x10d) & 2) == 0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  piVar10[0x10d] = iVar11 << 1 | piVar10[0x10d] & 0xfffffffdU;
  (*(code *)piVar14[0x114])(piVar14,piVar14[0x115],piVar14[0x116]);
LAB_005aec3b:
  return (undefined4 *)(&iStack_d50)[param_4];
}


