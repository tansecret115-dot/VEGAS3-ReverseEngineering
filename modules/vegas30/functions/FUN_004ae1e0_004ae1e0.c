/* Module: vegas30.exe
   Function: FUN_004ae1e0
   Address: 004ae1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ae1e0(int param_1,uint param_2,uint *param_3,int *param_4,uint *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  int local_38;
  uint local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  uint local_1c;
  tagPOINT local_18;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_005b8630(uVar1);
  local_38 = FUN_004e9f70(uVar1,0x23f,"DropOpDrop");
  if (-1 < local_38) {
    local_2c = -1;
    if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
      local_2c = *param_4;
    }
    local_28 = 0;
    if (param_5 != (uint *)0x0) {
      local_28 = *param_5;
    }
    iVar3 = FUN_004ab300(param_2,uVar1);
    puVar10 = param_3;
    if ((param_3 != (uint *)0x0) && (0 < iVar3)) {
      if ((*param_3 & 0x100000) != 0) {
        FUN_004aad00(param_3,uVar1);
      }
      iVar3 = *(int *)(param_1 + 0x170);
      if (*(int *)(param_1 + 0xbc8) == 0) {
        param_2 = 0;
      }
      else {
        param_2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      param_4 = (int *)puVar10[2];
      local_18.y = 0;
      local_10 = 0;
      local_c = 0;
      local_18.x = 0;
      local_8 = 0;
      local_4 = 0;
      param_5 = (uint *)0x0;
      if (0 < (int)param_4) {
        puVar10 = param_3 + 0x1c;
        do {
          if (((param_5 < param_3[2]) && (puVar10 != (uint *)0x0)) && ((*puVar10 & 0x40) == 0)) {
            uVar12 = puVar10[2];
            iVar4 = FUN_004a9cf0(local_2c,uVar12);
            if (iVar4 == 0) {
              *puVar10 = *puVar10 | 0x40;
            }
            else {
              if (puVar10[0x13] != 0) goto LAB_004ae38d;
              if (puVar10[0x12] == 0xffffffff) {
                *puVar10 = *puVar10 | 0x40;
              }
              else {
                iVar4 = (&local_18.x)[uVar12];
                iVar5 = FUN_004aa470(param_3,uVar12);
                local_24 = (uint *)(iVar5 + iVar4);
                iVar5 = FUN_004aa490(param_3,uVar12);
                if ((int)local_24 < iVar5) {
                  if ((iVar3 == 0) || (iVar3 == 2)) {
                    if (iVar4 < 1) goto LAB_004ae389;
                  }
                  else if (iVar3 == 1) {
LAB_004ae389:
                    (&local_18.x)[uVar12] = iVar4 + 1;
                  }
LAB_004ae38d:
                  if ((*param_3 & 0x100000) != 0) {
                    puVar10[0x13] = 0;
                    puVar10[0x14] = 0;
                  }
                }
                else if (iVar3 == 1) {
                  *puVar10 = *puVar10 | 0x40;
                }
                else {
                  if (((iVar3 != 0) && (iVar3 != 2)) || (0 < iVar4)) goto LAB_004ae38d;
                  *puVar10 = *puVar10 | 0x40;
                }
              }
            }
          }
          param_5 = (uint *)((int)param_5 + 1);
          puVar10 = puVar10 + 0x1a;
        } while ((int)param_5 < (int)param_4);
      }
      uVar12 = (uint)param_4;
      if (0 < (int)param_4) {
        local_2c = 1;
        puVar10 = param_3 + 0x36;
        do {
          if (local_2c - 1 < param_3[2]) {
            puVar14 = puVar10 + -0x1a;
          }
          else {
            puVar14 = (uint *)0x0;
          }
          if ((*puVar14 & 0x40) == 0) {
            local_20 = (uint *)puVar14[0x12];
            uVar9 = puVar14[2];
            if ((puVar14[0x13] == 0) ||
               ((uVar8 = *(uint *)(puVar14[0x13] + 4), uVar8 != uVar9 && (uVar8 != 0)))) {
              param_5 = (uint *)0x0;
              local_24 = local_20;
              local_38 = FUN_004abe00(param_1,uVar1,uVar9,local_20,&param_5,&local_24);
              if (local_38 < 0) {
                *puVar14 = *puVar14 | 0x40;
              }
              else {
                puVar14[0x13] = (uint)param_5;
                puVar14[0x12] = (uint)local_24;
                iVar4 = FUN_004a9cc0(uVar9);
                param_3[iVar4 + 4] = param_3[iVar4 + 4] + 1;
                if (iVar3 == 1) {
                  uVar9 = puVar14[0x12];
                  uVar8 = local_2c;
                  puVar14 = puVar10;
                  if ((int)local_2c < (int)uVar12) {
                    do {
                      pbVar13 = (byte *)(-(uint)(uVar8 < param_3[2]) & (uint)puVar14);
                      if (((*pbVar13 & 0x40) == 0) && (*(int *)(pbVar13 + 0x48) != -1)) {
                        if (*(int *)(pbVar13 + 0x4c) == 0) {
                          *(uint *)(pbVar13 + 0x48) = uVar9 + 1;
                          if (*(int *)(pbVar13 + 0x4c) != 0) {
                            iVar4 = FUN_004aa940(param_2,uVar9 + 1);
                            if ((iVar4 == 0) ||
                               ((*(int *)(iVar4 + 4) != *(int *)(pbVar13 + 8) &&
                                (*(int *)(iVar4 + 4) != 0)))) {
                              pbVar13[0x4c] = 0;
                              pbVar13[0x4d] = 0;
                              pbVar13[0x4e] = 0;
                              pbVar13[0x4f] = 0;
                            }
                            else {
                              *(int *)(pbVar13 + 0x4c) = iVar4;
                            }
                          }
                        }
                        else {
                          uVar6 = _SfList_FindSpecificItemRange_16
                                            (param_2,0,0xffffffff,*(int *)(pbVar13 + 0x4c));
                          *(undefined4 *)(pbVar13 + 0x48) = uVar6;
                        }
                      }
                      uVar8 = uVar8 + 1;
                      uVar12 = (uint)param_4;
                      puVar14 = puVar14 + 0x1a;
                    } while ((int)uVar8 < (int)param_4);
                  }
                }
                else {
                  uVar9 = local_2c;
                  puVar11 = puVar10;
                  if ((int)local_2c < (int)uVar12) {
                    do {
                      pbVar13 = (byte *)(-(uint)(uVar9 < param_3[2]) & (uint)puVar11);
                      if (((*pbVar13 & 0x40) == 0) && (*(uint **)(pbVar13 + 0x48) == local_20)) {
                        if (*(uint *)(pbVar13 + 8) == puVar14[2]) {
                          *(uint **)(pbVar13 + 0x4c) = param_5;
                        }
                        else {
                          if (*(int *)(pbVar13 + 0x4c) == 0) {
                            iVar4 = (int)*(uint **)(pbVar13 + 0x48) + 1;
                          }
                          else {
                            iVar4 = _SfList_FindSpecificItemRange_16
                                              (param_2,0,0xffffffff,puVar14[0x13]);
                          }
                          *(int *)(pbVar13 + 0x48) = iVar4;
                        }
                      }
                      uVar9 = uVar9 + 1;
                      uVar12 = (uint)param_4;
                      puVar11 = puVar11 + 0x1a;
                    } while ((int)uVar9 < (int)param_4);
                  }
                }
              }
            }
          }
          puVar10 = puVar10 + 0x1a;
          bVar2 = (int)local_2c < (int)uVar12;
          local_2c = local_2c + 1;
        } while (bVar2);
      }
      param_5 = (uint *)0x0;
      if (0 < (int)uVar12) {
        puVar10 = param_3 + 0x1c;
        do {
          puVar14 = (uint *)(-(uint)(param_5 < param_3[2]) & (uint)puVar10);
          if ((((*puVar14 & 0x40) == 0) &&
              (local_24 = puVar10, iVar3 = FUN_004ab100(uVar1,puVar14[1]), iVar3 != 0)) &&
             (*(int *)(iVar3 + 0x130) != 0)) {
            param_2 = puVar14[0x14];
            if (param_2 == 0) {
              local_38 = FUN_004ad9f0(uVar1,puVar14[0x13],puVar14[0x10],puVar14[0x11],puVar14[2],
                                      &param_2);
              if ((local_38 < 0) || (param_2 == 0)) {
                *puVar14 = *puVar14 | 0x40;
                goto LAB_004ae692;
              }
              puVar14[0x14] = param_2;
            }
            puVar11 = puVar10;
            uVar12 = (uint)param_5;
            if ((local_28 & 0x100) != 0) {
              while (uVar12 = uVar12 + 1, (int)uVar12 < (int)param_4) {
                puVar11 = puVar11 + 0x1a;
                puVar7 = (uint *)(-(uint)(uVar12 < param_3[2]) & (uint)puVar11);
                puVar10 = local_24;
                if (((*puVar7 & 0x40) == 0) && (puVar7[2] == puVar14[2])) {
                  if (param_2 == 0) {
                    *puVar7 = *puVar7 | 0x40;
                  }
                  else if (puVar7[0x14] != param_2) {
                    puVar7[0x14] = param_2;
                    if (puVar7[0x13] != *(uint *)(param_2 + 8)) {
                      puVar7[0x13] = *(uint *)(param_2 + 8);
                    }
                  }
                }
              }
            }
          }
LAB_004ae692:
          param_5 = (uint *)((int)param_5 + 1);
          puVar10 = puVar10 + 0x1a;
          local_24 = puVar10;
        } while ((int)param_5 < (int)param_4);
      }
      uVar12 = (uint)param_4;
      if (1 < (int)param_4) {
        FUN_004ada90(uVar1,param_3,local_28);
      }
      FUN_005b83b0(uVar1,1);
      param_5 = (uint *)0x0;
      if (0 < (int)uVar12) {
        puVar10 = param_3 + 0x28;
        do {
          if ((((param_5 < param_3[2]) && ((puVar10[-0xc] & 0x40) == 0)) &&
              (puVar10 != (uint *)&DAT_00000030)) && (puVar10[8] != 0)) {
            local_20 = (uint *)*puVar10;
            local_1c = puVar10[1];
            uVar12 = puVar10[-2];
            uVar9 = puVar10[-1];
            iVar3 = FUN_004ab100(uVar1,puVar10[-0xb]);
            if (((iVar3 != 0) &&
                (local_38 = FUN_004ad710(iVar3,puVar10[-9],uVar12,uVar9,local_20,local_1c,puVar10[8]
                                         ,1), (*(uint *)(iVar3 + 0x134) & 0x400) != 0)) &&
               (param_4 == (int *)0x1)) {
              local_18.x = puVar10[9];
              local_18.y = puVar10[10];
              local_10 = puVar10[0xb];
              local_c = puVar10[0xc];
              MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_18,2);
              local_38 = FUN_005f34d0(puVar10[8],&local_18);
            }
          }
          param_5 = (uint *)((int)param_5 + 1);
          puVar10 = puVar10 + 0x1a;
        } while ((int)param_5 < (int)param_4);
      }
      FUN_005b84d0(uVar1,1);
      FUN_004ea040(uVar1,0);
      return local_38;
    }
    FUN_004ea040(uVar1,1);
    local_38 = 1;
  }
  return local_38;
}


