/* Module: vegas30.exe
   Function: FUN_00594550
   Address: 00594550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00594550(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,uint param_7,double param_8,int param_9,uint param_10,int param_11,
                 uint param_12)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  longlong lVar10;
  undefined4 uVar11;
  int local_b0 [5];
  uint local_9c;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_30;
  uint local_2c;
  int *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00629940;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff30;
  ExceptionList = &local_14;
  local_24 = (int *)FUN_005b87b0(param_2);
  local_4c = 0;
  local_44 = 0;
  local_48 = ftol();
  iVar4 = FUN_005943c0(param_6,param_7,param_9);
  local_50 = iVar4;
  uVar5 = ftol();
  local_38 = param_12;
  if (param_12 <= uVar5) {
    local_38 = uVar5;
  }
  if (*(int *)(param_1 + 0x744) != 0) {
    ExceptionList = local_14;
    return 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x748) != 0) {
    ExceptionList = local_14;
    return 0xfffffffd;
  }
  uVar8 = (uint)(param_8 < _DAT_00610fd8);
  uVar5 = *(uint *)(param_1 + 0x488 + iVar4 * 8);
  iVar7 = *(int *)(param_1 + 0x48c + iVar4 * 8);
  if ((uVar5 == 1) && (iVar7 == -0x40000000)) {
    *(undefined4 *)(param_1 + 0xe8 + iVar4 * 8) = 0;
    *(undefined4 *)(param_1 + 0xec + iVar4 * 8) = 0;
    *(uint *)(param_1 + 0x2b8 + iVar4 * 8) = -param_10;
    *(uint *)(param_1 + 700 + iVar4 * 8) = -(param_11 + (uint)(param_10 != 0));
    local_44 = 1;
  }
  else if ((param_7 & 0x10000000) == 0) {
    if ((param_7 & 0x20000000) != 0) {
      puVar1 = (uint *)(param_1 + 0xe8 + iVar4 * 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (param_10 - uVar5);
      piVar3 = (int *)(param_1 + 0xec + iVar4 * 8);
      *piVar3 = *piVar3 + ((param_11 - iVar7) - (uint)(param_10 < uVar5)) +
                (uint)CARRY4(uVar2,param_10 - uVar5);
      uVar5 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
      *(uint *)(param_1 + 0x2b8 + iVar4 * 8) = uVar5 - param_10;
      *(uint *)(param_1 + 700 + iVar4 * 8) =
           (*(int *)(param_1 + 0xec + iVar4 * 8) - param_11) - (uint)(uVar5 < param_10);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
    *(uint *)(param_1 + 0x2b8 + iVar4 * 8) = uVar5 - param_10;
    *(uint *)(param_1 + 700 + iVar4 * 8) =
         (*(int *)(param_1 + 0xec + iVar4 * 8) - param_11) - (uint)(uVar5 < param_10);
  }
  if ((uVar8 != 0) && (*(uint *)(DAT_0065a06c + 0xe8) == uVar8)) {
    uVar5 = *(uint *)(param_1 + 0x2b8 + iVar4 * 8);
    *(uint *)(param_1 + 0xe8 + iVar4 * 8) = uVar5 + param_10;
    *(uint *)(param_1 + 0xec + iVar4 * 8) =
         *(int *)(param_1 + 700 + iVar4 * 8) + param_11 + (uint)CARRY4(uVar5,param_10);
  }
  local_2c = uVar8;
  if ((param_9 == 0) && (uVar8 != *(uint *)(DAT_0065a06c + 0xe8))) {
    *(undefined4 *)(param_1 + 0xe8 + iVar4 * 8) = 0;
    *(undefined4 *)(param_1 + 0xec + iVar4 * 8) = 0;
    *(uint *)(param_1 + 0x2b8 + iVar4 * 8) = -param_10;
    *(uint *)(param_1 + 700 + iVar4 * 8) = -(param_11 + (uint)(param_10 != 0));
    FUN_005961f0(DAT_0065a06c,param_2);
    *(uint *)(DAT_0065a06c + 0xe8) = uVar8;
  }
  else {
    if (uVar8 == *(uint *)(param_1 + 0x658 + iVar4 * 4)) goto LAB_005947fc;
    *(undefined4 *)(param_1 + 0xe8 + iVar4 * 8) = 0;
    *(undefined4 *)(param_1 + 0xec + iVar4 * 8) = 0;
    *(uint *)(param_1 + 0x2b8 + iVar4 * 8) = -param_10;
    *(uint *)(param_1 + 700 + iVar4 * 8) = -(param_11 + (uint)(param_10 != 0));
  }
  *(uint *)(param_1 + 0x658 + iVar4 * 4) = uVar8;
LAB_005947fc:
  local_40 = 0;
  _SfList_DeleteList_16(*(undefined4 *)(param_1 + iVar4 * 4),0,0xffffffff,0);
  if ((param_7 & 0x8000000) == 0) {
    local_58 = *local_24;
    local_54 = 0;
    if (0 < local_58) {
      do {
        iVar7 = *(int *)(local_24[2] + local_54 * 4);
        if ((*(int *)(iVar7 + 4) == 2) &&
           (fVar9 = (float10)FUN_005942b0(iVar7,param_6,param_7,param_9),
           (float10)_DAT_00610fd8 < fVar9)) {
          uVar5 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
          FUN_00596140(iVar7,uVar5 + local_38,
                       *(int *)(param_1 + 0xec + iVar4 * 8) + (uint)CARRY4(uVar5,local_38),iVar4);
          local_b0[0] = iVar7;
          iVar7 = _SfList_InsertList_16(*(undefined4 *)(param_1 + iVar4 * 4),0xffffffff,local_b0,1);
          if (iVar7 < 0) {
            ExceptionList = local_14;
            return 0xfffffffd;
          }
          local_4c = local_4c + 1;
        }
        local_54 = local_54 + 1;
      } while (local_54 < local_58);
    }
  }
  else {
    local_4c = 0;
  }
  local_20 = 0;
  do {
    if (local_4c < 1) {
      if ((DAT_0064b4f0 != 0) && (0 < DAT_0064b158)) {
        uVar5 = *(uint *)(param_3 + 4);
        iVar7 = uVar5 * 5;
        lVar10 = __allrem(*(undefined4 *)(param_1 + 0xe8 + iVar4 * 8),
                          *(undefined4 *)(param_1 + 0xec + iVar4 * 8),iVar7,iVar7 >> 0x1f);
        local_9c = (uint)lVar10;
        if ((lVar10 < 0x100000000) && ((lVar10 < 0 || (local_9c < uVar5 / 3)))) {
          FUN_005944a0(param_4,param_12,param_3,local_9c);
        }
      }
      if (*(int *)(DAT_0065a06c + 0xe8) != 0) {
        puVar1 = (uint *)(param_1 + 0xe8 + iVar4 * 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - param_12;
        piVar3 = (int *)(param_1 + 0xec + iVar4 * 8);
        *piVar3 = *piVar3 - (uint)(uVar5 < param_12);
        *(uint *)(param_1 + 0x488 + iVar4 * 8) = param_10;
        *(int *)(param_1 + 0x48c + iVar4 * 8) = param_11;
      }
      if (*(int *)(DAT_0065a06c + 0xe8) == 0) {
        puVar1 = (uint *)(param_1 + 0xe8 + iVar4 * 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 + param_12;
        piVar3 = (int *)(param_1 + 0xec + iVar4 * 8);
        *piVar3 = *piVar3 + (uint)CARRY4(uVar5,param_12);
        *(uint *)(param_1 + 0x488 + iVar4 * 8) = param_12 + param_10;
        *(uint *)(param_1 + 0x48c + iVar4 * 8) = param_11 + (uint)CARRY4(param_12,param_10);
      }
      if (local_40 == 0) {
        param_12 = 0xfffffffe;
      }
      ExceptionList = local_14;
      return param_12;
    }
    local_6c = 0;
    local_64 = 0;
    while (piVar3 = *(int **)(param_1 + iVar4 * 4), local_64 < *piVar3) {
      iVar7 = *(int *)(piVar3[2] + local_64 * 4);
      puVar1 = (uint *)(param_1 + 0xe8 + iVar4 * 8);
      local_30 = iVar7;
      FUN_00596140(iVar7,local_38 + *puVar1,
                   *(int *)(param_1 + 0xec + iVar4 * 8) + (uint)CARRY4(local_38,*puVar1),iVar4);
      uVar5 = param_12;
      if ((local_44 != 0) && (local_2c == 0)) {
        uVar5 = local_48 + param_12;
      }
      iVar6 = FUN_00595df0(DAT_0065a06c,iVar7,*(undefined4 *)(param_1 + 0xe8 + iVar4 * 8),
                           *(undefined4 *)(param_1 + 0xec + iVar4 * 8),uVar5);
      if (iVar6 == 2) {
        uVar11 = *(undefined4 *)(param_1 + iVar4 * 4);
LAB_00595131:
        _SfList_DeleteList_16(uVar11,local_64,1,0);
        local_4c = local_4c + -1;
        local_6c = local_6c + 1;
        local_64 = local_64 + 1;
      }
      else {
        if (iVar6 != 0) {
          iVar6 = FUN_00595ff0(DAT_0065a06c,iVar7,*(undefined4 *)(param_1 + 0xe8 + iVar4 * 8),
                               *(undefined4 *)(param_1 + 0xec + iVar4 * 8),&local_3c,0);
          if (-1 < iVar6) {
            if (iVar6 == 0x4e001) {
              uVar11 = *(undefined4 *)(param_1 + iVar4 * 4);
            }
            else {
              fVar9 = (float10)FUN_005942b0(iVar7,param_6,param_7,param_9);
              local_84 = (float)fVar9;
              if ((float10)_DAT_00610fd8 < fVar9) {
                uVar5 = 0;
                local_70 = 0;
                local_68 = 0;
                while ((local_3c != 0 && (uVar5 < param_12))) {
                  FUN_005b83b0(*(undefined4 *)(*(int *)(local_3c + 0xc) + 8),0);
                  local_90 = 0;
                  local_8c = 0;
                  local_88 = 0;
                  if (param_6 == 0x20) {
                    if (*(int *)(local_30 + 0x44) == param_9) {
                      local_88 = FUN_0047c7d0(local_30 + 0x638,1);
                      local_90 = FUN_0047c7d0(local_30 + 0x638,0);
                      if (local_90 == 0) {
                        iVar6 = param_9 + 2;
                        iVar7 = local_30 + 0x638;
LAB_00594bc5:
                        local_90 = 0;
                        local_90 = FUN_0047c7d0(iVar7,iVar6);
                      }
                      else {
                        local_8c = FUN_0047c7d0(local_30 + 0x638,param_9 + 2);
                      }
                    }
                    else {
                      if ((param_9 == 0) || ((*(byte *)(local_30 + 0x154 + param_9 * 8) & 4) == 0))
                      {
                        iVar6 = param_9 + 2;
                        iVar7 = local_30 + 0x638;
                        goto LAB_00594bc5;
                      }
                      local_90 = FUN_0047c7d0(local_30 + 0x638,0);
                      if (local_90 == 0) {
                        local_90 = FUN_0047c7d0(local_30 + 0x638,param_9 + 2);
                      }
                      else {
                        local_8c = FUN_0047c7d0(local_30 + 0x638,param_9 + 2);
                      }
                      local_88 = FUN_0047c7d0(local_30 + 0x638,1);
                    }
                  }
                  else if (param_6 == 0x22) {
                    if ((*(byte *)(local_30 + 0x5c + param_9 * 8) & 4) == 0) {
                      iVar6 = param_9 + 0x40;
                      iVar7 = local_30 + 0x638;
                      goto LAB_00594bc5;
                    }
                    local_90 = FUN_0047c7d0(local_30 + 0x638,0);
                    if (local_90 == 0) {
                      local_90 = FUN_0047c7d0(local_30 + 0x638,param_9 + 0x40);
                    }
                    else {
                      local_8c = FUN_0047c7d0(local_30 + 0x638,param_9 + 0x40);
                    }
                    local_88 = FUN_0047c7d0(local_30 + 0x638,1);
                  }
                  local_8 = 0;
                  if (((local_88 == 0) || (local_90 == 0)) || (local_8c == 0)) {
                    if (local_88 == 0) {
LAB_00594d6c:
                      if (((local_90 == 0) || (local_8c == 0)) ||
                         (*(float *)(local_30 + 0x4c) == (float)_DAT_00610fd8)) {
                        if (local_90 == 0) {
LAB_00594f7d:
                          if (((*(float *)(local_30 + 0x4c) == (float)_DAT_00610fd8) &&
                              (*(int *)(local_30 + 0x230) != 3)) &&
                             (*(int *)(local_30 + 0x230) != 4)) {
                            uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                            local_68 = FUN_0059d180(param_3,param_4,uVar5,local_3c,uVar8 + uVar5,
                                                    *(int *)(param_1 + 0xec + iVar4 * 8) +
                                                    (uint)CARRY4(uVar8,uVar5),
                                                    *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                    *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                    param_12 - uVar5,local_84,local_40);
                          }
                          else {
                            uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                            local_68 = FUN_0059d020(param_3,param_4,uVar5,local_3c,uVar8 + uVar5,
                                                    *(int *)(param_1 + 0xec + iVar4 * 8) +
                                                    (uint)CARRY4(uVar8,uVar5),
                                                    *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                    *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                    param_12 - uVar5,local_84,
                                                    *(float *)(local_30 + 0x4c),local_40,
                                                    *(undefined4 *)(local_30 + 0x230));
                          }
                        }
                        else if (*(float *)(local_30 + 0x4c) == (float)_DAT_00610fd8) {
                          if (local_90 == 0) goto LAB_00594f7d;
                          if (local_8c == 0) {
                            if (local_90 == 0) goto LAB_00594f7d;
                            uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                            local_68 = FUN_0059ce30(param_3,param_4,uVar5,local_3c,uVar8 + uVar5,
                                                    *(int *)(param_1 + 0xec + iVar4 * 8) +
                                                    (uint)CARRY4(uVar8,uVar5),
                                                    *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                    *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                    param_12 - uVar5,local_84,local_90,local_40);
                          }
                          else {
                            uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                            local_68 = FUN_0059cef0(param_3,param_4,param_5,uVar5,local_3c,
                                                    uVar8 + uVar5,
                                                    *(int *)(param_1 + 0xec + iVar4 * 8) +
                                                    (uint)CARRY4(uVar8,uVar5),
                                                    *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                    *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                    param_12 - uVar5,local_84,local_90,local_8c,
                                                    local_40);
                          }
                        }
                        else {
                          uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                          local_68 = FUN_0059c8b0(param_3,param_4,param_5,uVar5,local_3c,
                                                  uVar8 + uVar5,
                                                  *(int *)(param_1 + 0xec + iVar4 * 8) +
                                                  (uint)CARRY4(uVar8,uVar5),
                                                  *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                  *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                  param_12 - uVar5,local_84,
                                                  *(float *)(local_30 + 0x4c),local_90,local_40,
                                                  *(undefined4 *)(local_30 + 0x230));
                        }
                      }
                      else {
                        uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                        local_68 = FUN_0059cda0(param_3,param_4,param_5,uVar5,local_3c,uVar8 + uVar5
                                                ,*(int *)(param_1 + 0xec + iVar4 * 8) +
                                                 (uint)CARRY4(uVar8,uVar5),
                                                *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                                *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                                param_12 - uVar5,local_84,
                                                *(float *)(local_30 + 0x4c),local_90,local_8c,
                                                local_40,*(undefined4 *)(local_30 + 0x230));
                      }
                    }
                    else if (local_90 == 0) {
                      if (local_88 == 0) goto LAB_00594d6c;
                      uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                      local_68 = FUN_0059c750(param_3,param_4,uVar5,local_3c,uVar8 + uVar5,
                                              *(int *)(param_1 + 0xec + iVar4 * 8) +
                                              (uint)CARRY4(uVar8,uVar5),
                                              *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                              *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                              param_12 - uVar5,local_84,
                                              *(undefined4 *)(local_30 + 0x4c),local_88,local_40,
                                              *(undefined4 *)(local_30 + 0x230));
                    }
                    else {
                      uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                      local_68 = FUN_0059c820(param_3,param_4,param_5,uVar5,local_3c,uVar8 + uVar5,
                                              *(int *)(param_1 + 0xec + iVar4 * 8) +
                                              (uint)CARRY4(uVar8,uVar5),
                                              *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                              *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                              param_12 - uVar5,local_84,
                                              *(undefined4 *)(local_30 + 0x4c),local_90,local_88,
                                              local_40,*(undefined4 *)(local_30 + 0x230));
                    }
                  }
                  else {
                    uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                    local_68 = FUN_0059cf70(param_3,param_4,param_5,uVar5,local_3c,uVar8 + uVar5,
                                            *(int *)(param_1 + 0xec + iVar4 * 8) +
                                            (uint)CARRY4(uVar8,uVar5),
                                            *(undefined4 *)(param_1 + 0x2b8 + iVar4 * 8),
                                            *(undefined4 *)(param_1 + 700 + iVar4 * 8),
                                            param_12 - uVar5,local_84,
                                            *(undefined4 *)(local_30 + 0x4c),local_90,local_8c,
                                            local_88,local_40,*(undefined4 *)(local_30 + 0x230));
                  }
                  local_8 = 0xffffffff;
                  FUN_005b84d0(*(undefined4 *)(*(int *)(local_3c + 0xc) + 8),0);
                  uVar5 = uVar5 + local_68;
                  local_70 = uVar5;
                  if ((uVar5 < param_12) &&
                     (uVar8 = *(uint *)(param_1 + 0xe8 + iVar4 * 8),
                     iVar7 = FUN_00595ff0(DAT_0065a06c,local_30,uVar8 + uVar5,
                                          *(int *)(param_1 + 0xec + iVar4 * 8) +
                                          (uint)CARRY4(uVar8,uVar5),&local_3c,
                                          ((DAT_0064b158 < 1) - 1 & 0xfffff63b) + 0x9c4), iVar7 < 0)
                     ) {
                    ExceptionList = local_14;
                    return 0xfffffffd;
                  }
                }
                uVar5 = *(uint *)(param_1 + 0xe8 + iVar4 * 8);
                FUN_00596140(local_30,uVar5 + local_38,
                             *(int *)(param_1 + 0xec + iVar4 * 8) + (uint)CARRY4(uVar5,local_38),
                             iVar4);
                local_40 = 1;
                uVar11 = *(undefined4 *)(param_1 + iVar4 * 4);
              }
              else {
                uVar11 = *(undefined4 *)(param_1 + iVar4 * 4);
              }
            }
            goto LAB_00595131;
          }
          WaitForSingleObject(*(HANDLE *)(DAT_0065a06c + 0x9c),0x14);
          local_20 = local_20 + 1;
        }
        local_64 = local_64 + 1;
      }
    }
    if (local_6c < 1) {
      WaitForSingleObject(*(HANDLE *)(DAT_0065a06c + 0x9c),0x14);
      local_20 = local_20 + 1;
    }
    if ((DAT_0064b158 < 1) && (400 < local_20)) {
      ExceptionList = local_14;
      return 0xfffffffd;
    }
  } while( true );
}


