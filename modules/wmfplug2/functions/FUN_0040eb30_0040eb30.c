/* Module: wmfplug2.dll
   Function: FUN_0040eb30
   Address: 0040eb30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040f89f) */
/* WARNING: Removing unreachable block (ram,0x0040f3bf) */
/* WARNING: Removing unreachable block (ram,0x0040fcd2) */

undefined1 * FUN_0040eb30(void *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int *piVar3;
  LPVOID pvVar4;
  LPVOID pMem;
  uint uVar5;
  HGLOBAL pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  int local_4ac;
  int local_488;
  int *local_484;
  int *local_480;
  int *local_47c;
  int *local_478;
  int *local_474;
  int *local_470;
  int *local_46c;
  int *local_468;
  uint *local_464;
  wchar_t *******local_420;
  int *local_41c;
  int *local_418;
  int *local_414 [5];
  uint local_400;
  int *local_3fc [2];
  uint local_3f4;
  int *local_3f0;
  uint local_3ec [2];
  int *local_3e4 [5];
  uint local_3d0;
  uint local_3cc;
  int *local_3c8;
  int *local_3c4;
  int *local_3c0;
  undefined4 local_3bc;
  int *local_3b8 [5];
  int *local_3a4 [3];
  int *local_398;
  wchar_t *******local_394 [2];
  SIZE_T local_38c [2];
  SIZE_T local_384 [2];
  SIZE_T local_37c;
  int *local_378 [2];
  int *local_370;
  uint local_36c [47];
  uint local_2b0;
  int iStack_2ac;
  undefined8 local_2a4;
  int local_29c;
  int local_298;
  uint local_294 [4];
  uint local_284;
  int local_280;
  uint local_27c;
  int *local_1d8;
  undefined8 local_1d4;
  uint local_1cc [4];
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  int *local_110;
  double local_10c;
  uint local_104;
  int local_fc;
  undefined1 local_f8 [4];
  int local_f4 [45];
  int local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0047c098;
  puStack_10 = &DAT_004792de;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffb48;
  puVar2 = (undefined1 *)0x0;
  local_2c = (int *)0x0;
  local_3c = 0;
  local_28 = 0;
  local_38 = 1;
  iVar7 = *(int *)(*(int *)((int)param_1 + 0x23c) + 0x424);
  if (*(uint *)(iVar7 + 0x3a) < 0x7c) {
    return (undefined1 *)0x80070057;
  }
  iVar13 = *(int *)(iVar7 + 0x3e);
  local_20 = *(int *)(iVar7 + 0x12);
  if ((local_20 == 0) || (*(int *)((int)param_1 + 0x250) != 0)) {
    ExceptionList = &local_14;
    if ((*(int *)(iVar13 + 4) != 0) &&
       (ExceptionList = &local_14, *(int *)((int)param_1 + 0x24c) == 0)) {
      if ((*(int *)(iVar13 + 8) == 0) || (*(int *)((int)param_1 + 0x250) == 0)) {
        puVar2 = (undefined1 *)0x8004e01d;
        ExceptionList = &local_14;
      }
      else {
        ExceptionList = &local_14;
        *(undefined4 *)(iVar13 + 4) = 0;
      }
    }
  }
  else if ((*(int *)(iVar13 + 4) == 0) || (*(int *)((int)param_1 + 0x24c) == 0)) {
    puVar2 = (undefined1 *)0x8004e01a;
    ExceptionList = &local_14;
  }
  else {
    local_20 = 0;
    ExceptionList = &local_14;
  }
  if (-1 < (int)puVar2) {
    local_24 = 0;
    if (local_20 != 0) {
      local_24 = iVar13 + 0x38;
    }
    local_30 = iVar13;
    if (*(int *)(iVar13 + 4) == 0) {
      puVar10 = (undefined4 *)0xffffffff;
      puVar2 = (undefined1 *)0x0;
      iVar7 = 0;
    }
    else {
      local_40 = 0;
      local_fc = 0;
      piVar3 = local_f4;
      local_464 = (uint *)(iVar13 + 0x24);
      local_1c = &stack0xfffffb48;
      do {
        if (local_464[-5] != 0) {
          piVar11 = (int *)(iVar13 + 0x4c);
          piVar14 = piVar3 + -1;
          for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar14 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar14 = piVar14 + 1;
          }
          if (*local_464 < *(uint *)(iVar13 + 0x38)) {
            ExceptionList = local_14;
            return (undefined1 *)0x8004e0ab;
          }
          *piVar3 = *local_464 - *(uint *)(iVar13 + 0x38);
          local_40 = local_40 + 1;
          piVar3 = piVar3 + 9;
        }
        local_fc = local_fc + 1;
        local_464 = local_464 + 1;
      } while (local_fc < 5);
      puVar10 = (undefined4 *)0xffffffff;
      if (*(int *)(iVar13 + 0x78) != 0) {
        *(int **)(iVar13 + 0x74) = (int *)(iVar13 + 0x7c);
        piVar3 = FUN_00412200((int *)(iVar13 + 0x7c),*(int *)(iVar13 + 0x78),2);
        if (piVar3 != (int *)0x0) {
          puVar10 = (undefined4 *)piVar3[3];
          local_28 = (uint)(piVar3[4] != 0);
        }
      }
      puVar2 = local_f8;
      iVar7 = local_40;
    }
    puVar2 = (undefined1 *)
             FUN_00414290(local_24,(int *)0x0,(ushort)iVar7,(int)puVar2,puVar10,(int)&local_2c);
    if (-1 < (int)puVar2) {
      puVar2 = (undefined1 *)WMCreateWriter(0,&local_110);
      if ((int)puVar2 < 0) {
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 8))(local_2c);
        }
      }
      else {
        puVar2 = (undefined1 *)(**(code **)(*local_110 + 0x10))(local_110,local_2c);
        if ((int)puVar2 < 0) {
          if (local_2c != (int *)0x0) {
            (**(code **)(*local_2c + 8))(local_2c);
          }
        }
        else {
          if (local_2c != (int *)0x0) {
            (**(code **)(*local_2c + 8))(local_2c);
          }
          local_2c = (int *)0x0;
          puVar2 = (undefined1 *)(**(code **)(*local_110 + 0x14))(local_110,(int)param_1 + 0x10);
          if ((int)puVar2 < 0) {
            if (local_110 != (int *)0x0) {
              (**(code **)(*local_110 + 8))(local_110);
            }
          }
          else {
            puVar2 = (undefined1 *)FUN_0040d080(param_1,local_110);
            if ((int)puVar2 < 0) {
              if (local_110 != (int *)0x0) {
                (**(code **)(*local_110 + 8))(local_110);
              }
            }
            else {
              local_1d8 = (int *)0x0;
              if (*(int *)((int)param_1 + 0x224) < 1) {
                puVar2 = (undefined1 *)((-(uint)(local_20 != 0) & 0xfffffffd) + 0x8004e01d);
              }
              else {
                pvVar6 = GlobalAlloc(0x42,*(int *)((int)param_1 + 0x224) << 6);
                local_1d8 = GlobalLock(pvVar6);
                if (local_1d8 == (int *)0x0) {
LAB_0040f300:
                  puVar2 = (undefined1 *)0x8007000e;
                }
                else {
                  local_298 = 0;
                  local_29c = 0;
                  if (0 < *(int *)((int)param_1 + 0x224)) {
                    local_468 = local_1d8 + 7;
                    local_46c = local_1d8 + 0xf;
                    local_470 = local_1d8 + 0xe;
                    local_474 = local_1d8 + 0xc;
                    piVar3 = local_1d8 + 6;
                    piVar11 = local_1d8 + 5;
                    local_480 = local_1d8 + 8;
                    local_484 = local_1d8 + 4;
                    local_47c = piVar11;
                    local_478 = piVar3;
                    do {
                      if (**(int **)((int)param_1 + 0x22c) <= local_298) break;
                      puVar10 = *(undefined4 **)
                                 (*(int *)(*(int *)((int)param_1 + 0x228) + 8) + local_29c * 4);
                      if (puVar10 != (undefined4 *)0x0) {
                        iVar7 = FUN_0040da60(param_1,local_29c);
                        *local_484 = iVar7;
                        if (iVar7 == -1) {
                          puVar2 = (undefined1 *)0x80004005;
                          goto LAB_0040fe8a;
                        }
                        iVar7 = (**(code **)*puVar10)(puVar10,&DAT_0047ac10,&local_370);
                        if (iVar7 < 0) {
                          iVar7 = (**(code **)*puVar10)(puVar10,&DAT_0047abf0,local_378);
                          if (-1 < iVar7) {
                            *piVar11 = 1;
                            *piVar3 = (int)local_378[0];
                            (**(code **)(*local_378[0] + 0x2c))(local_378[0],local_474);
                            iVar7 = (**(code **)(*local_378[0] + 0x30))
                                              (local_378[0],0,0,local_38c,0,0,0);
                            if (-1 < iVar7) {
                              pvVar6 = GlobalAlloc(0x42,local_38c[0]);
                              pvVar4 = GlobalLock(pvVar6);
                              if (pvVar4 == (LPVOID)0x0) {
                                if (local_110 != (int *)0x0) {
                                  (**(code **)(*local_110 + 8))(local_110);
                                }
                                local_110 = (int *)0x0;
                                piVar3 = local_378[0];
                                goto LAB_0040f2f6;
                              }
                              iVar7 = (**(code **)(*local_378[0] + 0x30))
                                                (local_378[0],pvVar4,local_38c[0],0,0,0,0);
                              if (-1 < iVar7) {
                                iVar7 = *(int *)((int)pvVar4 + 4);
                                *local_470 = iVar7;
                                *local_46c = (uint)*(ushort *)((int)pvVar4 + 0xc) * iVar7;
                                *local_468 = (int)pvVar4;
                              }
                            }
                            local_298 = local_298 + 1;
                            local_484 = local_484 + 0x10;
                            local_480 = local_480 + 0x10;
                            piVar11 = piVar11 + 0x10;
                            piVar3 = piVar3 + 0x10;
                            local_474 = local_474 + 0x10;
                            local_470 = local_470 + 0x10;
                            local_46c = local_46c + 0x10;
                            local_468 = local_468 + 0x10;
                            local_47c = piVar11;
                            local_478 = piVar3;
                          }
                        }
                        else {
                          *piVar11 = 0;
                          *piVar3 = (int)local_370;
                          (**(code **)(*local_370 + 0x34))(local_370,local_474);
                          *local_470 = 1;
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_370 + 0x38))
                                             (local_370,0,0,&local_37c,0,0,local_384);
                          if ((int)puVar2 < 0) {
                            if (local_370 != (int *)0x0) {
                              (**(code **)(*local_370 + 8))(local_370);
                            }
                            goto LAB_0040fe8a;
                          }
                          pvVar6 = GlobalAlloc(0x42,local_37c);
                          pvVar4 = GlobalLock(pvVar6);
                          piVar3 = local_370;
                          if (pvVar4 == (LPVOID)0x0) {
LAB_0040f2f6:
                            if (piVar3 != (int *)0x0) {
                              (**(code **)(*piVar3 + 8))(piVar3);
                            }
                            goto LAB_0040f300;
                          }
                          pvVar6 = GlobalAlloc(0x42,local_384[0]);
                          pMem = GlobalLock(pvVar6);
                          if (pMem == (LPVOID)0x0) {
                            if (local_370 != (int *)0x0) {
                              (**(code **)(*local_370 + 8))(local_370);
                            }
                            local_370 = (int *)0x0;
                            pvVar6 = GlobalHandle(pvVar4);
                            GlobalUnlock(pvVar6);
                            pvVar6 = GlobalHandle(pvVar4);
                            GlobalFree(pvVar6);
                            puVar2 = (undefined1 *)0x8007000e;
                            goto LAB_0040fe8a;
                          }
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_370 + 0x38))
                                             (local_370,pvVar4,local_37c,0,pMem,local_384[0],0);
                          if ((int)puVar2 < 0) {
                            if (local_370 != (int *)0x0) {
                              (**(code **)(*local_370 + 8))(local_370);
                            }
                            local_370 = (int *)0x0;
                            pvVar6 = GlobalHandle(pvVar4);
                            GlobalUnlock(pvVar6);
                            pvVar6 = GlobalHandle(pvVar4);
                            GlobalFree(pvVar6);
                            pvVar6 = GlobalHandle(pMem);
                            GlobalUnlock(pvVar6);
                            pvVar6 = GlobalHandle(pMem);
                            GlobalFree(pvVar6);
                            goto LAB_0040fe8a;
                          }
                          *local_46c = *(int *)((int)pvVar4 + 0x14);
                          *local_468 = (int)pvVar4;
                          *local_480 = *(int *)((int)pMem + 0x10);
                          local_480[1] = *(int *)((int)pMem + 0x14);
                          pvVar6 = GlobalHandle(pMem);
                          GlobalUnlock(pvVar6);
                          pvVar6 = GlobalHandle(pMem);
                          GlobalFree(pvVar6);
                          local_38 = local_298;
                          local_298 = local_298 + 1;
                          local_484 = local_484 + 0x10;
                          local_480 = local_480 + 0x10;
                          piVar11 = local_47c + 0x10;
                          piVar3 = local_478 + 0x10;
                          local_474 = local_474 + 0x10;
                          local_470 = local_470 + 0x10;
                          local_46c = local_46c + 0x10;
                          local_468 = local_468 + 0x10;
                          local_47c = piVar11;
                          local_478 = piVar3;
                        }
                      }
                      local_29c = local_29c + 1;
                    } while (local_29c < *(int *)((int)param_1 + 0x224));
                  }
                  iVar7 = FUN_0040ffa0(*(int **)((int)param_1 + 0x238));
                  if ((iVar7 == 0) &&
                     (iVar7 = (**(code **)*local_110)(local_110,&DAT_0047b600,local_394), -1 < iVar7
                     )) {
                    FUN_0040e060(param_1,local_394[0],1);
                    (*(code *)(*local_394[0])[2])(local_394[0]);
                  }
                  if ((*(int *)((int)param_1 + 0x244) != 0) &&
                     (iVar7 = (**(code **)*local_110)(local_110,&DAT_0047b600,&local_398),
                     -1 < iVar7)) {
                    (**(code **)(*local_398 + 0x18))
                              (local_398,0,PTR_u_Use_DRM_00488020,3,(int *)((int)param_1 + 0x244),4)
                    ;
                    (**(code **)(*local_398 + 0x18))
                              (local_398,0,PTR_u_DRM_Flags_00488024,0,(int)param_1 + 0x248,4);
                    (**(code **)(*local_398 + 0x18))
                              (local_398,0,PTR_u_DRM_Level_00488028,0,(int)param_1 + 0x240,4);
                    (**(code **)(*local_398 + 8))(local_398);
                  }
                  local_8 = 0;
                  puVar2 = (undefined1 *)(**(code **)(*local_110 + 0x2c))(local_110);
                  local_8 = 0xffffffff;
                  local_34 = puVar2;
                  if (-1 < (int)puVar2) {
                    local_2b0 = 0;
                    iStack_2ac = 0;
                    local_2a4._0_4_ = 0;
                    lVar1 = 0;
                    local_1d4._0_4_ = 0;
                    local_1d4._4_4_ = 0;
                    if (0 < local_298) {
                      piVar3 = local_1d8 + 0xc;
                      local_488 = local_298;
                      lVar1 = 0;
                      do {
                        local_2a4._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
                        uVar8 = (undefined4)lVar1;
                        if ((piVar3[-7] == 0) || (*(int *)(piVar3[-5] + 4) != 0)) {
                          lVar16 = ftol();
                        }
                        else {
                          lVar16 = 0;
                        }
                        lVar1 = CONCAT44(local_2a4._4_4_,uVar8);
                        if (CONCAT44(local_2a4._4_4_,uVar8) < lVar16) {
                          lVar1 = lVar16;
                        }
                        piVar3 = piVar3 + 0x10;
                        local_488 = local_488 + -1;
                      } while (local_488 != 0);
                    }
                    local_2a4._0_4_ = (undefined4)lVar1;
                    uVar8 = (undefined4)local_2a4;
                    local_1d4 = CONCAT44(local_1d4._4_4_,(undefined4)local_1d4);
                    if ((*(int *)(local_30 + 4) != 0) &&
                       (local_1d4 = CONCAT44(local_1d4._4_4_,(undefined4)local_1d4),
                       *(int *)(local_30 + 0xc) != 0)) {
                      local_2a4 = lVar1;
                      local_1d4 = ftol();
                      lVar1 = local_1d4 + CONCAT44(local_2a4._4_4_,uVar8);
                    }
                    puVar12 = local_36c;
                    local_2a4 = lVar1;
                    for (iVar7 = 0x2f; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                    puVar12 = local_294;
                    for (iVar7 = 0x2f; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                    puVar12 = local_1cc;
                    for (iVar7 = 0x2f; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                    iVar7 = 0;
                    if (param_2 != (uint *)0x0) {
                      iVar13 = 1;
                      if (local_28 != 0) {
                        iVar13 = 2;
                        local_36c[0] = 0;
                        local_36c[1] = 0;
                        iVar7 = 1000;
                        local_36c[2] = 1000;
                        local_36c[3] = 0;
                        local_36c[4] = 1000;
                        local_36c[5] = 0;
                        local_36c[6] = 2;
                      }
                      local_27c = (uint)(local_20 != 0);
                      if (*(int *)(local_30 + 4) != 0) {
                        local_27c = local_27c | 2;
                      }
                      local_294[2] = local_36c[2] + 0x3b6;
                      local_294[3] = local_36c[3] + (0xfffffc49 < local_36c[2]);
                      iVar9 = iVar7 + 0x3b6;
                      if (*(int *)(local_30 + 0xc) != 0) {
                        iVar13 = iVar13 + 1;
                        local_1cc[2] = local_36c[2] + 1000;
                        local_1cc[3] = local_294[3] + (0xffffffcd < local_294[2]);
                        local_1b4 = 0;
                        iVar9 = iVar7 + 1000;
                        local_1cc[0] = local_294[2];
                        local_1cc[1] = local_294[3];
                        local_1bc = local_1cc[2];
                        local_1b8 = local_1cc[3];
                      }
                      local_294[0] = local_36c[2];
                      local_294[1] = local_36c[3];
                      local_284 = local_294[2];
                      local_280 = local_294[3];
                      puVar2 = (undefined1 *)(**(code **)*param_2)(param_2,&DAT_0047abc0,local_3a4);
                      if ((int)puVar2 < 0) {
                        puVar2 = (undefined1 *)0x0;
                      }
                      else {
                        (**(code **)(*local_3a4[0] + 0xc))(local_3a4[0],iVar13);
                        bVar15 = local_28 != 0;
                        if (bVar15) {
                          (**(code **)(*local_3a4[0] + 0x10))(local_3a4[0],0,local_36c);
                        }
                        (**(code **)(*local_3a4[0] + 0x10))(local_3a4[0],bVar15,local_294);
                        if (*(int *)(local_30 + 0xc) != 0) {
                          (**(code **)(*local_3a4[0] + 0x10))
                                    (local_3a4[0],bVar15 + '\x01',local_1cc);
                        }
                        if (local_3a4[0] != (int *)0x0) {
                          (**(code **)(*local_3a4[0] + 8))(local_3a4[0]);
                        }
                        local_3a4[0] = (int *)0x0;
                      }
                      (**(code **)(*param_2 + 0xc))(param_2,0,iVar9,0);
                    }
                    if (local_28 != 0) {
                      local_3b8[0] = (int *)0x0;
                      puVar2 = (undefined1 *)
                               (**(code **)*local_110)(local_110,&DAT_0047c0b8,local_3b8);
                      if (-1 < (int)puVar2) {
                        local_3bc = 0;
                        piVar3 = local_1d8 + local_38 * 0x10 + 4;
                        puVar2 = (undefined1 *)
                                 (**(code **)(*local_3b8[0] + 0xc))
                                           (local_3b8[0],*piVar3,0,&local_3bc);
                        if (-1 < (int)puVar2) {
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_3b8[0] + 0x10))
                                             (local_3b8[0],*piVar3,0,local_3bc);
                          if (-1 < (int)puVar2) {
                            puVar2 = (undefined1 *)
                                     (**(code **)(*local_3b8[0] + 0x14))(local_3b8[0],*piVar3,0);
                          }
                        }
                      }
                      iVar7 = local_38;
                      piVar3 = local_1d8;
                      local_10c = (double)CONCAT44((local_36c[5] - local_36c[1]) -
                                                   (uint)(local_36c[4] < local_36c[0]),
                                                   local_36c[4] - local_36c[0]) / (double)local_2a4;
                      bVar15 = (int)puVar2 < 0;
                      if (bVar15) {
                        puVar2 = (undefined1 *)0x0;
                      }
                      local_104 = (uint)!bVar15;
                      while ((local_104 != 0 && (-1 < (int)puVar2))) {
                        puVar2 = (undefined1 *)
                                 (**(code **)(*local_110 + 0x34))
                                           (local_110,piVar3[iVar7 * 0x10 + 0xf],&local_3c8);
                        if (-1 < (int)puVar2) {
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_3c8 + 0x1c))(local_3c8,&local_3c0,&local_3d0)
                          ;
                          if (-1 < (int)puVar2) {
                            puVar2 = (undefined1 *)
                                     (**(code **)(*(int *)piVar3[iVar7 * 0x10 + 6] + 0x3c))
                                               ((int *)piVar3[iVar7 * 0x10 + 6],
                                                piVar3[iVar7 * 0x10 + 10],piVar3[iVar7 * 0x10 + 0xb]
                                                ,&local_3c4,&local_3cc,0,0,0,0,0);
                            if (puVar2 == (undefined1 *)0x0) {
                              puVar12 = (uint *)(piVar3 + iVar7 * 0x10 + 10);
                              uVar5 = *puVar12;
                              *puVar12 = *puVar12 + 1;
                              piVar3[iVar7 * 0x10 + 0xb] =
                                   piVar3[iVar7 * 0x10 + 0xb] + (uint)(0xfffffffe < uVar5);
                              if ((int)local_3cc < 0) {
                                piVar11 = (int *)piVar3[iVar7 * 0x10 + 7];
                                uVar5 = (uint)*(ushort *)((int)piVar11 + 0xe) * piVar11[1] + 0x1f;
                                FUN_004352b0(piVar11,local_3c0,(uint *)0x0,0,piVar11,
                                             (int *)(((int)((uVar5 & 0xffffffe0) +
                                                           ((int)uVar5 >> 0x1f & 7U)) >> 3) *
                                                     (piVar11[2] + -1) + (int)local_3c4),(uint *)0x0
                                             ,local_3cc,3);
                              }
                              else {
                                piVar11 = local_3c4;
                                piVar14 = local_3c0;
                                for (uVar5 = local_3d0 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *piVar14 = *piVar11;
                                  piVar11 = piVar11 + 1;
                                  piVar14 = piVar14 + 1;
                                }
                                for (uVar5 = local_3d0 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *(char *)piVar14 = (char)*piVar11;
                                  piVar11 = (int *)((int)piVar11 + 1);
                                  piVar14 = (int *)((int)piVar14 + 1);
                                }
                              }
                              (**(code **)(*(int *)piVar3[iVar7 * 0x10 + 6] + 0x40))
                                        ((int *)piVar3[iVar7 * 0x10 + 6],local_3c4);
                              puVar2 = (undefined1 *)
                                       (**(code **)(*local_3c8 + 0x10))(local_3c8,local_3d0);
                              if (-1 < (int)puVar2) {
                                puVar2 = (undefined1 *)
                                         (**(code **)(*local_3b8[0] + 0x18))
                                                   (local_3b8[0],piVar3[iVar7 * 0x10 + 4],
                                                    piVar3[iVar7 * 0x10 + 2],
                                                    piVar3[iVar7 * 0x10 + 3],0,local_3c8);
                                uVar17 = ftol();
                                iVar13 = (int)((ulonglong)uVar17 >> 0x20);
                                *(undefined8 *)(piVar3 + iVar7 * 0x10 + 2) = uVar17;
                                if ((iStack_2ac <= iVar13) &&
                                   ((iStack_2ac < iVar13 ||
                                    (local_2b0 < (uint)piVar3[iVar7 * 0x10 + 2])))) {
                                  local_2b0 = piVar3[iVar7 * 0x10 + 2];
                                  iStack_2ac = iVar13;
                                }
                              }
                            }
                            else {
                              local_104 = 0;
                              if (puVar2 == (undefined1 *)0x1) {
                                puVar2 = (undefined1 *)0x0;
                              }
                            }
                          }
                          (**(code **)(*local_3c8 + 8))(local_3c8);
                          local_3c8 = (int *)0x0;
                          if ((-1 < (int)puVar2) && (param_2 != (uint *)0x0)) {
                            uVar5 = local_36c[2];
                            if (CONCAT44(iStack_2ac,local_2b0) <= local_2a4 - local_1d4) {
                              uVar5 = ftol();
                            }
                            iVar13 = (**(code **)(*param_2 + 0x18))
                                               (param_2,uVar5,(int)uVar5 >> 0x1f);
                            if (iVar13 < 0) {
                              puVar2 = (undefined1 *)0x8004e00c;
                            }
                          }
                        }
                      }
                      piVar3[iVar7 * 0x10 + 10] = 0;
                      piVar3[iVar7 * 0x10 + 0xb] = 0;
                      piVar3[iVar7 * 0x10 + 2] = 0;
                      piVar3[iVar7 * 0x10 + 3] = 0;
                      if (local_3b8[0] != (int *)0x0) {
                        puVar2 = (undefined1 *)
                                 (**(code **)(*local_3b8[0] + 0x1c))
                                           (local_3b8[0],piVar3[iVar7 * 0x10 + 4],0);
                        (**(code **)(*local_3b8[0] + 8))(local_3b8[0]);
                      }
                    }
                    local_10c = (double)CONCAT44((local_294[3] - local_294[1]) -
                                                 (uint)(local_294[2] < local_294[0]),
                                                 local_294[2] - local_294[0]) / (double)local_2a4;
                    local_2b0 = 0;
                    iStack_2ac = 0;
                    local_104 = 1;
                    do {
                      if ((int)puVar2 < 0) break;
                      piVar3 = FUN_0040ff30(local_1d8,local_298);
                      if (piVar3 == (int *)0x0) {
                        local_104 = 0;
LAB_0040fc9f:
                        if ((-1 < (int)puVar2) && (param_2 != (uint *)0x0)) {
                          uVar5 = local_294[2];
                          if (CONCAT44(iStack_2ac,local_2b0) <= local_2a4 - local_1d4) {
                            uVar5 = ftol();
                          }
                          iVar7 = (**(code **)(*param_2 + 0x18))(param_2,uVar5,(int)uVar5 >> 0x1f);
                          if (iVar7 < 0) {
                            puVar2 = (undefined1 *)0x8004e00c;
                          }
                        }
                      }
                      else {
                        iVar7 = piVar3[3];
                        if ((iStack_2ac <= iVar7) &&
                           ((iStack_2ac < iVar7 || (local_2b0 < (uint)piVar3[2])))) {
                          local_2b0 = piVar3[2];
                          iStack_2ac = iVar7;
                        }
                        if (piVar3[5] == 0) {
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_110 + 0x34))
                                             (local_110,piVar3[0xf],&local_3f0);
                          if (-1 < (int)puVar2) {
                            puVar2 = (undefined1 *)
                                     (**(code **)(*local_3f0 + 0x1c))
                                               (local_3f0,local_3e4,&local_3f4);
                            if (-1 < (int)puVar2) {
                              puVar2 = (undefined1 *)
                                       (**(code **)(*(int *)piVar3[6] + 0x3c))
                                                 ((int *)piVar3[6],piVar3[10],piVar3[0xb],local_3fc,
                                                  &local_400,0,0,0,0,0);
                              if (puVar2 != (undefined1 *)0x0) {
                                *piVar3 = 1;
                                goto joined_r0x0040fc8e;
                              }
                              puVar12 = (uint *)(piVar3 + 10);
                              uVar5 = *puVar12;
                              *puVar12 = *puVar12 + 1;
                              piVar3[0xb] = piVar3[0xb] + (uint)(0xfffffffe < uVar5);
                              if ((int)local_400 < 0) {
                                piVar11 = (int *)piVar3[7];
                                uVar5 = (uint)*(ushort *)((int)piVar11 + 0xe) * piVar11[1] + 0x1f;
                                FUN_004352b0(piVar11,local_3e4[0],(uint *)0x0,0,piVar11,
                                             (int *)(((int)((uVar5 & 0xffffffe0) +
                                                           ((int)uVar5 >> 0x1f & 7U)) >> 3) *
                                                     (piVar11[2] + -1) + (int)local_3fc[0]),
                                             (uint *)0x0,local_400,3);
                              }
                              else {
                                piVar11 = local_3fc[0];
                                piVar14 = local_3e4[0];
                                for (uVar5 = local_3f4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *piVar14 = *piVar11;
                                  piVar11 = piVar11 + 1;
                                  piVar14 = piVar14 + 1;
                                }
                                for (uVar5 = local_3f4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *(char *)piVar14 = (char)*piVar11;
                                  piVar11 = (int *)((int)piVar11 + 1);
                                  piVar14 = (int *)((int)piVar14 + 1);
                                }
                              }
                              (**(code **)(*(int *)piVar3[6] + 0x40))((int *)piVar3[6],local_3fc[0])
                              ;
                              puVar2 = (undefined1 *)
                                       (**(code **)(*local_3f0 + 0x10))(local_3f0,local_3f4);
                              if (-1 < (int)puVar2) {
                                puVar2 = (undefined1 *)
                                         (**(code **)(*local_110 + 0x38))
                                                   (local_110,piVar3[4],piVar3[2],piVar3[3],0,
                                                    local_3f0);
                                uVar17 = ftol();
                                *(undefined8 *)(piVar3 + 2) = uVar17;
                                (**(code **)(*local_3f0 + 8))(local_3f0);
                                local_3f0 = (int *)0x0;
                                goto LAB_0040fc9f;
                              }
                            }
                            goto LAB_0040fb13;
                          }
                        }
                        else {
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_110 + 0x34))
                                             (local_110,piVar3[0xf],&local_3f0);
                          if (-1 < (int)puVar2) {
                            puVar2 = (undefined1 *)
                                     (**(code **)(*local_3f0 + 0x1c))
                                               (local_3f0,local_3e4,&local_3f4);
                            if (-1 < (int)puVar2) {
                              puVar2 = (undefined1 *)
                                       (**(code **)(*(int *)piVar3[6] + 0x3c))
                                                 ((int *)piVar3[6],piVar3[10],piVar3[0xb],
                                                  local_3e4[0],
                                                  local_3f4 / *(ushort *)(piVar3[7] + 0xc),local_3ec
                                                 );
                              if ((puVar2 == (undefined1 *)0x0) && (local_3ec[0] != 0)) {
                                puVar12 = (uint *)(piVar3 + 10);
                                uVar5 = *puVar12;
                                *puVar12 = *puVar12 + local_3ec[0];
                                piVar3[0xb] = piVar3[0xb] + (uint)CARRY4(uVar5,local_3ec[0]);
                                puVar2 = (undefined1 *)
                                         (**(code **)(*local_3f0 + 0x10))
                                                   (local_3f0,
                                                    *(ushort *)(piVar3[7] + 0xc) * local_3ec[0]);
                                if (-1 < (int)puVar2) {
                                  puVar2 = (undefined1 *)
                                           (**(code **)(*local_110 + 0x38))
                                                     (local_110,piVar3[4],piVar3[2],piVar3[3],0,
                                                      local_3f0);
                                  if (*(int *)(piVar3[7] + 4) == 0) {
                                    piVar3[2] = 0;
                                    piVar3[3] = 0;
                                    (**(code **)(*local_3f0 + 8))(local_3f0);
                                    local_3f0 = (int *)0x0;
                                  }
                                  else {
                                    uVar17 = ftol();
                                    *(undefined8 *)(piVar3 + 2) = uVar17;
                                    (**(code **)(*local_3f0 + 8))(local_3f0);
                                    local_3f0 = (int *)0x0;
                                  }
                                  goto LAB_0040fc9f;
                                }
                              }
                              else {
                                *piVar3 = 1;
joined_r0x0040fc8e:
                                if (puVar2 == (undefined1 *)0x1) {
                                  puVar2 = (undefined1 *)0x0;
                                }
                              }
                            }
LAB_0040fb13:
                            (**(code **)(*local_3f0 + 8))(local_3f0);
                            local_3f0 = (int *)0x0;
                            goto LAB_0040fc9f;
                          }
                        }
                      }
                    } while (local_104 != 0);
                    if ((int)puVar2 < 0) {
                      (**(code **)(*local_110 + 0x30))(local_110);
                    }
                    else {
                      puVar2 = (undefined1 *)(**(code **)(*local_110 + 0x30))(local_110);
                    }
                    piVar3 = *(int **)((int)param_1 + 0xc);
                    if (piVar3 != (int *)0x0) {
                      local_414[0] = (int *)0x0;
                      iVar7 = (**(code **)(*piVar3 + 0x18))(piVar3,local_414);
                      if (-1 < iVar7) {
                        iVar7 = (**(code **)*local_414[0])(local_414[0],&DAT_0047ad60,&local_418);
                        if (-1 < iVar7) {
                          local_3c = (**(code **)(*local_418 + 0x18))(local_418,0x271b,0);
                          (**(code **)(*local_418 + 8))(local_418);
                        }
                        (**(code **)(*local_414[0] + 8))(local_414[0]);
                      }
                    }
                    if (local_3c != 0) {
                      FUN_00410070(local_110,(int)param_1 + 0x10,*(int *)((int)param_1 + 0x23c));
                    }
                    if (local_110 != (int *)0x0) {
                      (**(code **)(*local_110 + 8))(local_110);
                    }
                    local_110 = (int *)0x0;
                    if (-1 < (int)puVar2) {
                      iVar7 = FUN_0040ffa0(*(int **)((int)param_1 + 0x238));
                      if (iVar7 != 0) {
                        puVar2 = (undefined1 *)WMCreateEditor(&local_41c);
                        if (-1 < (int)puVar2) {
                          puVar2 = (undefined1 *)
                                   (**(code **)(*local_41c + 0xc))(local_41c,(int)param_1 + 0x10);
                          if (-1 < (int)puVar2) {
                            puVar2 = (undefined1 *)
                                     (**(code **)*local_41c)(local_41c,&DAT_0047b600,&local_420);
                            if (-1 < (int)puVar2) {
                              puVar2 = FUN_0040e060(param_1,local_420,1);
                              (*(code *)(*local_420)[2])(local_420);
                            }
                            (**(code **)(*local_41c + 0x14))(local_41c);
                          }
                          (**(code **)(*local_41c + 8))(local_41c);
                        }
                      }
                      if ((*(int *)(local_30 + 4) != 0) && (*(int *)(local_30 + 0xc) != 0)) {
                        FUN_004105f0((int)param_1 + 0x10,param_2);
                      }
                    }
                  }
                }
              }
LAB_0040fe8a:
              if (local_110 != (int *)0x0) {
                (**(code **)(*local_110 + 8))(local_110);
              }
              local_110 = (int *)0x0;
              if (local_1d8 != (int *)0x0) {
                if (0 < local_298) {
                  piVar3 = local_1d8 + 6;
                  local_4ac = local_298;
                  do {
                    (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
                    pvVar6 = GlobalHandle((LPCVOID)piVar3[1]);
                    GlobalUnlock(pvVar6);
                    pvVar6 = GlobalHandle((LPCVOID)piVar3[1]);
                    GlobalFree(pvVar6);
                    piVar3 = piVar3 + 0x10;
                    local_4ac = local_4ac + -1;
                  } while (local_4ac != 0);
                }
                piVar3 = local_1d8;
                pvVar6 = GlobalHandle(local_1d8);
                GlobalUnlock(pvVar6);
                pvVar6 = GlobalHandle(piVar3);
                GlobalFree(pvVar6);
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return puVar2;
}


