/* Module: vegas30.exe
   Function: FUN_0046af80
   Address: 0046af80
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0046af80(int param_1,int *param_2,int param_3,uint param_4,uint param_5,uint *param_6,
                  undefined4 param_7,int param_8,int *param_9,int param_10,int *param_11,
                  int param_12)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  HCURSOR pHVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int iStack_94;
  int *local_90;
  int iStack_8c;
  int local_88;
  undefined4 *local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  uint local_44;
  int local_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  undefined1 auStack_20 [32];
  
  puVar1 = *(undefined4 **)(param_1 + 0xbc8);
  iVar11 = *param_2;
  local_90 = (int *)0x0;
  local_68 = param_4;
  local_64 = param_5;
  if (iVar11 < 1) {
    return (int *)0x1;
  }
  local_84 = puVar1;
  local_80 = iVar11;
  _SfList_Sort_12(param_2,0,&LAB_0046b9b0);
  local_30 = (int *)FUN_005b87b0(puVar1);
  local_60 = *local_30;
  local_34 = 0;
  local_78 = 0;
  local_74 = 0;
  local_44 = 0;
  local_40 = 0;
  local_7c = 0;
  FUN_004694a0(param_2,&local_78,&local_34,&local_44,0,0,&local_24);
  if (local_24 != 0) {
    local_7c = 1;
  }
  FUN_005b83b0(puVar1,1);
  local_54 = FUN_005d97c0(puVar1);
  iVar5 = local_7c;
  puVar1 = local_84;
  local_88 = 0;
  iVar14 = -2;
  iVar8 = local_7c;
  if (local_7c < iVar11) {
    iVar11 = local_7c * 4;
    iVar12 = local_7c;
    do {
      iVar12 = iVar12 + 1;
      iVar2 = *(int *)(*(int *)(param_2[2] + iVar11) + 0xc);
      if ((iVar2 != -1) && (-1 < iVar2)) {
        *(int *)(*(int *)(param_2[2] + iVar11) + 0xc) = iVar14;
        for (iVar9 = iVar12; iVar9 < local_80; iVar9 = iVar9 + 1) {
          iVar3 = *(int *)(param_2[2] + iVar9 * 4);
          if (*(int *)(iVar3 + 0xc) == iVar2) {
            *(int *)(iVar3 + 0xc) = iVar14;
          }
        }
        iVar14 = iVar14 + -1;
        local_88 = local_88 + 1;
      }
      iVar11 = iVar11 + 4;
    } while (iVar12 < local_80);
  }
  for (; iVar11 = local_88, iVar8 < local_80; iVar8 = iVar8 + 1) {
    iVar11 = *(int *)(param_2[2] + iVar8 * 4);
    iVar14 = *(int *)(iVar11 + 0xc);
    if (iVar14 < -1) {
      *(int *)(iVar11 + 0xc) = -2 - iVar14;
    }
  }
  if ((0 < local_88) && (FUN_004ea880(local_84), 0 < iVar11)) {
    do {
      local_90 = (int *)FUN_005d9840(puVar1,DAT_0064a580,&local_6c,0);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  local_5c = iVar5;
  if (iVar5 < local_80) {
    do {
      iVar11 = local_5c;
      if ((*param_11 == 0) && (uVar6 = _SfGetMillisec_0(), param_10 + 500U < uVar6)) {
        pHVar7 = (HCURSOR)_SfGetUICursor_4(0x7f02);
        pHVar7 = SetCursor(pHVar7);
        *param_11 = (int)pHVar7;
      }
      piVar4 = *(int **)(param_2[2] + iVar11 * 4);
      uVar6 = piVar4[8] - local_78;
      (**(code **)(*param_9 + 8))
                (piVar4[4],piVar4[1],local_60,uVar6 + param_4,
                 ((piVar4[9] - local_74) - (uint)((uint)piVar4[8] < local_78)) + param_5 +
                 (uint)CARRY4(uVar6,param_4),iVar11 - local_7c == param_8,&local_2c);
      puVar1 = local_84;
      if (local_2c == 0) {
        iVar11 = FUN_005ce780(&iStack_8c,local_84,piVar4[1],iStack_28,0);
        if (-1 < iVar11) {
          FUN_004ea250(puVar1,iStack_8c,0xb,0);
          local_60 = local_60 + 1;
        }
      }
      else if (local_2c == 1) {
        iStack_8c = *(int *)(local_30[2] + iStack_28 * 4);
        FUN_004ea250(local_84,iStack_8c,1,0);
        if (DAT_0064778c != 0) {
          FUN_004ea250(puVar1,iStack_8c,0xf,0);
        }
      }
      if (*piVar4 == 0x32) {
        uVar6 = piVar4[8] - local_78;
        local_90 = (int *)FUN_0047e230(iStack_8c + 0x638,piVar4 + 0x24,iStack_8c,uVar6 + param_4,
                                       ((piVar4[9] - local_74) - (uint)((uint)piVar4[8] < local_78))
                                       + param_5 + (uint)CARRY4(uVar6,param_4),piVar4[10],
                                       piVar4[0xb],0xffffffff);
        if ((*(int *)(iStack_8c + 0x18) == piVar4[4]) && (*(int *)(iStack_8c + 4) == 3)) {
          uStack_50 = param_4 - local_78;
          iStack_4c = (param_5 - local_74) - (uint)(param_4 < local_78);
          if (uStack_50 != 0 || iStack_4c != 0) {
            FUN_005c0400();
            local_6c = FUN_005be610(1,auStack_20);
            iVar11 = 0;
            if (0 < local_6c) {
              do {
                iStack_58 = FUN_005be910(iVar11,auStack_20);
                local_88 = iStack_58 + -1;
                iStack_48 = -1;
                if ((iStack_4c < 1) && (iStack_4c < 0)) {
                  iStack_48 = 1;
                  local_88 = 0;
                }
                iStack_70 = 0;
                if (-1 < local_88) {
                  do {
                    if (iStack_58 <= local_88) break;
                    iVar8 = FUN_005bec40(iVar11,local_88,auStack_20,0,&uStack_3c,0,0,0);
                    if (iVar8 != 0) {
                      iVar8 = piVar4[0xd];
                      uVar6 = piVar4[0xc];
                      if ((iVar8 <= iStack_38) && ((iVar8 < iStack_38 || (uVar6 <= uStack_3c)))) {
                        iVar8 = piVar4[0xf] + iVar8 + (uint)CARRY4(piVar4[0xe],uVar6);
                        if ((iStack_38 <= iVar8) &&
                           ((iStack_38 < iVar8 || (uStack_3c < piVar4[0xe] + uVar6)))) {
                          bVar16 = CARRY4(uStack_3c,uStack_50);
                          uStack_3c = uStack_3c + uStack_50;
                          iStack_38 = iStack_38 + iStack_4c + (uint)bVar16;
                          FUN_005bf3b0(iVar11,&local_88,&iStack_58,auStack_20,uStack_3c,iStack_38);
                          iStack_70 = 1;
                        }
                      }
                    }
                    local_88 = local_88 + iStack_48;
                  } while (-1 < local_88);
                  if (iStack_70 != 0) {
                    FUN_005bf6b0(iVar11,auStack_20,0);
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < local_6c);
            }
          }
        }
      }
      else {
        uVar6 = piVar4[8] - local_78;
        local_90 = (int *)FUN_005c9cc0(&iStack_94,puVar1,iStack_8c,piVar4[1],uVar6 + param_4,
                                       ((piVar4[9] - local_74) - (uint)((uint)piVar4[8] < local_78))
                                       + param_5 + (uint)CARRY4(uVar6,param_4),piVar4[0x23],0,0);
        if ((int)local_90 < 0) break;
        *(int *)(iStack_94 + 0x20) = piVar4[10];
        *(int *)(iStack_94 + 0x24) = piVar4[0xb];
        iStack_70 = FUN_005bad20(puVar1);
        FUN_004eb0f0(puVar1,0x26,0);
        iVar11 = piVar4[0x21] + -1;
        if (-1 < iVar11) {
          local_90 = piVar4 + piVar4[0x21] + 0x87;
          do {
            local_6c = 0;
            iVar8 = *local_90;
            iVar5 = piVar4[0x20];
            iVar14 = FUN_005ec8a0(*(int *)(iVar8 + 0x18) + 0x170,&local_6c,0,0);
            if ((iVar14 < 0) ||
               (iVar8 = FUN_005c70c0(local_84,iStack_94,*(undefined4 *)(iVar8 + 0x18),iVar8,
                                     *(undefined4 *)(iVar8 + 0x1c),0,iVar5 == iVar11), iVar8 < 0))
            break;
            iVar11 = iVar11 + -1;
            local_90 = local_90 + -1;
          } while (-1 < iVar11);
        }
        if (param_12 != 0) {
          FUN_0046aee0(param_1,iStack_94);
        }
        *(int *)(iStack_94 + 0x10) = piVar4[6];
        *(uint *)(iStack_94 + 0x10) = *(uint *)(iStack_94 + 0x10) & 0xfffffff7;
        *(uint *)(iStack_94 + 0x10) = *(uint *)(iStack_94 + 0x10) & 0xfff7ffff;
        *(uint *)(iStack_94 + 0x10) = *(uint *)(iStack_94 + 0x10) | 0x10;
        *(uint *)(iStack_94 + 0x10) = *(uint *)(iStack_94 + 0x10) & 0xff7fffff;
        *(uint *)(iStack_94 + 0x10) = *(uint *)(iStack_94 + 0x10) & 0xfeffffff;
        *(int *)(iStack_94 + 0x28) = piVar4[0xe];
        *(int *)(iStack_94 + 0x2c) = piVar4[0xf];
        piVar13 = piVar4 + 0x10;
        piVar15 = (int *)(iStack_94 + 0x58);
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar15 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar15 = piVar15 + 1;
        }
        *(int *)(iStack_94 + 0x40) = piVar4[0xc];
        *(int *)(iStack_94 + 0x44) = piVar4[0xd];
        *(uint *)(iStack_94 + 0x58) = *(uint *)(iStack_94 + 0x58) | 0x20;
        *(uint *)(iStack_94 + 0x58) = *(uint *)(iStack_94 + 0x58) | 0x40;
        FUN_005c6cd0(iStack_94,3);
        local_90 = (int *)FUN_0047de20(iStack_94 + 0x98,piVar4 + 0x24,iStack_94,0,0,0xffffffff);
        if ((int)local_90 < 0) break;
        if (piVar4[1] == 2) {
          *(int *)(iStack_94 + 0xf8) = piVar4[0x3c];
          *(int *)(iStack_94 + 0xfc) = piVar4[0x3d];
        }
        if (piVar4[1] == 3) {
          *(int *)(iStack_94 + 0xf8) = piVar4[0x40];
          *(int *)(iStack_94 + 0x100) = piVar4[0x42];
          *(int *)(iStack_94 + 0x104) = piVar4[0x43];
          *(int *)(iStack_94 + 0x108) = piVar4[0x44];
          *(int *)(iStack_94 + 0x10c) = piVar4[0x45];
          *(int *)(iStack_94 + 0x110) = piVar4[0x46];
          *(int *)(iStack_94 + 0x114) = piVar4[0x47];
          *(int *)(iStack_94 + 0x118) = piVar4[0x48];
          *(int *)(iStack_94 + 0x11c) = piVar4[0x49];
          *(int *)(iStack_94 + 0x120) = piVar4[0x4a];
          *(int *)(iStack_94 + 0x124) = piVar4[0x4b];
          *(int *)(iStack_94 + 0x128) = piVar4[0x4c];
          *(int *)(iStack_94 + 300) = piVar4[0x4d];
          *(int *)(iStack_94 + 0x130) = piVar4[0x4e];
          *(int *)(iStack_94 + 0x134) = piVar4[0x4f];
          *(int *)(iStack_94 + 0x138) = piVar4[0x50];
          *(int *)(iStack_94 + 0x13c) = piVar4[0x51];
          *(int *)(iStack_94 + 0x1fc) = piVar4[0x81];
          *(int *)(iStack_94 + 0x210) = piVar4[0x86];
          *(int *)(iStack_94 + 0x214) = piVar4[0x87];
          FUN_0050b930(iStack_94 + 0x144,piVar4 + 0x53);
          *(int *)(iStack_94 + 0x1d4) = iStack_94;
          iVar11 = FUN_0044b540(iStack_94 + 0x140,piVar4 + 0x52);
          if (-1 < iVar11) {
            if (*(int **)(iStack_94 + 0x140) == (int *)0x0) {
              iVar11 = 0;
            }
            else {
              iVar11 = **(int **)(iStack_94 + 0x140);
            }
            iVar8 = 0;
            if (0 < iVar11) {
              do {
                FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(iStack_94 + 0x140) + 8) + iVar8 * 4),
                             iStack_94,1,*(undefined4 *)(iStack_94 + 0x20),
                             *(undefined4 *)(iStack_94 + 0x24));
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar11);
            }
          }
          iVar11 = FUN_0044b540(iStack_94 + 0x200,piVar4 + 0x82);
          if (-1 < iVar11) {
            if (*(int **)(iStack_94 + 0x200) == (int *)0x0) {
              iVar11 = 0;
            }
            else {
              iVar11 = **(int **)(iStack_94 + 0x200);
            }
            iVar8 = 0;
            if (0 < iVar11) {
              do {
                FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(iStack_94 + 0x200) + 8) + iVar8 * 4),
                             iStack_94,7,*(undefined4 *)(iStack_94 + 0x20),
                             *(undefined4 *)(iStack_94 + 0x24));
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar11);
            }
          }
          local_90 = (int *)FUN_0044b540(iStack_94 + 0x204,piVar4 + 0x83);
          if (-1 < (int)local_90) {
            if (*(int **)(iStack_94 + 0x204) == (int *)0x0) {
              iVar11 = 0;
            }
            else {
              iVar11 = **(int **)(iStack_94 + 0x204);
            }
            iVar8 = 0;
            if (0 < iVar11) {
              do {
                FUN_005a5060(*(undefined4 *)(*(int *)(*(int *)(iStack_94 + 0x204) + 8) + iVar8 * 4),
                             iStack_94,8,*(undefined4 *)(iStack_94 + 0x20),
                             *(undefined4 *)(iStack_94 + 0x24));
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar11);
            }
          }
        }
        puVar1 = local_84;
        if ((-1 < piVar4[3]) && (iVar11 = FUN_005d9990(local_84,piVar4[3] + local_54), iVar11 != 0))
        {
          local_90 = (int *)FUN_005d9da0(puVar1,iVar11,iStack_94);
        }
        uVar10 = *(uint *)(iStack_94 + 0x20) + *(uint *)(iStack_94 + 0x18);
        uVar6 = *(int *)(iStack_94 + 0x24) + *(int *)(iStack_94 + 0x1c) +
                (uint)CARRY4(*(uint *)(iStack_94 + 0x20),*(uint *)(iStack_94 + 0x18));
        if (((int)local_64 <= (int)uVar6) && (((int)local_64 < (int)uVar6 || (local_68 <= uVar10))))
        {
          local_68 = uVar10;
          local_64 = uVar6;
        }
        if ((param_3 != 0) && ((*(uint *)(iStack_94 + 0x10) & 0x400) == 0)) {
          _SfList_InsertList_16(param_3,0xffffffff,&iStack_94,1);
        }
      }
      local_5c = local_5c + 1;
    } while (local_5c < local_80);
  }
  puVar1 = local_84;
  iVar8 = FUN_005d97c0(local_84);
  iVar11 = local_54;
  if (local_54 != iVar8) {
    iVar8 = FUN_005d97c0(puVar1);
    FUN_005d97e0(puVar1,iVar11,iVar8 - iVar11);
    *(uint *)*puVar1 = *(uint *)*puVar1 | 0x20000;
  }
  if (param_6 != (uint *)0x0) {
    uVar10 = local_44 + param_4;
    uVar6 = local_40 + param_5 + (uint)CARRY4(local_44,param_4);
    if (((int)uVar6 <= (int)local_64) && (((int)uVar6 < (int)local_64 || (uVar10 < local_68)))) {
      uVar6 = local_64;
      uVar10 = local_68;
    }
    *param_6 = uVar10;
    param_6[1] = uVar6;
  }
  FUN_005b84d0(puVar1,1);
  FUN_00456c20(param_1);
  FUN_004530a0(param_1,0);
  return local_90;
}


