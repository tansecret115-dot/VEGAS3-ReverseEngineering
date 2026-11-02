/* Module: mpgmux.dll
   Function: FUN_10008fc0
   Address: 10008fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008fc0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int iStack_4;
  
  uVar6 = param_1;
  local_38 = 1;
  if (*(char *)(param_1 + 0x260c) == '\0') {
    local_1c = (byte *)0x0;
    local_28 = (byte *)0x0;
  }
  else {
    pbVar1 = (byte *)(param_1 + 0x25b8);
    FUN_1000c030(param_1,pbVar1,param_2,param_3);
    local_1c = pbVar1;
    if (*(int *)(param_1 + 0x11a8) == 0) {
      local_28 = (byte *)0x0;
    }
    else {
      bVar12 = *(int *)(param_1 + 0x2c) < 2;
      if (bVar12) {
        uVar3 = *(uint *)(param_1 + 0x11b4);
        uVar10 = *(uint *)(param_1 + 0x11ac);
        uVar17 = *(undefined4 *)(param_1 + 0x11c0);
        bVar7 = *(byte *)(param_1 + 0x11bb);
        uVar16 = *(undefined1 *)(param_1 + 0x11b9);
        uVar15 = *(undefined4 *)(param_1 + 0x11bc);
        bVar14 = *(byte *)(param_1 + 0x11ba);
        uVar13 = *(undefined1 *)(param_1 + 0x11b8);
        uVar9 = *(uint *)(param_1 + 0x14b4);
        iVar8 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x11b4);
        uVar10 = *(uint *)(param_1 + 0x11ac);
        uVar17 = *(undefined4 *)(param_1 + 0x11c0);
        bVar7 = *(byte *)(param_1 + 0x11bb);
        uVar16 = *(undefined1 *)(param_1 + 0x11b9);
        uVar15 = *(undefined4 *)(param_1 + 0x11bc);
        bVar14 = *(byte *)(param_1 + 0x11ba);
        uVar13 = *(undefined1 *)(param_1 + 0x11b8);
        iVar8 = *(int *)(param_1 + 0x48);
        uVar9 = *(uint *)(param_1 + 0x14b4);
      }
      FUN_1000c140(param_1,(byte *)(param_1 + 0x25d0),uVar9,'\x01',iVar8 == 0,bVar12,bVar12,bVar12,1
                   ,uVar13,bVar14,uVar15,uVar16,bVar7,uVar17,0xe0,1,uVar3 >> 10,uVar10);
      *(undefined4 *)(param_1 + 0x11a8) = 0;
      local_28 = (byte *)(param_1 + 0x25d0);
    }
  }
  puVar2 = (uint *)(param_1 + 0x11d0);
  iVar8 = *(int *)(param_1 + 0x11d4);
  param_1 = 0;
  local_2c = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  if (((*puVar2 == 0 && iVar8 == 0) || (*(int *)(uVar6 + 0x84) < iVar8)) ||
     ((*(int *)(uVar6 + 0x84) <= iVar8 && (*(uint *)(uVar6 + 0x80) < *puVar2)))) {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  if (*(int *)(uVar6 + 0x2c) == 1) {
    *(int *)(uVar6 + 0x24d0) = *(int *)(uVar6 + 0x24d0) + -9;
  }
  if (*(char *)(uVar6 + 0x2518) != '\0') {
    bVar12 = *(short *)(uVar6 + 0x1224) == 1;
    if (bVar12) {
      *(uint *)(uVar6 + 0x2dd0) = *(uint *)(uVar6 + 0x1238) - *(uint *)(uVar6 + 0x122c);
      *(uint *)(uVar6 + 0x2dd4) =
           *(int *)(uVar6 + 0x123c) - (uint)(*(uint *)(uVar6 + 0x1238) < *(uint *)(uVar6 + 0x122c));
      *(undefined4 *)(uVar6 + 0x2e80) = 1;
      *(undefined4 *)(uVar6 + 0x2e8c) = 0;
      *(undefined4 *)(uVar6 + 0x2e90) = 0;
      *(undefined4 *)(uVar6 + 0x2e94) = 0;
    }
    local_34 = (uint)bVar12;
    if ((((*(int *)(uVar6 + 0x38) != 0) && (bVar12)) && ((*(byte *)(uVar6 + 0x1226) & 1) == 0)) &&
       ((iVar8 = *(int *)(uVar6 + 0x12c0), iVar8 != 0 && (*(char *)(uVar6 + 0x11ed) == '\0')))) {
      *(short *)(uVar6 + 0x122a) = *(short *)(uVar6 + 0x122a) + (short)iVar8;
      *(int *)(uVar6 + 0x1220) = *(int *)(uVar6 + 0x1220) + iVar8;
      *(undefined1 *)(uVar6 + 0x11ed) = 1;
    }
    bVar7 = FUN_10009bc0(uVar6,param_2,param_3,*(undefined4 *)(uVar6 + 0x1238),
                         *(undefined4 *)(uVar6 + 0x123c),*(undefined4 *)(uVar6 + 0x1230),
                         *(undefined4 *)(uVar6 + 0x1234),*(undefined2 *)(uVar6 + 0x1224));
    param_1 = (uint)bVar7;
    if (bVar7 != 0) {
      local_10 = *(uint *)(uVar6 + 0x1238);
      local_c = *(uint *)(uVar6 + 0x123c);
      local_18 = *(uint *)(uVar6 + 0x1230);
      local_14 = *(uint *)(uVar6 + 0x1234);
      local_2c = 1;
      if (*(int *)(uVar6 + 0x2c) != 1) {
        if ((bVar7 == 2) || (local_38 = 10, bVar7 == 1)) {
          local_38 = 5;
        }
        if (*(int *)(uVar6 + 0x2c) < 2) {
          local_38 = local_38 + -1;
        }
        *(int *)(uVar6 + 0x24d0) = *(int *)(uVar6 + 0x24d0) - local_38;
      }
    }
    if (*(int *)(uVar6 + 0x48) != 0) {
      local_8 = *(uint *)(uVar6 + 0x1230) - param_2;
      iStack_4 = (*(int *)(uVar6 + 0x1234) - param_3) - (uint)(*(uint *)(uVar6 + 0x1230) < param_2);
      dVar4 = (double)CONCAT44(iStack_4,local_8) - _DAT_10015188;
      *(double *)(uVar6 + 0x11a0) = dVar4;
      if (dVar4 < _DAT_10015180) {
        *(undefined4 *)(uVar6 + 0x11a0) = 0;
        *(undefined4 *)(uVar6 + 0x11a4) = 0;
      }
    }
  }
  uVar10 = *(uint *)(uVar6 + 0x1220);
  uVar9 = *(uint *)(uVar6 + 0x24d0);
  if (uVar10 < uVar9) {
    iVar8 = FUN_10001310(uVar6,uVar6 + 0x14b8,uVar10,*(undefined4 *)(uVar6 + 0x1230),
                         *(undefined4 *)(uVar6 + 0x1234));
    if (iVar8 != 0) {
      return 0x10;
    }
    if (uVar10 < *(uint *)(uVar6 + 0x24d0)) {
      do {
        if ((local_24 != 0) || (local_30 != 0)) break;
        iVar8 = (**(code **)(*(int *)(uVar6 + 0x1208) + 0xc))
                          (*(int *)(uVar6 + 0x1208),uVar6 + 0x1220,0x20);
        if (iVar8 == 0x20) {
          uVar9 = *(uint *)(uVar6 + 0x1238) + param_4;
          iVar8 = *(int *)(uVar6 + 0x123c) + param_5 +
                  (uint)CARRY4(*(uint *)(uVar6 + 0x1238),param_4);
          if ((*(int *)(uVar6 + 0x2ddc) <= iVar8) &&
             ((*(int *)(uVar6 + 0x2ddc) < iVar8 || (*(uint *)(uVar6 + 0x2dd8) < uVar9)))) {
            *(uint *)(uVar6 + 0x2dd8) = uVar9;
            *(int *)(uVar6 + 0x2ddc) = iVar8;
          }
          iVar8 = *(int *)(uVar6 + 0x2e80);
          if (iVar8 == 1) {
            if ((*(short *)(uVar6 + 0x1224) != 1) && (*(int *)(uVar6 + 0x2e8c) == 0)) {
              *(undefined4 *)(uVar6 + 0x2e8c) = *(undefined4 *)(uVar6 + 0x11cc);
            }
            if (*(short *)(uVar6 + 0x1224) == 2) goto LAB_1000946e;
          }
          else {
            if (iVar8 == 2) {
              if (*(short *)(uVar6 + 0x1224) != 2) {
                if (*(int *)(uVar6 + 0x2e90) == 0) {
                  *(undefined4 *)(uVar6 + 0x2e90) = *(undefined4 *)(uVar6 + 0x11cc);
                }
                if (*(short *)(uVar6 + 0x1224) != 2) goto LAB_10009474;
              }
            }
            else {
              if ((iVar8 != 3) || (*(short *)(uVar6 + 0x1224) != 3)) goto LAB_10009474;
              *(undefined4 *)(uVar6 + 0x2e94) = *(undefined4 *)(uVar6 + 0x11cc);
            }
LAB_1000946e:
            *(int *)(uVar6 + 0x2e80) = *(int *)(uVar6 + 0x2e80) + 1;
          }
LAB_10009474:
          *(int *)(uVar6 + 0x2e70) = *(int *)(uVar6 + 0x2e70) + 1;
          iVar8 = *(int *)(uVar6 + 0x11dc);
          bVar12 = false;
          bVar5 = false;
          *(undefined1 *)(uVar6 + 0x2518) = 1;
          if (*(uint *)(uVar6 + 0x11d8) != 0 || iVar8 != 0) {
            if ((*(int *)(uVar6 + 0x123c) < iVar8) ||
               (((*(int *)(uVar6 + 0x123c) <= iVar8 &&
                 (*(uint *)(uVar6 + 0x1238) < *(uint *)(uVar6 + 0x11d8))) ||
                (*(char *)(uVar6 + 0x11eb) != '\0')))) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
          }
          iVar8 = *(int *)(uVar6 + 0x11e4);
          if (*(uint *)(uVar6 + 0x11e0) != 0 || iVar8 != 0) {
            if (((*(int *)(uVar6 + 0x123c) < iVar8) ||
                ((*(int *)(uVar6 + 0x123c) <= iVar8 &&
                 (*(uint *)(uVar6 + 0x1238) < *(uint *)(uVar6 + 0x11e0))))) ||
               (*(char *)(uVar6 + 0x11eb) == '\0')) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
          }
          if ((((local_20 == 0) && (!bVar12)) && ((!bVar5 && (*(int *)(uVar6 + 0x38) == 0)))) ||
             (*(short *)(uVar6 + 0x1224) != 1)) {
            uVar9 = *(uint *)(uVar6 + 0x1230);
            uVar3 = *(uint *)(uVar6 + 0x1238);
            *(uint *)(uVar6 + 0x1230) = uVar9 + param_4;
            iVar8 = *(int *)(uVar6 + 0x1234) + param_5 + (uint)CARRY4(uVar9,param_4);
            *(uint *)(uVar6 + 0x1238) = uVar3 + param_4;
            *(int *)(uVar6 + 0x1234) = iVar8;
            *(uint *)(uVar6 + 0x123c) =
                 *(int *)(uVar6 + 0x123c) + param_5 + (uint)CARRY4(uVar3,param_4);
            if ((local_2c == 0) &&
               (*(ushort *)(uVar6 + 0x122a) + 1 + uVar10 <= *(uint *)(uVar6 + 0x24d0))) {
              bVar7 = FUN_10009bc0(uVar6,param_2,param_3,*(undefined4 *)(uVar6 + 0x1238),
                                   *(undefined4 *)(uVar6 + 0x123c),*(undefined4 *)(uVar6 + 0x1230),
                                   iVar8,*(undefined2 *)(uVar6 + 0x1224));
              param_1 = (uint)bVar7;
              if (bVar7 != 0) {
                if (*(int *)(uVar6 + 0x2c) == 1) {
                  local_38 = 0;
                }
                else {
                  if ((bVar7 == 2) || (local_38 = 10, bVar7 == 1)) {
                    local_38 = 5;
                  }
                  if (*(int *)(uVar6 + 0x2c) < 2) {
                    local_38 = local_38 + -1;
                  }
                }
                uVar9 = *(uint *)(uVar6 + 0x24d0);
                if (uVar9 < *(ushort *)(uVar6 + 0x122a) + uVar10 + 1 + local_38) {
                  *(uint *)(uVar6 + 0x24d0) = uVar10;
                  *(uint *)(uVar6 + 0x24f4) = uVar9 - uVar10;
                  param_1 = 0;
                  local_30 = 1;
                }
                else {
                  local_10 = *(uint *)(uVar6 + 0x1238);
                  local_c = *(uint *)(uVar6 + 0x123c);
                  local_18 = *(uint *)(uVar6 + 0x1230);
                  local_14 = *(uint *)(uVar6 + 0x1234);
                  local_2c = 1;
                  *(uint *)(uVar6 + 0x24d0) = uVar9 - local_38;
                }
              }
            }
            uVar9 = *(uint *)(uVar6 + 0x24d0);
            if (uVar10 < uVar9) {
              if (*(short *)(uVar6 + 0x1224) == 1) {
                local_34 = 1;
              }
              if (*(int *)(uVar6 + 0x48) != 0) {
                local_8 = *(uint *)(uVar6 + 0x1230) - param_2;
                iStack_4 = (*(int *)(uVar6 + 0x1234) - param_3) -
                           (uint)(*(uint *)(uVar6 + 0x1230) < param_2);
                dVar4 = (double)CONCAT44(iStack_4,local_8) - _DAT_10015188;
                *(double *)(uVar6 + 0x11a0) = dVar4;
                if (dVar4 < _DAT_10015180) {
                  *(undefined4 *)(uVar6 + 0x11a0) = 0;
                  *(undefined4 *)(uVar6 + 0x11a4) = 0;
                }
              }
              uVar3 = *(int *)(uVar6 + 0x1220) + uVar10;
              if (uVar9 < uVar3) {
                iVar8 = FUN_10001310(uVar6,uVar6 + 0x14b8,uVar9 - uVar10,
                                     *(undefined4 *)(uVar6 + 0x1230),*(undefined4 *)(uVar6 + 0x1234)
                                    );
                if (iVar8 != 0) {
                  return 0x10;
                }
                *(uint *)(uVar6 + 0x1220) =
                     *(int *)(uVar6 + 0x1220) + (uVar10 - *(uint *)(uVar6 + 0x24d0));
                uVar10 = *(uint *)(uVar6 + 0x24d0);
              }
              else {
                iVar8 = FUN_10001310(uVar6,uVar6 + 0x14b8,*(int *)(uVar6 + 0x1220),
                                     *(undefined4 *)(uVar6 + 0x1230),*(undefined4 *)(uVar6 + 0x1234)
                                    );
                if (iVar8 != 0) {
                  return 0x10;
                }
                *(undefined4 *)(uVar6 + 0x1220) = 0;
                uVar10 = uVar3;
              }
            }
          }
          else {
            if ((local_20 != 0) || (bVar12)) {
              if (bVar5) goto LAB_100097ae;
              if (local_20 != 0) {
                *(undefined1 *)(uVar6 + 0x11e8) = 1;
              }
              *(undefined1 *)(uVar6 + 0x11e9) = 1;
            }
            else {
              if (!bVar5) {
                uVar9 = *(uint *)(uVar6 + 0x1230);
                uVar3 = *(uint *)(uVar6 + 0x1238);
                local_30 = 1;
                *(uint *)(uVar6 + 0x1230) = uVar9 + param_4;
                *(uint *)(uVar6 + 0x1238) = uVar3 + param_4;
                *(uint *)(uVar6 + 0x1234) =
                     *(int *)(uVar6 + 0x1234) + param_5 + (uint)CARRY4(uVar9,param_4);
                *(uint *)(uVar6 + 0x123c) =
                     *(int *)(uVar6 + 0x123c) + param_5 + (uint)CARRY4(uVar3,param_4);
                goto LAB_10009819;
              }
LAB_100097ae:
              *(undefined1 *)(uVar6 + 0x11ea) = 1;
            }
            *(undefined4 *)(uVar6 + 0x11f0) = *(undefined4 *)(uVar6 + 0x1238);
            uVar9 = *(uint *)(uVar6 + 0x122c);
            *(undefined4 *)(uVar6 + 0x11f4) = *(undefined4 *)(uVar6 + 0x123c);
            if (uVar9 != 0) {
              uVar3 = *(uint *)(uVar6 + 0x11f0);
              *(uint *)(uVar6 + 0x11f0) = uVar3 - uVar9;
              *(uint *)(uVar6 + 0x11f4) = *(int *)(uVar6 + 0x11f4) - (uint)(uVar3 < uVar9);
            }
            local_30 = 1;
          }
        }
        else {
          local_24 = 1;
        }
LAB_10009819:
      } while (uVar10 < *(uint *)(uVar6 + 0x24d0));
    }
  }
  else {
    *(uint *)(uVar6 + 0x1220) = uVar10 - uVar9;
    iVar8 = FUN_10001310(uVar6,uVar6 + 0x14b8,uVar9,*(undefined4 *)(uVar6 + 0x1230),
                         *(undefined4 *)(uVar6 + 0x1234));
    uVar10 = uVar9;
    if (iVar8 != 0) {
      return 0x10;
    }
  }
  if (((*(int *)(uVar6 + 0x50) == 0) || (local_34 == 0)) || (*(short *)(uVar6 + 0x1228) == 0)) {
    local_38 = 0;
  }
  else {
    local_38 = (int)*(short *)(uVar6 + 0x1228);
  }
  if ((((*(char *)(uVar6 + 0x11e8) == '\0') && (*(char *)(uVar6 + 0x11ea) == '\0')) ||
      (*(int *)(uVar6 + 100) == 0)) && (*(int *)(uVar6 + 0x2e5c) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  iVar8 = FUN_1000b590(uVar6,(byte *)(uVar6 + 400),local_1c,local_28,
                       *(int *)(uVar6 + 0x24f4) + *(int *)(uVar6 + 0x24d0),uVar10,
                       *(int *)(uVar6 + 0x11fc),0xe0,0,(byte *)0x1,*(uint *)(uVar6 + 0x11b4) >> 10,
                       *(byte *)(uVar6 + 0x11c4),local_10,local_c,local_18,local_14,(char)param_1,
                       (byte)*(undefined4 *)(uVar6 + 0x11ac),0,&local_38,
                       (int)*(char *)(uVar6 + 0x11ec),iVar8,(int)*(char *)(uVar6 + 0x11ed));
  if (iVar8 == 0) {
    if (((*(int *)(uVar6 + 0x50) == 0) || (local_34 == 0)) || (*(short *)(uVar6 + 0x1228) == 0)) {
      *(undefined4 *)(uVar6 + 0x2dbc) = 0;
    }
    else {
      *(int *)(uVar6 + 0x2dbc) = local_38 + 6;
    }
    if (*(char *)(uVar6 + 0x11ec) != '\0') {
      *(undefined1 *)(uVar6 + 0x11ec) = 0;
    }
    if (*(char *)(uVar6 + 0x11ed) != '\0') {
      *(undefined1 *)(uVar6 + 0x11ed) = 0;
    }
    *(undefined1 *)(uVar6 + 0x2518) = 0;
    if (local_24 == 0) {
      if (local_30 == 0) {
        if (*(int *)(uVar6 + 0x1220) == 0) {
          iVar8 = (**(code **)(*(int *)(uVar6 + 0x1208) + 0xc))
                            (*(int *)(uVar6 + 0x1208),(undefined4 *)(uVar6 + 0x1220),0x20);
          if (iVar8 == 0x20) {
            uVar10 = *(uint *)(uVar6 + 0x1238) + param_4;
            iVar8 = *(int *)(uVar6 + 0x123c) + param_5 +
                    (uint)CARRY4(*(uint *)(uVar6 + 0x1238),param_4);
            if ((*(int *)(uVar6 + 0x2ddc) <= iVar8) &&
               ((*(int *)(uVar6 + 0x2ddc) < iVar8 || (*(uint *)(uVar6 + 0x2dd8) < uVar10)))) {
              *(uint *)(uVar6 + 0x2dd8) = uVar10;
              *(int *)(uVar6 + 0x2ddc) = iVar8;
            }
            *(int *)(uVar6 + 0x2e70) = *(int *)(uVar6 + 0x2e70) + 1;
            iVar8 = *(int *)(uVar6 + 0x11dc);
            bVar12 = false;
            *(undefined1 *)(uVar6 + 0x2518) = 1;
            if (*(uint *)(uVar6 + 0x11d8) != 0 || iVar8 != 0) {
              if ((*(int *)(uVar6 + 0x123c) < iVar8) ||
                 (((*(int *)(uVar6 + 0x123c) <= iVar8 &&
                   (*(uint *)(uVar6 + 0x1238) < *(uint *)(uVar6 + 0x11d8))) ||
                  (*(char *)(uVar6 + 0x11eb) != '\0')))) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
            }
            iVar8 = *(int *)(uVar6 + 0x11e4);
            if (((*(uint *)(uVar6 + 0x11e0) == 0 && iVar8 == 0) ||
                (*(int *)(uVar6 + 0x123c) < iVar8)) ||
               (((*(int *)(uVar6 + 0x123c) <= iVar8 &&
                 (*(uint *)(uVar6 + 0x1238) < *(uint *)(uVar6 + 0x11e0))) ||
                (*(char *)(uVar6 + 0x11eb) == '\0')))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((((local_20 == 0) && (!bVar12)) && (!bVar5)) || (*(short *)(uVar6 + 0x1224) != 1)) {
              uVar10 = *(uint *)(uVar6 + 0x1230);
              uVar9 = *(uint *)(uVar6 + 0x1238);
              *(uint *)(uVar6 + 0x1230) = uVar10 + param_4;
              *(uint *)(uVar6 + 0x1238) = uVar9 + param_4;
              *(uint *)(uVar6 + 0x1234) =
                   *(int *)(uVar6 + 0x1234) + param_5 + (uint)CARRY4(uVar10,param_4);
              *(uint *)(uVar6 + 0x123c) =
                   *(int *)(uVar6 + 0x123c) + param_5 + (uint)CARRY4(uVar9,param_4);
            }
            else {
              if (bVar5) {
                *(undefined1 *)(uVar6 + 0x11ea) = 1;
              }
              else {
                if (local_20 != 0) {
                  *(undefined1 *)(uVar6 + 0x11e8) = 1;
                }
                *(undefined1 *)(uVar6 + 0x11e9) = 1;
              }
              *(undefined4 *)(uVar6 + 0x11f0) = *(undefined4 *)(uVar6 + 0x1238);
              *(undefined4 *)(uVar6 + 0x11f4) = *(undefined4 *)(uVar6 + 0x123c);
              uVar10 = *(uint *)(uVar6 + 0x122c);
              if (uVar10 != 0) {
                uVar9 = *(uint *)(uVar6 + 0x11f0);
                *(uint *)(uVar6 + 0x11f0) = uVar9 - uVar10;
                *(uint *)(uVar6 + 0x11f4) = *(int *)(uVar6 + 0x11f4) - (uint)(uVar9 < uVar10);
              }
            }
          }
          else {
            puVar11 = (undefined4 *)(uVar6 + 0x1220);
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
          }
        }
      }
      else {
        *(undefined1 *)(uVar6 + 0x2518) = 1;
      }
    }
    else {
      puVar11 = (undefined4 *)(uVar6 + 0x1220);
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
    if (*(char *)(uVar6 + 0x11eb) != '\0') {
      uVar10 = *(uint *)(uVar6 + 0x1190);
      uVar9 = (**(code **)(*(int *)(uVar6 + 0x11f8) + 0xc))
                        (*(int *)(uVar6 + 0x11f8),(byte *)(uVar6 + 400),uVar10);
      if (uVar9 != uVar10) {
        FUN_100050f0(uVar6,(byte *)s_Unable_to_write_to_program_file___10017918);
        return 0x10;
      }
      uVar9 = *(uint *)(uVar6 + 0x80);
      *(uint *)(uVar6 + 0x80) = uVar9 + uVar10;
      *(uint *)(uVar6 + 0x84) = *(int *)(uVar6 + 0x84) + (uint)CARRY4(uVar9,uVar10);
    }
    *(undefined4 *)(uVar6 + 0x2dbc) = 0;
    return 0;
  }
  return 0x10;
}


