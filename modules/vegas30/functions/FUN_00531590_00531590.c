/* Module: vegas30.exe
   Function: FUN_00531590
   Address: 00531590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00531590(int param_1,int param_2)

{
  byte bVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  uchar *puVar5;
  LPCSTR pCVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  LPCSTR lpString2;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uchar *puVar15;
  undefined4 uVar16;
  int *local_34c;
  char *local_348;
  int local_344;
  int local_340;
  undefined4 local_33c;
  undefined4 local_338;
  int local_334;
  double local_330;
  int local_324;
  int local_320;
  int *local_31c;
  int local_318;
  CHAR local_314 [260];
  uchar local_210 [260];
  uchar local_10c [264];
  
  iVar11 = *(int *)(param_1 + 0x30);
  iVar12 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    InterlockedIncrement(&DAT_0065e144);
    iVar12 = 0x4e001;
    if ((*(char *)(iVar11 + 0x1e4) != '\0') && (0 < *(int *)(iVar11 + 0x1e8))) {
      iVar12 = -0x7ff8fff2;
      if (*(char *)(iVar11 + 0x1e4) == '\0') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar11 + 0x1e8);
      }
      pvVar2 = GlobalAlloc(0x42,iVar9 * 0x108);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(param_1 + 0x13c) = pvVar3;
      if (pvVar3 != (LPVOID)0x0) {
        local_324 = 0;
        iVar12 = 0x4e001;
        local_34c = (int *)0x0;
        if ((*(char *)(iVar11 + 0x1e4) != '\0') &&
           (local_324 = *(int *)(iVar11 + 0x1ec), (*(byte *)(local_324 + 0x18) & 2) != 2)) {
          bVar1 = *(byte *)(*(int *)(local_324 + 0x10) + 0x18);
          iVar9 = *(int *)(local_324 + 0x10);
          while ((bVar1 & 2) != 2) {
            bVar1 = *(byte *)(*(int *)(iVar9 + 0x10) + 0x18);
            local_324 = iVar9;
            iVar9 = *(int *)(iVar9 + 0x10);
          }
        }
        local_348 = (char *)0x0;
        while( true ) {
          if (*(char *)(iVar11 + 0x1e4) == '\0') {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar11 + 0x1f0);
          }
          if (local_324 == iVar9) break;
          if ((*(uint *)(*(int *)(local_324 + 4) + 0x134) & 0x400) == 0) {
            *(int *)(local_348 + *(int *)(param_1 + 0x13c)) = *(int *)(local_324 + 4);
            local_34c = (int *)((int)local_34c + 1);
            local_348 = local_348 + 0x108;
          }
          FUN_00436e20();
        }
        *(int **)(param_1 + 0x138) = local_34c;
        if (0 < (int)local_34c) {
          if (0 < (int)local_34c) {
            local_348 = (char *)local_34c;
            piVar13 = local_34c;
            piVar10 = *(int **)(param_1 + 0x13c);
            do {
              local_34c = piVar10;
              piVar10 = *(int **)(*local_34c + 0x130);
              if ((piVar10 != (int *)0x0) && (iVar11 = *piVar10, 0 < iVar11)) {
                piVar10 = (int *)piVar10[2];
                do {
                  iVar9 = *piVar10;
                  if ((*(int *)(iVar9 + 4) == 2) && (*(int *)(iVar9 + 0x60) != 0)) {
                    piVar13 = (int *)((int)piVar13 + 1);
                  }
                  if ((*(byte *)(iVar9 + 0x8c) & 4) != 0) {
                    piVar13 = (int *)((int)piVar13 + 1);
                  }
                  piVar10 = piVar10 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              piVar10 = local_34c + 0x42;
              local_348 = local_348 + -1;
              local_34c = piVar13;
            } while (local_348 != (char *)0x0);
          }
          local_318 = 0;
          local_344 = 0;
          local_330 = _DAT_00610808 / (double)(int)local_34c;
          if (0 < *(int *)(param_1 + 0x138)) {
            local_34c = (int *)0x0;
            do {
              local_318 = local_318 + 1;
              *(int *)(param_1 + 0x140) = local_318;
              local_340 = *(int *)((int)local_34c + *(int *)(param_1 + 0x13c));
              if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
                return -0x7ffb1ff4;
              }
              local_348 = (char *)(local_340 + 0x170);
              _SfGetPathNameFromFilePath_12(local_348,local_314,0x104);
              puVar5 = (uchar *)(param_1 + 0x34);
              iVar11 = lstrcmpiA(local_314,(LPCSTR)puVar5);
              if (iVar11 == 0) {
                *(undefined4 *)((int)local_34c + *(int *)(param_1 + 0x13c)) = 0;
              }
              else {
                _mbscpy(local_10c,puVar5);
                puVar15 = local_10c;
                iVar11 = 0;
                uVar16 = 0x104;
                uVar14 = 0;
                uVar4 = _SfGetFileNamePtrA_4(local_348);
                FUN_00531d80(puVar5,uVar4,uVar14,puVar15,uVar16);
                local_33c = ftol();
                local_338 = ftol();
                local_334 = param_1;
                local_344 = local_344 + 1;
                while (iVar12 = FUN_0043d120(local_348,local_10c,1,&local_33c),
                      iVar12 == -0x7ffb1fce) {
                  puVar15 = local_10c;
                  iVar11 = iVar11 + 1;
                  uVar14 = 0x104;
                  iVar12 = iVar11;
                  uVar4 = _SfGetFileNamePtrA_4(local_348);
                  FUN_00531d80(puVar5,uVar4,iVar12,puVar15,uVar14);
                }
                if (iVar12 < 0) {
                  return iVar12;
                }
                if (iVar11 != 0) {
                  SfErrorHandler_DetailsAddString
                            (0x4e00b,
                             "Media file %s was renamed to %s to avoid destroying existing file.",
                             local_348,local_10c);
                }
                local_31c = *(int **)(local_340 + 0x130);
                if (local_31c == (int *)0x0) {
                  local_340 = 0;
                }
                else {
                  local_340 = *local_31c;
                }
                local_320 = 0;
                if (0 < local_340) {
                  do {
                    iVar11 = *(int *)(local_31c[2] + local_320 * 4);
                    if (((*(int *)(iVar11 + 4) == 2) &&
                        (piVar13 = *(int **)(iVar11 + 0x60), piVar13 != (int *)0x0)) &&
                       (iVar12 = (**(code **)(*piVar13 + 0x10))(piVar13,local_314,0x104),
                       -1 < iVar12)) {
                      puVar5 = (uchar *)_SfGetFileNameExtensionPtrA_4(local_314);
                      _mbscpy(local_210,local_10c);
                      pCVar6 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_210);
                      iVar12 = lstrcmpiA(".wav",pCVar6);
                      if (iVar12 == 0) {
                        puVar7 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_210);
                        *puVar7 = 0;
                      }
                      _mbscat(local_210,puVar5);
                      local_33c = ftol();
                      local_338 = ftol();
                      local_344 = local_344 + 1;
                      iVar12 = FUN_0043d120(local_314,local_210,0,&local_33c);
                      if (iVar12 == -0x7ffb1ff4) {
                        return -0x7ffb1ff4;
                      }
                    }
                    if (((*(byte *)(iVar11 + 0x8c) & 4) != 0) &&
                       (iVar11 = FUN_005f79b0(local_314,0x104), -1 < iVar11)) {
                      puVar5 = (uchar *)_SfGetFileNameExtensionPtrA_4(local_314);
                      _mbscpy(local_210,local_10c);
                      _mbscat(local_210,puVar5);
                      local_33c = ftol();
                      local_338 = ftol();
                      local_344 = local_344 + 1;
                      iVar11 = FUN_0043d120(local_314,local_210,0,&local_33c);
                      if (iVar11 == -0x7ffb1ff4) {
                        return -0x7ffb1ff4;
                      }
                    }
                    local_320 = local_320 + 1;
                  } while (local_320 < local_340);
                }
                iVar11 = 1;
                lVar8 = SfFMMeta_CreateMetaName(local_348,local_314,0x104,1);
                if (lVar8 < 0) {
                  return lVar8;
                }
                iVar12 = _SfDoesFileExist_4(local_314);
                if (iVar12 == 0) {
                  iVar11 = 0;
                  lVar8 = SfFMMeta_CreateMetaName(local_348,local_314,0x104,0);
                  iVar9 = 0;
                  if (-1 < lVar8) {
                    iVar9 = _SfDoesFileExist_4(local_314);
                  }
                  iVar12 = 0;
                  if (iVar9 != 0) goto LAB_00531adc;
                }
                else {
LAB_00531adc:
                  lVar8 = SfFMMeta_CreateMetaName((char *)local_10c,(char *)local_210,0x104,iVar11);
                  if (lVar8 < 0) {
                    return lVar8;
                  }
                  local_33c = ftol();
                  local_338 = local_33c;
                  iVar12 = FUN_0043d120(local_314,local_210,0,&local_33c);
                  if (iVar12 < 0) {
                    return iVar12;
                  }
                  pCVar6 = (LPCSTR)_SfGetFileNamePtrA_4(local_10c);
                  lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(local_348);
                  iVar11 = lstrcmpiA(pCVar6,lpString2);
                  if (iVar11 != 0) {
                    iVar12 = SfFMMeta_ChangeAttachedFilename((char *)local_210,pCVar6);
                    if (-1 < iVar12) goto LAB_00531b88;
                    DeleteFileA((LPCSTR)local_210);
                  }
                  if (iVar12 < 0) {
                    return iVar12;
                  }
                }
LAB_00531b88:
                _mbscpy((uchar *)((int)local_34c + 4 + *(int *)(param_1 + 0x13c)),local_10c);
              }
              if (iVar12 < 0) {
                return iVar12;
              }
              local_34c = (int *)((int)local_34c + 0x108);
              if (*(int *)(param_1 + 0x138) <= local_318) {
                return iVar12;
              }
            } while( true );
          }
        }
      }
    }
  }
  else {
    if (-1 < iVar12) {
      if (0 < *(int *)(param_1 + 0x138)) {
        FUN_004eb2b0(iVar11);
      }
      FUN_005b83b0(iVar11,1);
      local_340 = 0;
      if (0 < *(int *)(param_1 + 0x138)) {
        local_34c = (int *)0x0;
        do {
          piVar13 = (int *)((int)local_34c + *(int *)(param_1 + 0x13c));
          if ((*piVar13 != 0) && ((char)piVar13[1] != '\0')) {
            local_348 = (char *)0x0;
            iVar12 = FUN_005ec8a0(piVar13 + 1,&local_348,1,0);
            if ((-1 < iVar12) &&
               (((iVar12 = FUN_004eb0f0(iVar11,0x27,local_348), -1 < iVar12 &&
                 (iVar12 = FUN_00433850(iVar11,*(undefined4 *)
                                                ((int)local_34c + *(int *)(param_1 + 0x13c)),
                                        local_348,1), -1 < iVar12)) &&
                (iVar12 = FUN_004eb0f0(iVar11,0x28,
                                       *(undefined4 *)((int)local_34c + *(int *)(param_1 + 0x13c))),
                -1 < iVar12)))) {
              FUN_005ed410(*(undefined4 *)((int)local_34c + *(int *)(param_1 + 0x13c)),0,0);
              FUN_005eed00(iVar11,local_348);
            }
          }
          local_340 = local_340 + 1;
          local_34c = (int *)((int)local_34c + 0x108);
        } while (local_340 < *(int *)(param_1 + 0x138));
      }
      FUN_005b84d0(iVar11,1);
    }
    if (*(LPCVOID *)(param_1 + 0x13c) != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x13c));
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x13c));
      GlobalFree(pvVar2);
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    InterlockedDecrement(&DAT_0065e144);
    DAT_0064767c = DAT_0064767c | 0x1010;
    FUN_004ea040(iVar11,0);
  }
  return iVar12;
}


