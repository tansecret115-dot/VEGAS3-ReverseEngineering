/* Module: mpgvout.004
   Function: FUN_1001ed3c
   Address: 1001ed3c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1001ed3c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  char cVar4;
  int3 iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_55c;
  undefined4 local_554;
  int local_54c;
  int local_548;
  int local_53c;
  uint local_538;
  uint local_534;
  uint local_530;
  uint local_52c;
  int local_528;
  uint local_520;
  int local_51c;
  int local_518;
  int local_514 [3];
  int local_508 [2];
  int local_500;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  int local_4e0;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  int local_4c4;
  int local_4c0;
  int local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  int local_4a4 [76];
  undefined8 *local_374 [4];
  short *local_364 [9];
  undefined8 auStack_340 [16];
  undefined8 local_2c0 [16];
  undefined8 local_240 [16];
  undefined8 local_1c0 [16];
  short local_140 [64];
  short local_c0 [70];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_508[0] = 0;
  piVar6 = (int *)(param_1 + 0x67c);
  do {
    local_4a4[local_508[0]] = (int)local_508;
    local_508[0] = local_508[0] + 1;
  } while (local_508[0] < 0x4c);
  if (*(int *)(param_1 + 0x53c) == 0) {
    local_374[0] = auStack_340;
    local_374[1] = local_2c0;
    local_374[2] = local_240;
    local_374[3] = local_1c0;
    local_364[0] = local_140;
    local_364[1] = local_c0;
    iVar8 = FUN_100117cc(*(int *)(param_1 + 0x24),0x100);
    if (iVar8 == 0) {
      FUN_1001e1f8(param_1);
      FUN_100254fc(param_1);
      FUN_1001c378(param_1);
      uVar11 = (*(int **)(param_1 + 0x24))[0xb];
      if (uVar11 != 8) {
        FUN_100118c0(*(int **)(param_1 + 0x24),0,uVar11);
      }
      iVar8 = *(int *)(param_1 + 0x5bc);
      *(uint *)(param_1 + 0x5e0) =
           *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
           *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
      if ((*(int *)(param_1 + 0x28) == 3) && (iVar8 == 1)) {
        FUN_1001c678(param_1,&DAT_10036dd8);
        *(byte *)(param_1 + 0x5ec) = *(byte *)(param_1 + 0x5ec) | 4;
      }
      local_528 = 0;
      local_53c = 1;
      local_534 = *(uint *)(param_1 + 0x3b8);
      *(int **)(param_1 + 0x548) = local_4a4;
      local_520 = 0;
      if (0 < *(int *)(param_1 + 0x570)) {
        do {
          local_508[0] = 0;
          if (0 < *(int *)(param_1 + 0x560)) {
            do {
              *(int **)(param_1 + 0x548) = local_4a4;
              puVar2 = (undefined1 *)(*(int *)(param_1 + 0x6a4) + local_528 * 0x3c);
              *(undefined1 **)(param_1 + 0x530) = puVar2;
              FUN_1001e5f8(param_1,local_374[0],(int *)(param_1 + 0x670),&local_4c4,&local_51c,
                           &local_4b4,local_514,(int)puVar2,local_508[0] << 4,local_520 << 4,
                           local_528);
              iVar13 = *(int *)(param_1 + 0x548);
              if (puVar2[3] != '\0') {
                FUN_1000332c((int)local_374[0],local_374[2]);
                FUN_1000332c((int)local_374[1],local_374[3]);
              }
              iVar13 = iVar13 + 4;
              iVar12 = 0;
              if (0 < *(int *)(param_1 + 0x54c)) {
                do {
                  (**(code **)(param_1 + 0x4f0))(local_374[iVar12]);
                  iVar13 = iVar13 + 4;
                  iVar12 = iVar12 + 1;
                } while (iVar12 < *(int *)(param_1 + 0x54c));
              }
              iVar10 = (int)*local_364[0];
              iVar12 = -iVar10;
              if (-1 < iVar10) {
                iVar12 = iVar10;
              }
              if (iVar12 < 0x1000) {
                iVar10 = (int)*local_364[1];
                iVar12 = -iVar10;
                if (-1 < iVar10) {
                  iVar12 = iVar10;
                }
                if (0xfff < iVar12) goto LAB_1001f0b5;
              }
              else {
LAB_1001f0b5:
                if ((puVar2[1] & 1) == 0) {
                  *(undefined2 *)(puVar2 + 0xc) = 0;
                  *(undefined2 *)(puVar2 + 0xe) = 0;
                  puVar2[1] = puVar2[1] & 0xf3 | 1;
                  *(undefined2 *)(puVar2 + 0x10) = 0;
                  *(undefined2 *)(puVar2 + 0x12) = 0;
                  *(undefined2 *)(puVar2 + 0x14) = 0;
                  *(undefined2 *)(puVar2 + 0x16) = 0;
                  *(undefined2 *)(puVar2 + 0x18) = 0;
                  *(undefined2 *)(puVar2 + 0x1a) = 0;
                  FUN_100032c8((undefined8 *)(local_4c4 + *(int *)(param_1 + 0x670)),local_51c,
                               local_374[0]);
                  FUN_100032c8((undefined8 *)(local_4c4 + *(int *)(param_1 + 0x670) + 8),local_51c,
                               local_374[1]);
                  FUN_100032c8((undefined8 *)(local_4c4 + *(int *)(param_1 + 0x670) + local_51c * 8)
                               ,local_51c,local_374[2]);
                  FUN_100032c8((undefined8 *)
                               (local_4c4 + *(int *)(param_1 + 0x670) + 8 + local_51c * 8),local_51c
                               ,local_374[3]);
                  FUN_100032c8((undefined8 *)(local_4c0 + *(int *)(param_1 + 0x674)),local_518,
                               (undefined8 *)local_364[0]);
                  FUN_100032c8((undefined8 *)(local_4c0 + *(int *)(param_1 + 0x678)),local_518,
                               (undefined8 *)local_364[1]);
                  if (puVar2[3] != '\0') {
                    FUN_1000332c((int)local_374[0],local_374[2]);
                    FUN_1000332c((int)local_374[1],local_374[3]);
                  }
                  iVar12 = 0;
                  if (0 < *(int *)(param_1 + 0x54c)) {
                    do {
                      ppuVar3 = local_374 + iVar12;
                      iVar12 = iVar12 + 1;
                      (**(code **)(param_1 + 0x4f0))(*ppuVar3);
                    } while (iVar12 < *(int *)(param_1 + 0x54c));
                  }
                }
              }
              FUN_10003414();
              iVar12 = FUN_100117cc(*(int *)(param_1 + 0x24),0x400);
              if (iVar12 != 0) {
                (**(code **)(param_1 + 0xc))("Unable to write to output file.");
                return 0;
              }
              if ((local_508[0] == 0) && ((local_520 == 0 || (1 < *(int *)(param_1 + 0x28))))) {
                *(uint *)(param_1 + 0x3b8) = local_534;
                local_530 = FUN_10024c3c(param_1,local_528);
                *(uint *)(puVar2 + 4) = local_530;
                *(uint *)(param_1 + 0x3b8) = local_530;
                uVar11 = local_530;
                if (local_508[0] != 0) {
                  uVar11 = local_534;
                }
                if ((*(int *)(param_1 + 0x28) < 2) || (*(int *)(param_1 + 0x36c) < 0xaf1)) {
                  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))
                            (*(int *)(param_1 + 0x24),local_520 + 0x101,&local_520);
                }
                else {
                  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))
                            (*(int *)(param_1 + 0x24),(local_520 & 0x7f) + 0x101,&local_520);
                  FUN_100118c0(*(int **)(param_1 + 0x24),(int)local_520 >> 7,3);
                }
                if (*(int *)(param_1 + 0x5c8) == 0) {
                  uVar9 = (int)local_530 >> 1;
                }
                else {
                  uVar9 = *(uint *)(&DAT_10033740 + local_530 * 4);
                }
                FUN_100118c0(*(int **)(param_1 + 0x24),uVar9,5);
                FUN_100118c0(*(int **)(param_1 + 0x24),0,1);
                local_34 = 0;
                local_30 = 0;
                local_2c[0] = 0;
                local_10 = 0;
                local_14 = 0;
                local_20 = 0;
                local_24 = 0;
                local_8 = 0;
                local_c = 0;
                local_18 = 0;
                local_1c = 0;
                local_53c = 1;
                local_534 = uVar11;
              }
              else {
                local_530 = FUN_10024c3c(param_1,local_528);
                *(uint *)(puVar2 + 4) = local_530;
              }
              cVar4 = puVar2[1];
              local_52c = (uint)cVar4;
              *(int *)(param_1 + 0x548) = iVar13 + 4;
              local_538 = (**(code **)(param_1 + 0x4f4))(param_1,local_374,local_52c,local_530,0);
              iVar13 = *(int *)(param_1 + 0x548);
              if ((local_52c & 1) == 0) {
                if (local_538 != 0) {
                  local_52c._1_3_ = (int3)(cVar4 >> 7);
                  iVar5 = local_52c._1_3_;
                  local_52c = (int)cVar4 | 2;
                  if (*(uint *)(param_1 + 0x3b8) != local_530) {
                    local_52c = CONCAT31(iVar5,(undefined1)local_52c) | 0x10;
                    *(uint *)(param_1 + 0x3b8) = local_530;
                  }
                }
              }
              else {
                if (*(uint *)(param_1 + 0x3b8) != local_530) {
                  local_52c = local_52c | 0x10;
                  *(uint *)(param_1 + 0x3b8) = local_530;
                }
                local_538 = (1 << ((byte)*(undefined4 *)(param_1 + 0x54c) & 0x1f)) - 1;
              }
              *(uint *)(puVar2 + 8) = local_538;
              if (((local_508[0] == 0) || (local_508[0] == *(int *)(param_1 + 0x560) + -1)) ||
                 (local_538 != 0)) {
LAB_1001f718:
                *puVar2 = 0;
                uVar11 = local_52c;
                if ((iVar8 == 2) && (uVar11 = local_52c | 8, local_538 != 0)) {
                  uVar11 = local_52c;
                }
                local_52c = uVar11;
                FUN_10021bb8(param_1,local_53c,local_52c,(int)puVar2,local_530,local_538,
                             (int)&local_24);
                local_53c = 1;
                iVar13 = iVar13 + 8;
                if ((local_52c & 1) == 0) {
                  iVar12 = *(int *)(param_1 + 0x54c);
                  iVar10 = 0;
                  if (0 < iVar12) {
                    do {
                      iVar1 = iVar10 + 1;
                      if ((local_538 >> (iVar12 - iVar1 & 0x1fU) & 1) != 0) {
                        (**(code **)(param_1 + 0x4e0))
                                  (param_1,local_374[iVar10],*(undefined4 *)(param_1 + 0x24));
                        iVar13 = iVar13 + 4;
                      }
                      iVar12 = *(int *)(param_1 + 0x54c);
                      iVar10 = iVar1;
                    } while (iVar1 < iVar12);
                  }
                  if (*(int *)(param_1 + 0x594) != 0) {
                    *(int *)(param_1 + 0x548) = iVar13;
                    (**(code **)(param_1 + 0x500))
                              (local_374,*(undefined4 *)(param_1 + 0x54c),param_1 + 0x22c,local_530)
                    ;
                    iVar13 = *(int *)(param_1 + 0x54c);
                    iVar12 = 0;
                    if (0 < iVar13) {
                      do {
                        iVar10 = iVar12 + 1;
                        if ((local_538 >> (iVar13 - iVar10 & 0x1fU) & 1) == 0) {
                          *(undefined2 *)((int)local_374[iVar12] + 0x7e) = 0;
                        }
                        else {
                          (**(code **)(param_1 + 0x4f8))(local_374[iVar12]);
                        }
                        iVar13 = *(int *)(param_1 + 0x54c);
                        iVar12 = iVar10;
                      } while (iVar10 < iVar13);
                    }
                  }
                  local_34 = 0;
                  local_30 = 0;
                  local_2c[0] = 0;
                  if ((iVar8 != 2) || ((local_52c & 8) != 0)) goto LAB_1001facd;
                }
                else {
                  iVar12 = 0;
                  do {
                    (**(code **)(param_1 + 0x4dc))
                              (param_1,local_374[iVar12],*(undefined4 *)(param_1 + 0x24),&local_34,0
                              );
                    iVar13 = iVar13 + 4;
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < 4);
                  iVar12 = 4;
                  if (4 < *(int *)(param_1 + 0x54c)) {
                    iVar10 = 0x14;
                    do {
                      (**(code **)(param_1 + 0x4dc))
                                (param_1,local_374[iVar12],*(undefined4 *)(param_1 + 0x24),&local_30
                                 ,1);
                      (**(code **)(param_1 + 0x4dc))
                                (param_1,*(undefined4 *)((int)local_374 + iVar10),
                                 *(undefined4 *)(param_1 + 0x24),local_2c,2);
                      iVar13 = iVar13 + 8;
                      iVar10 = iVar10 + 8;
                      iVar12 = iVar12 + 2;
                    } while (iVar12 < *(int *)(param_1 + 0x54c));
                  }
                  if (*(int *)(param_1 + 0x594) != 0) {
                    *(int *)(param_1 + 0x548) = iVar13;
                    (**(code **)(param_1 + 0x4fc))
                              (local_374,*(undefined4 *)(param_1 + 0x54c),
                               *(undefined4 *)(param_1 + 0x2c8),param_1 + 0x1ac,local_530);
                    (**(code **)(param_1 + 0x4f8))(local_374[0]);
                    (**(code **)(param_1 + 0x4f8))(local_374[1]);
                    (**(code **)(param_1 + 0x4f8))(local_374[2]);
                    (**(code **)(param_1 + 0x4f8))(local_374[3]);
                    (**(code **)(param_1 + 0x4f8))(local_364[0]);
                    (**(code **)(param_1 + 0x4f8))(local_364[1]);
                  }
                }
                local_10 = 0;
                local_14 = 0;
                local_20 = 0;
                local_24 = 0;
                local_8 = 0;
                local_c = 0;
                local_18 = 0;
                local_1c = 0;
              }
              else if ((iVar8 == 2) && ((local_52c & 8) == 0)) {
                local_34 = 0;
                local_30 = 0;
                local_2c[0] = 0;
                local_10 = 0;
                local_14 = 0;
                local_20 = 0;
                local_24 = 0;
                local_8 = 0;
                local_c = 0;
                local_18 = 0;
                local_1c = 0;
                *puVar2 = 1;
                local_53c = local_53c + 1;
              }
              else {
                if ((iVar8 != 3) ||
                   ((((((iVar12 = *(int *)(param_1 + 0x590), iVar12 != 3 || (puVar2[2] != '\x02'))
                       || ((((int)(char)puVar2[-0x3b] ^ local_52c) & 0xc) != 0)) ||
                      (((local_52c & 8) != 0 &&
                       ((local_24 != *(short *)(puVar2 + 0xc) ||
                        (local_20 != *(short *)(puVar2 + 0xe))))))) ||
                     (((local_52c & 4) != 0 &&
                      ((local_1c != *(short *)(puVar2 + 0x10) ||
                       (local_18 != *(short *)(puVar2 + 0x12))))))) &&
                    ((((iVar12 == 3 ||
                       ((puVar2[2] != '\x01' ||
                        ((((int)(char)puVar2[-0x3b] ^ local_52c) & 0xc) != 0)))) ||
                      (((local_52c & 8) != 0 &&
                       (((local_24 != *(short *)(puVar2 + 0xc) ||
                         (local_20 != *(short *)(puVar2 + 0xe))) ||
                        (*(ushort *)(puVar2 + 0x1c) != (ushort)(iVar12 == 2))))))) ||
                     (((local_52c & 4) != 0 &&
                      (((local_1c != *(short *)(puVar2 + 0x10) ||
                        (local_18 != *(short *)(puVar2 + 0x12))) ||
                       (*(ushort *)(puVar2 + 0x1e) != (ushort)(iVar12 == 2)))))))))))
                goto LAB_1001f718;
                *puVar2 = 1;
                local_53c = local_53c + 1;
              }
LAB_1001facd:
              local_55c = local_528 + 1;
              puVar2[1] = (undefined1)local_52c;
              if (*(int *)(param_1 + 0x594) != 0) {
                if (puVar2[3] == '\0') {
                  local_54c = local_51c;
                  local_548 = local_518;
                  local_4dc = local_51c * 8;
                  local_554 = 0x10;
                  local_4d0 = local_4c0;
                  local_4fc = local_4b4 + 0x80;
                  local_4f8 = local_4b4 + 0x88;
                }
                else {
                  local_54c = local_51c * 2;
                  local_548 = *(int *)(param_1 + 0x574);
                  local_4d0 = local_508[0] * 8 + local_548 * 8 * local_520;
                  local_554 = 0x20;
                  local_4fc = local_4b4 + 0x10;
                  local_4f8 = local_4b4 + 0x18;
                  local_4dc = local_51c;
                }
                local_4dc = local_4c4 + local_4dc;
                local_4d8 = local_4dc + 8;
                local_4e0 = local_4c4 + 8;
                local_500 = local_4b4 + 8;
                local_4f4 = local_4b0;
                local_4f0 = local_4ac;
                local_4d4 = local_4d0;
                if ((local_52c & 1) == 0) {
                  (**(code **)(param_1 + 0x4e8))
                            (local_4b4,local_554,local_4c4 + *piVar6,local_54c,local_374[0]);
                  (**(code **)(param_1 + 0x4e8))
                            (local_500,local_554,local_4e0 + *piVar6,local_54c,local_374[1]);
                  (**(code **)(param_1 + 0x4e8))
                            (local_4fc,local_554,local_4dc + *piVar6,local_54c,local_374[2]);
                  (**(code **)(param_1 + 0x4e8))
                            (local_4f8,local_554,local_4d8 + *piVar6,local_54c,local_374[3]);
                  (**(code **)(param_1 + 0x4e8))
                            (local_4f4,8,local_4d4 + *(int *)(param_1 + 0x680),local_548,
                             local_364[0]);
                  (**(code **)(param_1 + 0x4e8))
                            (local_4f0,8,local_4d4 + *(int *)(param_1 + 0x684),local_548,
                             local_364[1]);
                }
                else {
                  FUN_10001050((undefined8 *)(local_4c4 + *piVar6),local_54c,local_374[0]);
                  FUN_10001050((undefined8 *)(local_4e0 + *piVar6),local_54c,local_374[1]);
                  FUN_10001050((undefined8 *)(local_4dc + *piVar6),local_54c,local_374[2]);
                  FUN_10001050((undefined8 *)(local_4d8 + *piVar6),local_54c,local_374[3]);
                  FUN_10001050((undefined8 *)(local_4d4 + *(int *)(param_1 + 0x680)),local_548,
                               (undefined8 *)local_364[0]);
                  FUN_10001050((undefined8 *)(local_4d0 + *(int *)(param_1 + 0x684)),local_548,
                               (undefined8 *)local_364[1]);
                }
              }
              local_508[0] = local_508[0] + 1;
              local_528 = local_55c;
            } while (local_508[0] < *(int *)(param_1 + 0x560));
          }
          local_520 = local_520 + 1;
        } while ((int)local_520 < *(int *)(param_1 + 0x570));
      }
      FUN_10003414();
      uVar11 = (*(int **)(param_1 + 0x24))[0xb];
      if (uVar11 != 8) {
        FUN_100118c0(*(int **)(param_1 + 0x24),0,uVar11);
      }
      FUN_10024ab4(param_1);
      uVar7 = 1;
    }
    else {
      (**(code **)(param_1 + 0xc))("Unable to write to output file.");
      uVar7 = 0;
    }
  }
  else {
    uVar7 = FUN_1001ffe0(param_1,param_1 + 0x670,param_1 + 0x67c,(int *)(param_1 + 0x698));
  }
  return uVar7;
}


