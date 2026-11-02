/* Module: stl2plg.dll
   Function: FUN_00404790
   Address: 00404790
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00404790(void *this,undefined4 param_1,int param_2)

{
  ushort *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  HGLOBAL pvVar9;
  undefined2 *puVar10;
  BOOL BVar11;
  undefined1 uVar16;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  int iVar17;
  int iVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint local_1b4;
  LPCVOID pvStack_1a8;
  void *pvStack_1a0;
  void *local_19c;
  undefined2 *puStack_198;
  undefined4 local_194;
  undefined2 *puStack_190;
  uint uStack_18c;
  int iStack_188;
  int local_184;
  undefined4 local_180;
  int iStack_17c;
  
  iVar19 = *(int *)((int)this + 0x3ce);
  iVar17 = *(int *)((int)this + 0x3ca);
  local_194 = 0;
  local_19c = this;
  local_184 = iVar19;
  FUN_004025b0(&local_180);
  iVar7 = (**(code **)(*(int *)this + 0x68))(&local_180);
  if (iVar7 < 0) {
    FUN_00402640(&local_184);
    return iVar7;
  }
  uVar8 = (uint)*(ushort *)(iStack_17c + 0xe) * *(int *)(iStack_17c + 4) + 0x1f;
  uVar8 = (int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3;
  SetFilePointer(*(HANDLE *)((int)this + 0x3b8),*(LONG *)((int)this + 0x3ec),(PLONG)0x0,0);
  uVar5 = FUN_00405070(*(HANDLE *)((int)this + 0x3b8));
  uStack_18c = (uint)uVar5;
  if (uStack_18c != 0) {
    uVar21 = 0;
    pvVar9 = GlobalAlloc(0x40,(uint)*(ushort *)((int)this + 0x3c8) * iVar17 * 2);
    puVar10 = GlobalLock(pvVar9);
    puStack_198 = puVar10;
    BVar11 = ReadFile(*(HANDLE *)((int)this + 0x3b8),puVar10,
                      (uint)*(ushort *)((int)this + 0x3c8) * iVar17 * 2,(LPDWORD)&local_19c,
                      (LPOVERLAPPED)0x0);
    if (BVar11 == 0) {
      FUN_00402640(&local_184);
      if (puVar10 == (undefined2 *)0x0) {
        return -0x7fffbffb;
      }
      pvVar9 = GlobalHandle(puVar10);
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(puVar10);
      GlobalFree(pvVar9);
      return -0x7fffbffb;
    }
    uStack_1c0 = 0;
    if ((uint)*(ushort *)((int)this + 0x3c8) * iVar17 != 0) {
      do {
        uVar16 = (undefined1)((ushort)*puVar10 >> 8);
        uVar4 = (undefined1)*puVar10;
        *puVar10 = CONCAT11(uVar4,uVar16);
        uVar12 = (uint)CONCAT11(uVar4,uVar16);
        if (uVar21 < uVar12) {
          uVar21 = uVar12;
        }
        uStack_1c0 = uStack_1c0 + 1;
        puVar10 = puVar10 + 1;
      } while (uStack_1c0 < (uint)*(ushort *)((int)this + 0x3c8) * iVar17);
    }
    pvVar9 = GlobalAlloc(0x40,uVar21 * 2);
    pvStack_1a8 = GlobalLock(pvVar9);
  }
  pvVar9 = GlobalAlloc(0x40,iVar19 * 2);
  puVar10 = GlobalLock(pvVar9);
  puStack_190 = puVar10;
  if (*(uint *)((int)this + 0x3f4) < 3) {
    uStack_1c0 = 0;
    if (*(uint *)((int)this + 0x3f4) != 0) {
      uStack_1bc = 0;
      do {
        local_1b4 = 0;
        uVar21 = uStack_1b8;
        if (uStack_1b8 != 0) {
          do {
            if (uStack_18c == 0) {
              BVar11 = ReadFile(*(HANDLE *)((int)this + 0x3b8),puVar10,iVar19 * 2,
                                (LPDWORD)&local_19c,(LPOVERLAPPED)0x0);
              if (BVar11 == 0) {
                FUN_00402640(&local_184);
                puVar14 = puStack_198;
                pcVar3 = GlobalHandle_exref;
                pcVar2 = GlobalUnlock_exref;
                puVar13 = puVar10;
                pcVar20 = GlobalFree_exref;
                if (puStack_198 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puStack_198);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar14);
                  pcVar20 = GlobalFree_exref;
                  GlobalFree(pvVar9);
                }
                goto joined_r0x00404ef9;
              }
            }
            else {
              puVar1 = puStack_198 + uStack_1bc + local_1b4;
              BVar11 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvStack_1a8,
                                (uint)(ushort)puStack_198[uStack_1bc + local_1b4],
                                (LPDWORD)&local_19c,(LPOVERLAPPED)0x0);
              if (BVar11 == 0) {
                FUN_00402640(&local_184);
                puVar13 = puStack_198;
                pcVar20 = GlobalFree_exref;
                if (puStack_198 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puStack_198);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar13);
                  pcVar20 = GlobalFree_exref;
                  GlobalFree(pvVar9);
                }
                if (puVar10 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puVar10);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar10);
                  (*pcVar20)(pvVar9);
                }
                if (pvStack_1a8 != (LPCVOID)0x0) {
                  pvVar9 = GlobalHandle(pvStack_1a8);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(pvStack_1a8);
                  (*pcVar20)(pvVar9);
                }
                return -0x7fffbffb;
              }
              FUN_00403e30((int)pvStack_1a8,(uint)*puVar1,(int)puVar10);
            }
            puVar13 = puVar10;
            iVar17 = iVar19;
            if (iVar19 != 0) {
              do {
                iVar17 = iVar17 + -1;
                *puVar13 = CONCAT11((char)*puVar13,(char)((ushort)*puVar13 >> 8));
                puVar13 = puVar13 + 1;
              } while (iVar17 != 0);
              puVar13 = (undefined2 *)(param_2 + (uVar8 >> 1) * (uVar21 - 1) * 2);
              puVar14 = puVar10;
              iVar17 = iVar19;
              do {
                uVar6 = *puVar14;
                puVar14 = puVar14 + 1;
                *puVar13 = uVar6;
                puVar13 = puVar13 + 1;
                iVar17 = iVar17 + -1;
                this = pvStack_1a0;
              } while (iVar17 != 0);
            }
            local_1b4 = local_1b4 + 1;
            uVar21 = uVar21 - 1;
          } while (local_1b4 < uStack_1b8);
        }
        uStack_1bc = uStack_1bc + uStack_1b8;
        uStack_1c0 = uStack_1c0 + 1;
      } while (uStack_1c0 < *(uint *)((int)this + 0x3f4));
    }
  }
  else {
    if (uStack_1b8 != 0) {
      uStack_1bc = uStack_1b8;
      uVar21 = uStack_1b8;
      do {
        uVar21 = uVar21 - 1;
        if (iVar19 != 0) {
          puVar13 = (undefined2 *)(param_2 + 6 + (uVar8 >> 1) * uVar21 * 2);
          iVar17 = iVar19;
          do {
            *puVar13 = 0xffff;
            puVar13 = puVar13 + 4;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        uStack_1bc = uStack_1bc - 1;
      } while (uStack_1bc != 0);
    }
    uStack_1c0 = 0;
    if (*(int *)((int)this + 0x3f4) != 0) {
      do {
        local_1b4 = 0;
        puVar13 = puVar10;
        uVar21 = uStack_1b8;
        if (uStack_1b8 != 0) {
          do {
            uVar21 = uVar21 - 1;
            puVar10 = puVar13;
            iVar17 = iVar19;
            if (uStack_18c == 0) {
              BVar11 = ReadFile(*(HANDLE *)((int)this + 0x3b8),puVar13,iVar19 * 2,
                                (LPDWORD)&local_19c,(LPOVERLAPPED)0x0);
              if (BVar11 == 0) {
                FUN_00402640(&local_184);
                puVar10 = puStack_198;
                pcVar3 = GlobalHandle_exref;
                pcVar2 = GlobalUnlock_exref;
                pcVar20 = GlobalFree_exref;
                if (puStack_198 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puStack_198);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar10);
                  pcVar20 = GlobalFree_exref;
                  GlobalFree(pvVar9);
                }
joined_r0x00404ef9:
                if (puVar13 != (undefined2 *)0x0) {
                  uVar15 = (*pcVar3)(puVar13);
                  (*pcVar2)(uVar15);
                  uVar15 = (*pcVar3)(puVar13);
                  (*pcVar20)(uVar15);
                }
                if (pvStack_1a8 == (LPCVOID)0x0) {
                  return -0x7fffbffb;
                }
                uVar15 = (*pcVar3)(pvStack_1a8);
                (*pcVar2)(uVar15);
                uVar15 = (*pcVar3)(pvStack_1a8);
                (*pcVar20)(uVar15);
                return -0x7fffbffb;
              }
            }
            else {
              puVar1 = puStack_198 + uStack_1c0 * uStack_1b8 + local_1b4;
              BVar11 = ReadFile(*(HANDLE *)((int)this + 0x3b8),pvStack_1a8,(uint)*puVar1,
                                (LPDWORD)&local_19c,(LPOVERLAPPED)0x0);
              if (BVar11 == 0) {
                FUN_00402640(&local_184);
                puVar10 = puStack_198;
                pcVar20 = GlobalFree_exref;
                if (puStack_198 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puStack_198);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar10);
                  pcVar20 = GlobalFree_exref;
                  GlobalFree(pvVar9);
                }
                if (puVar13 != (undefined2 *)0x0) {
                  pvVar9 = GlobalHandle(puVar13);
                  GlobalUnlock(pvVar9);
                  pvVar9 = GlobalHandle(puVar13);
                  (*pcVar20)(pvVar9);
                }
                if (pvStack_1a8 == (LPCVOID)0x0) {
                  return -0x7fffbffb;
                }
                pvVar9 = GlobalHandle(pvStack_1a8);
                GlobalUnlock(pvVar9);
                pvVar9 = GlobalHandle(pvStack_1a8);
                (*pcVar20)(pvVar9);
                return -0x7fffbffb;
              }
              FUN_00403e30((int)pvStack_1a8,(uint)*puVar1,(int)puVar13);
            }
            for (; iVar17 != 0; iVar17 = iVar17 + -1) {
              *puVar10 = CONCAT11((char)*puVar10,(char)((ushort)*puVar10 >> 8));
              puVar10 = puVar10 + 1;
              this = pvStack_1a0;
            }
            puVar10 = puVar13;
            if (*(short *)((int)this + 0x3d4) == 4) {
              switch(uStack_1c0) {
              case 0:
              case 1:
              case 2:
                if (iVar19 != 0) {
                  iVar7 = (uVar8 >> 1) * uVar21 * 2;
                  iVar17 = iVar19;
                  do {
                    iVar18 = iVar7 + uStack_1c0 * -2;
                    iVar7 = iVar7 + 8;
                    iVar17 = iVar17 + -1;
                    *(undefined2 *)(iVar18 + 4 + param_2) = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar10 = puStack_190;
                  } while (iVar17 != 0);
                }
                break;
              case 3:
                if (iVar19 != 0) {
                  puVar13 = (undefined2 *)(param_2 + 2 + (uVar8 >> 1) * uVar21 * 2);
                  uStack_1bc = iVar19;
                  do {
                    uVar6 = ftol();
                    puVar13[-1] = uVar6;
                    uVar6 = ftol();
                    *puVar13 = uVar6;
                    uVar6 = ftol();
                    puVar13[1] = uVar6;
                    puVar13 = puVar13 + 4;
                    uStack_1bc = uStack_1bc + -1;
                  } while (uStack_1bc != 0);
                }
                break;
              case 4:
                if (iVar19 != 0) {
                  puVar14 = (undefined2 *)(param_2 + 6 + (uVar8 >> 1) * uVar21 * 2);
                  iVar17 = iVar19;
                  do {
                    uVar6 = *puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar14 = uVar6;
                    puVar14 = puVar14 + 4;
                    iVar17 = iVar17 + -1;
                  } while (iVar17 != 0);
                }
              }
            }
            else {
              uVar12 = uStack_1c0;
              if (uStack_1c0 == 3) {
                uVar12 = 0xffffffff;
              }
              if (iVar19 != 0) {
                iVar7 = (uVar8 >> 1) * uVar21 * 2;
                iVar17 = iVar19;
                do {
                  uVar6 = *puVar13;
                  iVar19 = iVar7 + uVar12 * -2;
                  puVar13 = puVar13 + 1;
                  iVar7 = iVar7 + 8;
                  iVar17 = iVar17 + -1;
                  *(undefined2 *)(iVar19 + 4 + param_2) = uVar6;
                  puVar10 = puStack_190;
                  iVar19 = iStack_188;
                } while (iVar17 != 0);
              }
            }
            local_1b4 = local_1b4 + 1;
            puVar13 = puVar10;
            this = pvStack_1a0;
          } while (local_1b4 < uStack_1b8);
        }
        uStack_1c0 = uStack_1c0 + 1;
      } while (uStack_1c0 < *(uint *)((int)this + 0x3f4));
    }
  }
  FUN_00402640(&local_184);
  puVar13 = puStack_198;
  pcVar20 = GlobalFree_exref;
  if (puStack_198 != (undefined2 *)0x0) {
    pvVar9 = GlobalHandle(puStack_198);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(puVar13);
    pcVar20 = GlobalFree_exref;
    GlobalFree(pvVar9);
  }
  if (puVar10 != (undefined2 *)0x0) {
    pvVar9 = GlobalHandle(puVar10);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(puVar10);
    (*pcVar20)(pvVar9);
  }
  if (pvStack_1a8 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(pvStack_1a8);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(pvStack_1a8);
    (*pcVar20)(pvVar9);
  }
  return 0;
}


