/* Module: wavplug.dll
   Function: FUN_5f394360
   Address: 5f394360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f394360(int *param_1,LPCSTR param_2,undefined4 *param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  SIZE_T dwBytes;
  BOOL BVar6;
  int iVar7;
  HGLOBAL pvVar8;
  int iVar9;
  LPCVOID pMem;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  HANDLE pvStack_e0;
  uint uStack_dc;
  int iStack_d8;
  ushort *puStack_d4;
  ushort *local_d0;
  int local_cc;
  LPVOID local_c8;
  uint local_c4;
  int local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint uStack_b0;
  int *local_ac;
  uint local_a8;
  int local_a4;
  uint uStack_a0;
  uint uStack_9c;
  LPVOID pvStack_98;
  DWORD local_94;
  DWORD DStack_90;
  SIZE_T local_8c;
  uint local_88;
  code *local_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint local_74;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  SIZE_T SStack_60;
  uint local_5c [3];
  LPVOID pvStack_50;
  uint uStack_4c;
  uint uStack_48;
  LPCVOID pvStack_40;
  DWORD DStack_38;
  undefined1 auStack_8 [8];
  
  local_64 = param_5;
  puVar13 = local_5c;
  for (iVar9 = 0x15; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  uVar10 = 0;
  local_d0 = (ushort *)0x0;
  local_94 = 0;
  local_ac = (int *)0x0;
  local_c8 = (LPVOID)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_88 = 0;
  local_74 = 0;
  local_84 = (code *)0x0;
  local_8c = 0;
  local_68 = 0;
  local_cc = 0;
  if (param_7 != 0) {
    param_5 = 0;
    param_6 = 0;
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1,0,100,0);
  }
  pvStack_e0 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x8000000,(HANDLE)0x0);
  if ((pvStack_e0 == (HANDLE)0xffffffff) || (param_4 == 0)) {
    uVar12 = 0x8004e006;
  }
  else {
    (**(code **)*param_3)(param_3,&DAT_5f3c9b40,&local_ac);
    if (local_ac == (int *)0x0) {
      uVar12 = 0x8000ffff;
    }
    else {
      puStack_d4 = *(ushort **)(*(ushort **)(param_4 + 0x424) + 0xb);
      if (puStack_d4 == (ushort *)0x0) {
        puStack_d4 = *(ushort **)(param_4 + 0x424);
      }
      iVar9 = (**(code **)(*local_ac + 0x30))(local_ac,0,0,&local_8c,0,0,0);
      if (iVar9 < 0) {
        return 0x8000ffff;
      }
      pvVar8 = GlobalAlloc(0x42,local_8c);
      local_d0 = GlobalLock(pvVar8);
      if (local_d0 != (ushort *)0x0) {
        uVar12 = (**(code **)(*local_ac + 0x30))(local_ac,local_d0,local_8c,&local_8c,0,0,0);
        if ((int)uVar12 < 0) goto LAB_5f395233;
      }
      (**(code **)(*local_ac + 0x2c))(local_ac,auStack_8);
      if (param_5 == 0) {
        uVar12 = FUN_5f3a5960(pvStack_e0,(-(uint)(param_7 != 0) & 0xdaeb04fc) + 0x45564157,0);
        uVar14 = 0xc;
        iStack_d8 = 0;
        uVar10 = FUN_5f394340(0x28);
      }
      else {
        uVar12 = FUN_5f3aa690(pvStack_e0);
        uVar14 = 0x28;
        iStack_d8 = 0;
      }
      if (-1 < (int)uVar12) {
        if ((*puStack_d4 == 3) || (*puStack_d4 == 1)) {
          uStack_bc = 0x10;
        }
        else {
          uStack_bc = puStack_d4[8] + 0x12;
        }
        if (param_5 == 0) {
          uVar12 = FUN_5f3a58a0(pvStack_e0,0x20746d66,puStack_d4,uStack_bc,(int *)&uStack_9c);
          uVar4 = uStack_9c;
          iStack_d8 = iStack_d8 + (uint)CARRY4(uVar14,uStack_9c);
          uVar3 = FUN_5f394340(uStack_9c + 0x10);
          uVar10 = uVar10 + uVar3;
        }
        else {
          uVar12 = FUN_5f3aa320(pvStack_e0);
          iStack_d8 = iStack_d8 + iStack_6c + (uint)CARRY4(uVar14,uStack_70);
          uVar4 = uStack_70;
        }
        uVar14 = uVar14 + uVar4;
        if (-1 < (int)uVar12) {
          if ((*puStack_d4 != 1) && (*puStack_d4 != 3)) {
            local_94 = SetFilePointer(pvStack_e0,0,(PLONG)0x0,1);
            if (param_5 == 0) {
              pvStack_98 = (LPVOID)0x0;
              uVar12 = FUN_5f3a58a0(pvStack_e0,0x74636166,&pvStack_98,4,(int *)&uStack_9c);
              iStack_d8 = iStack_d8 + (uint)CARRY4(uVar14,uStack_9c);
              uVar4 = FUN_5f394340(uStack_9c + 0x10);
              uVar10 = uVar10 + uVar4;
            }
            else {
              uStack_7c = 0;
              uStack_78 = 0;
              uVar12 = FUN_5f3aa320(pvStack_e0);
              iStack_d8 = iStack_d8 + iStack_6c + (uint)CARRY4(uVar14,uStack_70);
              uStack_9c = uStack_70;
            }
            uVar14 = uVar14 + uStack_9c;
            if ((int)uVar12 < 0) goto LAB_5f395233;
            uVar12 = FUN_5f393ec0((uint)local_d0,(int)puStack_d4);
            if ((int)uVar12 < 0) goto LAB_5f395233;
          }
          if ((param_5 == 0) && (param_6 != 0)) {
            uVar12 = FUN_5f394340(0x18);
            uVar10 = (uVar12 - 8) + (uVar10 - uVar14);
            FUN_5f3a5850(pvStack_e0);
            SetFilePointer(pvStack_e0,uVar10 - 8,(PLONG)0x0,1);
            bVar17 = CARRY4(uVar14,uVar10);
            uVar14 = uVar14 + uVar10;
            iStack_d8 = iStack_d8 + (uint)bVar17;
            local_74 = uVar10;
          }
          DStack_90 = SetFilePointer(pvStack_e0,0,(PLONG)0x0,1);
          if (param_5 == 0) {
            uVar12 = FUN_5f3a5850(pvStack_e0);
            bVar17 = 0xfffffff7 < uVar14;
            uStack_dc = uVar14 + 8;
          }
          else {
            uVar12 = FUN_5f3aa2b0(pvStack_e0);
            bVar17 = 0xffffffe7 < uVar14;
            uStack_dc = uVar14 + 0x18;
          }
          puVar11 = local_d0;
          iStack_d8 = iStack_d8 + (uint)bVar17;
          if (-1 < (int)uVar12) {
            uStack_7c = (uint)local_d0[6];
            if (local_cc == 0) {
              uVar10 = 0x2000;
            }
            else {
              uVar10 = uStack_4c / uStack_7c;
            }
            SStack_60 = uVar10 * uStack_7c;
            pvVar5 = pvStack_50;
            if (local_cc == 0) {
              pvVar8 = GlobalAlloc(0x42,SStack_60);
              pvVar5 = GlobalLock(pvVar8);
            }
            puVar2 = puStack_d4;
            local_c8 = pvVar5;
            if (pvVar5 == (LPVOID)0x0) {
              uVar12 = 0x8007000e;
            }
            else {
              pvStack_98 = (LPVOID)0x0;
              if ((local_cc == 0) && ((puVar11[7] != puStack_d4[7] || (*puVar11 != *puStack_d4)))) {
                uStack_80 = 0;
                local_84 = (code *)uVar10;
                dwBytes = ftol();
                pvVar8 = GlobalAlloc(0x42,dwBytes);
                pvStack_98 = GlobalLock(pvVar8);
                local_84 = (code *)FUN_5f3b1aa0(puVar2,puVar11);
                if (local_84 == (code *)0x0) {
                  uVar12 = 0x80004001;
                  goto LAB_5f395233;
                }
              }
              do {
                do {
                  uVar10 = local_88;
                  puVar11 = local_d0;
                  uVar12 = (**(code **)(*local_ac + 0x3c))
                                     (local_ac,local_a8,local_a4,local_88 + (int)local_c8,
                                      SStack_60 / local_d0[6] - local_88,&uStack_a0);
                  pvVar5 = pvStack_98;
                  if ((uVar12 == 0) && (uStack_a0 != 0)) {
                    if (uVar10 != 0) goto LAB_5f394949;
                  }
                  else {
                    if (uVar10 == 0) {
                      if (uVar12 == 1) {
                        uVar12 = 0;
                      }
                      else if (uVar12 == 0x4e00c) {
                        uVar12 = 1;
                        local_68 = 0x4e00c;
                      }
                      else if ((int)uVar12 < 0) goto LAB_5f395233;
                      puVar11 = puStack_d4;
                      if (local_cc == 0) goto LAB_5f394e4c;
                      uStack_4c = 0;
                      uStack_48 = 0;
                      iVar9 = acmStreamConvert(local_cc,local_5c,0x24);
                      puVar11 = puStack_d4;
                      goto joined_r0x5f394ca5;
                    }
LAB_5f394949:
                    local_88 = 0;
                    uStack_a0 = uStack_a0 + uVar10 / puVar11[6];
                  }
                  uVar10 = uStack_a0;
                  if (local_cc == 0) {
                    if (pvStack_98 == (LPCVOID)0x0) {
                      BVar6 = WriteFile(pvStack_e0,local_c8,local_d0[6] * uStack_a0,&uStack_b0,
                                        (LPOVERLAPPED)0x0);
                      if (BVar6 == 0) goto LAB_5f394fad;
                      uVar10 = uStack_b0 / puStack_d4[6];
                    }
                    else {
                      (*local_84)(pvStack_98,local_c8,local_d0[1] * uStack_a0,0x3f800000);
                      BVar6 = WriteFile(pvStack_e0,pvVar5,puStack_d4[6] * uVar10,&uStack_b0,
                                        (LPOVERLAPPED)0x0);
                      if (BVar6 == 0) goto LAB_5f394fad;
                    }
                  }
                  else {
                    uVar14 = local_d0[6] * uStack_a0;
                    uStack_48 = local_d0[6] * uStack_a0;
                    uStack_4c = uVar14;
                    if (uVar14 % local_5c[2] != 0) {
                      uStack_4c = (uVar14 / local_5c[2] + 1) * local_5c[2];
                      puVar15 = (undefined4 *)(uVar14 + (int)pvStack_50);
                      for (uVar4 = uStack_4c - uVar14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                        *puVar15 = 0;
                        puVar15 = puVar15 + 1;
                      }
                      for (uVar14 = uStack_4c - uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                        *(undefined1 *)puVar15 = 0;
                        puVar15 = (undefined4 *)((int)puVar15 + 1);
                      }
                    }
                    if (uStack_4c < puStack_d4[6]) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = 4;
                    }
                    iVar9 = acmStreamConvert(local_cc,local_5c,uVar19);
                    if (iVar9 != 0) {
                      uVar12 = 0x8004e01e;
                      goto LAB_5f395233;
                    }
                    if ((local_5c[1] & 0x10000) == 0) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    BVar6 = WriteFile(pvStack_e0,pvStack_40,DStack_38,&uStack_b0,(LPOVERLAPPED)0x0);
                    if (BVar6 == 0) goto LAB_5f394fad;
                    if (uStack_48 < uStack_4c) {
                      memmove(pvStack_50,(void *)(uStack_48 + (int)pvStack_50),uStack_4c - uStack_48
                             );
                      local_88 = uStack_4c - uStack_48;
                    }
                  }
                  bVar17 = CARRY4(local_a8,uStack_a0);
                  local_a8 = local_a8 + uStack_a0;
                  local_a4 = local_a4 + (uint)bVar17;
                  bVar17 = CARRY4(local_c4,uStack_b0);
                  local_c4 = local_c4 + uStack_b0;
                  local_c0 = local_c0 + (uint)bVar17;
                  bVar17 = CARRY4((uint)local_b8,uVar10);
                  local_b8._0_4_ = (uint)local_b8 + uVar10;
                  local_b8._4_4_ = local_b8._4_4_ + (uint)bVar17;
                  bVar18 = CARRY4(uStack_dc,uStack_b0);
                  uStack_dc = uStack_dc + uStack_b0;
                  bVar17 = SCARRY4(iStack_d8,(uint)bVar18);
                  iStack_d8 = iStack_d8 + (uint)bVar18;
                  if ((-1 < iStack_d8) &&
                     (((iStack_d8 != 0 && !bVar17 || (0x7ff0bdbe < uStack_dc)) && (param_5 == 0))))
                  {
                    if (param_6 == 0) goto LAB_5f394c34;
                    if ((*puStack_d4 == 1) || (*puStack_d4 == 3)) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = 1;
                    }
                    uVar12 = FUN_5f3942b0(param_2,&pvStack_e0,0,puStack_d4,iVar9,0,0,&local_94,
                                          &DStack_90);
                    param_5 = 1;
                  }
                  if ((int)uVar12 < 0) goto LAB_5f395233;
                } while (param_1 == (int *)0x0);
                iVar9 = ftol();
                iVar9 = (**(code **)(*param_1 + 0x18))(param_1,iVar9,iVar9 >> 0x1f);
              } while (-1 < iVar9);
              uVar12 = 0x8004e00c;
            }
          }
        }
      }
    }
  }
  goto LAB_5f395233;
joined_r0x5f394ca5:
  if (iVar9 != 0) goto LAB_5f394e39;
  if ((local_5c[1] & 0x10000) == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar17 = false;
  if (DStack_38 == 0) {
    iVar9 = acmStreamConvert(local_cc,local_5c,0x20);
    if (iVar9 != 0) {
      uVar12 = 0x8004e01e;
      goto LAB_5f394e40;
    }
    if ((local_5c[1] & 0x10000) == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar17 = DStack_38 == 0;
  }
  if (bVar17) goto LAB_5f394e40;
  uVar10 = uStack_48 / uStack_7c;
  BVar6 = WriteFile(pvStack_e0,pvStack_40,DStack_38,&uStack_b0,(LPOVERLAPPED)0x0);
  if (BVar6 == 0) {
    uVar12 = 0x8004e009;
    goto LAB_5f394e40;
  }
  bVar17 = CARRY4((uint)local_b8,uVar10);
  local_b8._0_4_ = (uint)local_b8 + uVar10;
  local_b8._4_4_ = local_b8._4_4_ + (uint)bVar17;
  bVar17 = CARRY4(local_c4,uStack_b0);
  local_c4 = local_c4 + uStack_b0;
  local_c0 = local_c0 + (uint)bVar17;
  bVar18 = CARRY4(uStack_dc,uStack_b0);
  uStack_dc = uStack_dc + uStack_b0;
  bVar17 = SCARRY4(iStack_d8,(uint)bVar18);
  iStack_d8 = iStack_d8 + (uint)bVar18;
  if ((-1 < iStack_d8) &&
     (((iStack_d8 != 0 && !bVar17 || (0x7ff0bdbe < uStack_dc)) && (param_5 == 0)))) {
    if (param_6 == 0) {
      uVar12 = 0x8004e03a;
      goto LAB_5f394e40;
    }
    if ((*puVar11 == 1) || (*puVar11 == 3)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    uVar12 = FUN_5f3942b0(param_2,&pvStack_e0,0,puVar11,iVar9,0,0,&local_94,&DStack_90);
    param_5 = 1;
  }
  if (DStack_38 == 0) goto LAB_5f394e40;
  uStack_4c = 0;
  uStack_48 = 0;
  iVar9 = acmStreamConvert(local_cc,local_5c,0x24);
  goto joined_r0x5f394ca5;
LAB_5f394e39:
  uVar12 = 0x8004e01e;
LAB_5f394e40:
  pcVar16 = GlobalHandle_exref;
  if (local_cc == 0) {
LAB_5f394e4c:
    pvVar5 = local_c8;
    pcVar16 = GlobalHandle_exref;
    pvVar8 = GlobalHandle(local_c8);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvVar5);
    GlobalFree(pvVar8);
    local_c8 = (LPVOID)0x0;
  }
  pvVar5 = pvStack_98;
  if (pvStack_98 != (LPVOID)0x0) {
    pvVar8 = (HGLOBAL)(*pcVar16)(pvStack_98);
    GlobalUnlock(pvVar8);
    pvVar8 = (HGLOBAL)(*pcVar16)(pvVar5);
    GlobalFree(pvVar8);
  }
  if ((int)uVar12 < 0) goto LAB_5f395233;
  if ((iStack_d8 < 0) || ((iStack_d8 < 1 && (uStack_dc < 0x7ff0bdbf)))) {
    if (param_5 != 0) goto LAB_5f394f26;
    uVar10 = local_c4 & 1;
    if (uVar10 != 0) {
      puVar13 = &uStack_bc;
      uVar12 = 1;
      uStack_bc = 0;
      goto LAB_5f394fa3;
    }
  }
  else {
    if (param_5 == 0) {
      if (param_6 == 0) {
LAB_5f394c34:
        uVar12 = 0x8004e03a;
        goto LAB_5f395233;
      }
      if ((*puVar11 == 1) || (*puVar11 == 3)) {
        iVar9 = 0;
      }
      else {
        iVar9 = 1;
      }
      FUN_5f3942b0(param_2,&pvStack_e0,0,puVar11,iVar9,0,0,&local_94,&DStack_90);
      param_5 = 1;
    }
LAB_5f394f26:
    uStack_dc = 0;
    iStack_d8 = 0;
    uVar10 = 0;
    if ((local_c4 & 7) != 0) {
      uVar10 = 8 - (local_c4 & 7);
      puVar13 = &uStack_dc;
      uVar12 = uVar10;
LAB_5f394fa3:
      BVar6 = WriteFile(pvStack_e0,puVar13,uVar12,&uStack_9c,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
LAB_5f394fad:
        uVar12 = 0x8004e009;
        goto LAB_5f395233;
      }
    }
  }
  SetFilePointer(pvStack_e0,0,(PLONG)0x0,0);
  uVar1 = *puVar11;
  if (param_5 == 0) {
    if ((uVar1 == 3) || (uVar1 == 1)) {
      iVar9 = 0x10;
    }
    else {
      iVar9 = puVar11[8] + 0x12;
    }
    iVar7 = iVar9 + 0x14;
    if ((*puVar11 != 1) && (*puVar11 != 3)) {
      iVar7 = iVar9 + 0x20;
    }
    uStack_bc = iVar7 + local_c4 + local_74 + uVar10;
    uVar12 = FUN_5f3a5960(pvStack_e0,(-(uint)(param_7 != 0) & 0xdaeb04fc) + 0x45564157,uStack_bc);
  }
  else {
    if ((uVar1 == 3) || (uVar1 == 1)) {
      iVar9 = 0x10;
    }
    else {
      iVar9 = puVar11[8] + 0x12;
    }
    uStack_bc = iVar9 + 0x40;
    if ((*puVar11 != 1) && (*puVar11 != 3)) {
      uStack_bc = iVar9 + 0x5c;
    }
    uVar12 = FUN_5f3aa690(pvStack_e0);
  }
  if (-1 < (int)uVar12) {
    SetFilePointer(pvStack_e0,DStack_90,(PLONG)0x0,0);
    if (param_5 == 0) {
      uVar12 = FUN_5f3a5850(pvStack_e0);
    }
    else {
      uVar12 = FUN_5f3aa2b0(pvStack_e0);
    }
    puVar11 = puStack_d4;
    if (-1 < (int)uVar12) {
      local_a8 = *(uint *)(local_d0 + 2);
      local_a4 = 0;
      local_b8 = ftol();
      if ((*puVar11 != 1) && (*puVar11 != 3)) {
        SetFilePointer(pvStack_e0,local_94,(PLONG)0x0,0);
        if (param_5 == 0) {
          uStack_7c = (uint)local_b8;
          uVar12 = FUN_5f3a58a0(pvStack_e0,0x74636166,&uStack_7c,4,(int *)0x0);
        }
        else {
          uVar12 = FUN_5f3aa320(pvStack_e0);
        }
      }
    }
  }
LAB_5f395233:
  pMem = local_c8;
  if (local_cc != 0) {
    FUN_5f3940a0(local_cc,(int)local_5c);
    pMem = (LPCVOID)0x0;
  }
  if (local_ac != (int *)0x0) {
    (**(code **)(*local_ac + 8))(local_ac);
  }
  if (pMem != (LPCVOID)0x0) {
    pvVar8 = GlobalHandle(pMem);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pMem);
    GlobalFree(pvVar8);
  }
  puVar11 = local_d0;
  if (local_d0 != (ushort *)0x0) {
    pvVar8 = GlobalHandle(local_d0);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(puVar11);
    GlobalFree(pvVar8);
  }
  if (pvStack_e0 != (HANDLE)0xffffffff) {
    CloseHandle(pvStack_e0);
  }
  if (local_68 == 0x4e00c) {
    uVar12 = 0x4e00c;
  }
  else if ((int)uVar12 < 0) {
    return uVar12;
  }
  if ((param_5 != 0) && (local_64 == 0)) {
    uVar12 = 0x4e00a;
  }
  return uVar12;
}


