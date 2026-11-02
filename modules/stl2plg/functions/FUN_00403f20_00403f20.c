/* Module: stl2plg.dll
   Function: FUN_00403f20
   Address: 00403f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00403f20(void *this,undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  uint dwBytes;
  LPCVOID pvVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  HGLOBAL pvVar7;
  BOOL BVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  LPCVOID pvVar12;
  LPVOID pvVar13;
  LPCVOID unaff_EBX;
  uint uVar14;
  code *pcVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  int iVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 *local_1c0;
  LPCVOID pvStack_1bc;
  int local_1b8;
  LPVOID local_1b4;
  LPCVOID pvStack_1b0;
  uint uStack_1ac;
  LPVOID pvStack_1a8;
  uint local_1a4;
  LPVOID pvStack_1a0;
  undefined4 local_19c;
  DWORD DStack_198;
  int iStack_194;
  int iStack_190;
  uint uStack_18c;
  void *pvStack_188;
  void *local_184;
  undefined4 local_180;
  int iStack_17c;
  
  uVar14 = *(uint *)((int)this + 0x3ca);
  dwBytes = *(uint *)((int)this + 0x3ce);
  local_19c = 0;
  local_1b8 = 0;
  local_1b4 = (LPVOID)0x0;
  local_1a4 = uVar14;
  local_184 = this;
  FUN_004025b0(&local_180);
  iVar5 = (**(code **)(*(int *)this + 0x68))(&local_180);
  if (iVar5 < 0) {
    FUN_00402640(&local_184);
    FUN_004054f0(&pvStack_1bc);
    FUN_004054b0((undefined4 *)&stack0xfffffe38);
    return iVar5;
  }
  uVar6 = (uint)*(ushort *)(iStack_17c + 0xe) * *(int *)(iStack_17c + 4) + 0x1f;
  iVar5 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  iStack_194 = iVar5;
  SetFilePointer(*(HANDLE *)((int)this + 0x3b8),*(LONG *)((int)this + 0x3ec),(PLONG)0x0,0);
  uVar4 = FUN_00405070(*(HANDLE *)((int)this + 0x3b8));
  uStack_18c = (uint)uVar4;
  if (uStack_18c != 0) {
    local_1c0 = (undefined1 *)0x0;
    pvVar7 = GlobalAlloc(0x40,*(ushort *)((int)this + 0x3c8) * uVar14 * 2);
    local_1b4 = GlobalLock(pvVar7);
    uVar4 = *(ushort *)((int)this + 0x3c8);
    if (pvStack_1bc != (LPCVOID)0x0) {
      pvStack_1b0 = pvStack_1bc;
      pvVar7 = GlobalHandle(pvStack_1bc);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pvStack_1b0);
      GlobalFree(pvVar7);
    }
    pvStack_1bc = local_1b4;
    local_1b8 = uVar4 * uVar14;
    BVar8 = ReadFile(*(HANDLE *)((int)this + 0x3b8),local_1b4,
                     *(ushort *)((int)this + 0x3c8) * uVar14 * 2,&DStack_198,(LPOVERLAPPED)0x0);
    if (BVar8 == 0) {
      FUN_00402640(&local_184);
      pvVar2 = pvStack_1bc;
      if (pvStack_1bc != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(pvStack_1bc);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(pvVar2);
        GlobalFree(pvVar7);
        pvStack_1bc = (LPCVOID)0x0;
      }
      local_1b8 = 0;
      if (unaff_EBX == (LPCVOID)0x0) {
        return -0x7fffbffb;
      }
      pvVar7 = GlobalHandle(unaff_EBX);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(unaff_EBX);
      GlobalFree(pvVar7);
      return -0x7fffbffb;
    }
    uVar6 = 0;
    if (*(ushort *)((int)this + 0x3c8) * uVar14 != 0) {
      do {
        uVar1 = *(undefined2 *)((int)pvStack_1bc + uVar6 * 2);
        *(ushort *)((int)pvStack_1bc + uVar6 * 2) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8))
        ;
        uVar9 = (uint)*(ushort *)((int)pvStack_1bc + uVar6 * 2);
        if (local_1c0 < uVar9) {
          local_1c0 = (undefined1 *)uVar9;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((int)this + 0x3c8) * uVar14);
    }
    pvVar7 = GlobalAlloc(0x40,(SIZE_T)local_1c0);
    pvStack_1a0 = GlobalLock(pvVar7);
    iVar5 = iStack_194;
  }
  pvVar7 = GlobalAlloc(0x40,dwBytes);
  pvStack_1b0 = GlobalLock(pvVar7);
  if (unaff_EBX != (LPCVOID)0x0) {
    pvVar7 = GlobalHandle(unaff_EBX);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(unaff_EBX);
    GlobalFree(pvVar7);
  }
  pvVar2 = pvStack_1b0;
  if (*(uint *)((int)this + 0x3f4) < 3) {
    uStack_1ac = 0;
    if (*(uint *)((int)this + 0x3f4) != 0) {
      local_1c0 = (undefined1 *)0x0;
      do {
        local_1b4 = (LPVOID)0x0;
        if (pvStack_1a8 != (LPVOID)0x0) {
          iStack_190 = -iStack_194;
          iVar5 = ((int)pvStack_1a8 + -1) * iStack_194 + param_2;
          do {
            if (uStack_18c == 0) {
              BVar8 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvVar2,dwBytes,&DStack_198,
                               (LPOVERLAPPED)0x0);
              if (BVar8 == 0) {
                FUN_00402640(&local_184);
                pvVar12 = pvStack_1bc;
                pcVar19 = GlobalHandle_exref;
                pcVar15 = GlobalFree_exref;
                pcVar20 = GlobalUnlock_exref;
                if (pvStack_1bc != (LPCVOID)0x0) {
                  pvVar7 = GlobalHandle(pvStack_1bc);
                  pcVar20 = GlobalUnlock_exref;
                  GlobalUnlock(pvVar7);
                  pvVar7 = GlobalHandle(pvVar12);
                  pcVar15 = GlobalFree_exref;
                  GlobalFree(pvVar7);
                }
                goto joined_r0x004046d1;
              }
            }
            else {
              iVar18 = ((int)local_1c0 + (int)local_1b4) * 2;
              BVar8 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvStack_1a0,
                               (uint)*(ushort *)(iVar18 + (int)pvStack_1bc),&DStack_198,
                               (LPOVERLAPPED)0x0);
              if (BVar8 == 0) goto LAB_00404473;
              FUN_00403e30((int)pvStack_1a0,(uint)*(ushort *)(iVar18 + (int)pvStack_1bc),(int)pvVar2
                          );
            }
            uVar14 = 0;
            if (dwBytes != 0) {
              do {
                uVar6 = uVar14 + 1;
                *(undefined1 *)(iVar5 + -1 + uVar6) = *(undefined1 *)(uVar14 + (int)pvVar2);
                uVar14 = uVar6;
              } while (uVar6 < dwBytes);
            }
            local_1b4 = (LPVOID)((int)local_1b4 + 1);
            iVar5 = iVar5 + iStack_190;
          } while (local_1b4 < pvStack_1a8);
        }
        local_1c0 = (undefined1 *)((int)local_1c0 + (int)pvStack_1a8);
        uStack_1ac = uStack_1ac + 1;
      } while (uStack_1ac < *(uint *)((int)this + 0x3f4));
    }
  }
  else {
    if (uVar14 != 0) {
      puVar10 = (undefined1 *)((uVar14 - 1) * iVar5 + 3 + param_2);
      uVar6 = dwBytes;
      puVar16 = puVar10;
      do {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = 0xff;
          puVar10 = puVar10 + 4;
        }
        puVar10 = puVar16 + -iVar5;
        uVar14 = uVar14 - 1;
        uVar6 = dwBytes;
        puVar16 = puVar10;
      } while (uVar14 != 0);
    }
    uStack_1ac = 0;
    if (*(int *)((int)this + 0x3f4) != 0) {
      do {
        local_1b4 = (LPVOID)0x0;
        if (pvStack_1a8 != (LPVOID)0x0) {
          iStack_190 = -iStack_194;
          pvStack_1b0 = (LPCVOID)(((int)pvStack_1a8 + -1) * iStack_194);
          local_1c0 = (undefined1 *)((int)pvStack_1b0 + param_2 + 3);
          do {
            uVar14 = uStack_1ac;
            if (uStack_18c == 0) {
              BVar8 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvVar2,dwBytes,&DStack_198,
                               (LPOVERLAPPED)0x0);
              uVar14 = uStack_1ac;
              if (BVar8 == 0) {
                FUN_00402640(&local_184);
                pvVar12 = pvStack_1bc;
                pcVar19 = GlobalHandle_exref;
                pcVar15 = GlobalFree_exref;
                pcVar20 = GlobalUnlock_exref;
                if (pvStack_1bc != (LPCVOID)0x0) {
                  pvVar7 = GlobalHandle(pvStack_1bc);
                  pcVar20 = GlobalUnlock_exref;
                  GlobalUnlock(pvVar7);
                  pvVar7 = GlobalHandle(pvVar12);
                  pcVar15 = GlobalFree_exref;
                  GlobalFree(pvVar7);
                }
joined_r0x004046d1:
                pvStack_1bc = (LPCVOID)0x0;
                local_1b8 = 0;
                if (pvVar2 != (LPVOID)0x0) {
                  local_1b8 = 0;
                  uVar11 = (*pcVar19)(pvVar2);
                  (*pcVar20)(uVar11);
                  uVar11 = (*pcVar19)(pvVar2);
                  (*pcVar15)(uVar11);
                }
                goto LAB_004046f1;
              }
            }
            else {
              iVar5 = (int)(uStack_1ac * (int)pvStack_1a8 + (int)local_1b4) * 2;
              BVar8 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvStack_1a0,
                               (uint)*(ushort *)(iVar5 + (int)pvStack_1bc),&DStack_198,
                               (LPOVERLAPPED)0x0);
              if (BVar8 == 0) {
LAB_00404473:
                FUN_00402640(&local_184);
                pvVar12 = pvStack_1bc;
                pcVar19 = GlobalHandle_exref;
                pcVar15 = GlobalFree_exref;
                pcVar20 = GlobalUnlock_exref;
                if (pvStack_1bc != (LPCVOID)0x0) {
                  pvVar7 = GlobalHandle(pvStack_1bc);
                  pcVar20 = GlobalUnlock_exref;
                  GlobalUnlock(pvVar7);
                  pvVar7 = GlobalHandle(pvVar12);
                  pcVar15 = GlobalFree_exref;
                  GlobalFree(pvVar7);
                  pvStack_1bc = (LPCVOID)0x0;
                }
                local_1b8 = 0;
                if (pvVar2 != (LPVOID)0x0) {
                  pvVar7 = GlobalHandle(pvVar2);
                  (*pcVar20)(pvVar7);
                  pvVar7 = GlobalHandle(pvVar2);
                  (*pcVar15)(pvVar7);
                }
LAB_004046f1:
                pvVar13 = pvStack_1a0;
                if (pvStack_1a0 != (LPVOID)0x0) {
                  uVar11 = (*pcVar19)(pvStack_1a0);
                  (*pcVar20)(uVar11);
                  uVar11 = (*pcVar19)(pvVar13);
                  (*pcVar15)(uVar11);
                }
                return -0x7fffbffb;
              }
              FUN_00403e30((int)pvStack_1a0,(uint)*(ushort *)(iVar5 + (int)pvStack_1bc),(int)pvVar2)
              ;
            }
            if (*(short *)((int)this + 0x3d4) == 4) {
              switch(uVar14) {
              case 0:
              case 1:
              case 2:
                uVar6 = 0;
                pvVar12 = pvStack_1b0;
                if (dwBytes != 0) {
                  do {
                    puVar10 = (undefined1 *)(uVar6 + (int)pvVar2);
                    uVar6 = uVar6 + 1;
                    *(undefined1 *)((int)pvVar12 + param_2 + (2 - uVar14)) = *puVar10;
                    pvVar12 = (LPVOID)((int)pvVar12 + 4);
                    uVar14 = uStack_1ac;
                  } while (uVar6 < dwBytes);
                }
                break;
              case 3:
                uVar14 = 0;
                if (dwBytes != 0) {
                  pbVar17 = local_1c0 + -2;
                  do {
                    local_1a4 = (uint)pbVar17[-1];
                    bVar3 = ftol();
                    pbVar17[-1] = bVar3;
                    local_1a4 = (uint)*pbVar17;
                    bVar3 = ftol();
                    *pbVar17 = bVar3;
                    local_1a4 = (uint)pbVar17[1];
                    bVar3 = ftol();
                    pbVar17[1] = bVar3;
                    uVar14 = uVar14 + 1;
                    pbVar17 = pbVar17 + 4;
                  } while (uVar14 < dwBytes);
                }
                break;
              case 4:
                uVar14 = 0;
                puVar10 = local_1c0;
                if (dwBytes != 0) {
                  do {
                    uVar6 = uVar14 + 1;
                    *puVar10 = *(undefined1 *)(uVar14 + (int)pvVar2);
                    uVar14 = uVar6;
                    puVar10 = puVar10 + 4;
                  } while (uVar6 < dwBytes);
                }
              }
            }
            else {
              if (uVar14 == 3) {
                uVar14 = 0xffffffff;
              }
              uVar6 = 0;
              pvVar13 = pvStack_1b0;
              if (dwBytes != 0) {
                do {
                  puVar10 = (undefined1 *)(uVar6 + (int)pvVar2);
                  uVar6 = uVar6 + 1;
                  *(undefined1 *)((int)pvVar13 + param_2 + (2 - uVar14)) = *puVar10;
                  pvVar13 = (LPVOID)((int)pvVar13 + 4);
                  this = pvStack_188;
                } while (uVar6 < dwBytes);
              }
            }
            pvStack_1b0 = (LPCVOID)((int)pvStack_1b0 + iStack_190);
            local_1c0 = local_1c0 + iStack_190;
            local_1b4 = (LPVOID)((int)local_1b4 + 1);
          } while (local_1b4 < pvStack_1a8);
        }
        uStack_1ac = uStack_1ac + 1;
      } while (uStack_1ac < *(uint *)((int)this + 0x3f4));
    }
  }
  FUN_00402640(&local_184);
  pvVar12 = pvStack_1bc;
  pcVar15 = GlobalFree_exref;
  pcVar20 = GlobalUnlock_exref;
  if (pvStack_1bc != (LPCVOID)0x0) {
    pvVar7 = GlobalHandle(pvStack_1bc);
    pcVar20 = GlobalUnlock_exref;
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(pvVar12);
    pcVar15 = GlobalFree_exref;
    GlobalFree(pvVar7);
    pvStack_1bc = (LPCVOID)0x0;
  }
  local_1b8 = 0;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar7 = GlobalHandle(pvVar2);
    (*pcVar20)(pvVar7);
    pvVar7 = GlobalHandle(pvVar2);
    (*pcVar15)(pvVar7);
  }
  pvVar13 = pvStack_1a0;
  if (pvStack_1a0 != (LPCVOID)0x0) {
    pvVar7 = GlobalHandle(pvStack_1a0);
    (*pcVar20)(pvVar7);
    pvVar7 = GlobalHandle(pvVar13);
    (*pcVar15)(pvVar7);
  }
  return 0;
}


