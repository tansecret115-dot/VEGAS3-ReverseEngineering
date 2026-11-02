/* Module: vegas30.exe
   Function: FUN_00442ac0
   Address: 00442ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00442ac0(int param_1,void *param_2,LPCSTR param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  cditemtag *pcVar4;
  long lVar5;
  HANDLE hObject;
  uchar *_Source;
  HGLOBAL pvVar6;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  tagSFCDPRJ_PROJECT *ptVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  int *local_a08;
  uint local_a04;
  uchar *local_a00;
  int local_9fc;
  uint local_9f8;
  uint local_9f4;
  uint local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  uint local_9e0;
  ulong local_9dc;
  int local_9d8;
  int local_9d4;
  ulong local_9d0;
  undefined4 local_9cc;
  undefined4 uStack_9c8;
  undefined8 local_9c4;
  undefined4 local_9bc;
  undefined4 uStack_9b8;
  undefined8 local_9b4;
  undefined4 local_9ac;
  undefined4 uStack_9a8;
  undefined8 local_9a4;
  undefined1 local_99c [4];
  undefined8 local_998;
  undefined8 local_990;
  uint local_978;
  CHAR local_960 [16];
  uchar local_950 [260];
  CHAR local_84c [259];
  undefined1 local_749;
  tagSFCDPRJ_PROJECT local_748 [4];
  undefined4 local_744;
  undefined4 local_738;
  WCHAR local_72c [260];
  uint *local_524;
  int *local_520;
  undefined1 local_51c [8];
  uchar local_514 [260];
  uchar local_410 [260];
  uchar local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  ptVar15 = local_748;
  for (iVar12 = 0x8d; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)ptVar15 = 0;
    ptVar15 = ptVar15 + 4;
  }
  lVar5 = SfCDProject_IsProject(param_2,&local_9dc);
  if (lVar5 != 0) {
    return -0x7ffb1ff8;
  }
  riff_SaveLocation(param_2,local_99c);
  local_9d0 = local_9dc;
  local_a04 = SfCDProject_ReadProject(param_2,local_748,(long *)&local_9d0);
  if (-1 < (int)local_a04) {
    if (local_a04 == 0x4e000) {
      SfErrorHandler_DetailsAddString
                (0x4e000,
                 "The file is corrupted. Some of your project information may have been lost.");
    }
    local_208[0] = 0;
    local_104[0] = 0;
    if ((&stack0x00000000 == (undefined1 *)0x72c) || (local_72c[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_72c,-1,local_84c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x84c) {
      local_84c[0] = '\0';
    }
    local_749 = 0;
    iVar12 = lstrcmpiA(param_3,local_84c);
    if ((iVar12 != 0) && (iVar12 = lstrlenA(local_84c), iVar12 != 0)) {
      _SfGetBasePathRelative_16(local_84c,param_3,local_104,0x104);
      _SfGetBasePathRelative_16(param_3,local_84c,local_208,0x104);
    }
    if ((local_520 != (int *)0x0) && (0 < *local_520)) {
      local_9f4 = *(uint *)local_520[2];
    }
    if (local_524 == (uint *)0x0) {
      local_a04 = 0;
    }
    else {
      local_a04 = *local_524;
    }
    local_9fc = 0;
    if (0 < (int)local_a04) {
      local_9f8 = 100;
      do {
        puVar8 = *(uchar **)(local_524[2] + local_9fc * 4);
        FUN_004e7320(param_1,local_9f8 / local_a04);
        if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
          local_a04 = -0x7ffb1ff4;
          goto LAB_00443407;
        }
        _mbscpy(local_950,puVar8);
        hObject = CreateFileA((LPCSTR)local_950,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                              (HANDLE)0x0);
        if (hObject == (HANDLE)0xffffffff) {
          _Source = (uchar *)_SfGetFileNamePtrA_4(puVar8);
          _mbscpy(local_410,_Source);
          _SfGetPathNameFromFilePath_12(param_3,local_950,0x104);
          local_a00 = (uchar *)lstrlenA((LPCSTR)local_410);
          iVar12 = lstrlenA((LPCSTR)local_950);
          if (local_a00 + iVar12 < (uchar *)0x103) {
            _mbscat(local_950,local_410);
            hObject = CreateFileA((LPCSTR)local_950,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                  (HANDLE)0x0);
            if (hObject != (HANDLE)0xffffffff) goto LAB_00442d83;
          }
          _mbscpy(local_950,puVar8);
          *(undefined4 *)(param_1 + 0x138) = 1;
        }
        else {
LAB_00442d83:
          CloseHandle(hObject);
        }
        local_a00 = local_950;
        local_a08 = (int *)0x0;
        if ((*(char *)(param_4 + 0x1e4) == '\0') ||
           (iVar12 = FUN_00436ff0(&local_a00), (*(byte *)(iVar12 + 0x18) & 2) == 2)) {
          iVar12 = FUN_005f0ea0(local_950,&local_a08);
          if (((-1 < iVar12) || (iVar12 == -0x7ffb1ff6)) &&
             (iVar12 = FUN_005ebfb0(local_a08), piVar10 = local_a08, iVar12 < 0)) {
            if (local_a08 != (int *)0x0) {
              FUN_005efea0();
              pvVar6 = GlobalHandle(piVar10);
              GlobalUnlock(pvVar6);
              pvVar6 = GlobalHandle(piVar10);
              GlobalFree(pvVar6);
            }
            local_a08 = (int *)0x0;
          }
        }
        else {
          local_a08 = *(int **)(iVar12 + 4);
        }
        local_9fc = local_9fc + 1;
        local_9f8 = local_9f8 + 100;
      } while (local_9fc < (int)local_a04);
    }
    if ((local_520 != (int *)0x0) && (*local_520 != 0)) {
      iVar12 = FUN_005b87b0(param_4);
      iVar12 = **(int **)(iVar12 + 8);
      if (*(int **)(local_9f4 + 0xc) == (int *)0x0) {
        local_a08 = (int *)0x0;
      }
      else {
        local_a08 = (int *)**(int **)(local_9f4 + 0xc);
      }
      local_a04 = 0;
      local_9fc = 0;
      puVar11 = local_524;
      if (0 < (int)local_a08) {
        do {
          uVar17 = *(uint *)(*(int *)(*(int *)(local_9f4 + 0xc) + 8) + local_9fc * 4);
          iVar7 = *(int *)(uVar17 + 4);
          local_9f8 = uVar17;
          if (iVar7 != -1) {
            if (puVar11 == (uint *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *puVar11;
            }
            if ((iVar7 < 0) || ((int)(uVar13 - 1) < iVar7)) {
              puVar8 = (uchar *)0x0;
            }
            else {
              puVar8 = *(uchar **)(puVar11[2] + iVar7 * 4);
            }
            if (puVar8 != (uchar *)0x0) {
              local_a00 = puVar8;
              if (((*(char *)(param_4 + 0x1e4) == '\0') ||
                  (iVar7 = FUN_00436ff0(&local_a00), (*(byte *)(iVar7 + 0x18) & 2) == 2)) ||
                 (iVar7 = *(int *)(iVar7 + 4), iVar7 == 0)) {
                puVar8 = (uchar *)_SfGetFileNamePtrA_4(puVar8);
                _mbscpy(local_30c,puVar8);
                _SfGetPathNameFromFilePath_12(param_3,local_514,0x104);
                local_a00 = (uchar *)lstrlenA((LPCSTR)local_514);
                iVar7 = lstrlenA((LPCSTR)local_30c);
                puVar11 = local_524;
                if ((local_a00 + iVar7 < (uchar *)0x103) &&
                   (_mbscat(local_514,local_30c), puVar11 = local_524,
                   *(char *)(param_4 + 0x1e4) != '\0')) {
                  puVar16 = *(undefined4 **)(param_4 + 0x1ec);
                  bVar1 = *(byte *)(puVar16 + 6);
                  while ((bVar1 & 2) != 2) {
                    iVar7 = lstrcmpiA((LPCSTR)local_514,(LPCSTR)*puVar16);
                    if (iVar7 == 0) break;
                    if (iVar7 < 0) {
                      puVar16 = (undefined4 *)puVar16[4];
                    }
                    else {
                      puVar16 = (undefined4 *)puVar16[5];
                    }
                    bVar1 = *(byte *)(puVar16 + 6);
                  }
                  puVar11 = local_524;
                  if (((*(byte *)(puVar16 + 6) & 2) != 2) && (iVar7 = puVar16[1], iVar7 != 0))
                  goto LAB_0044301c;
                }
              }
              else {
LAB_0044301c:
                iVar2 = *(int *)(uVar17 + 0xc);
                iVar3 = *(int *)(uVar17 + 0x14);
                iVar9 = 0;
                uVar13 = uVar17;
                if ((*(int *)(uVar17 + 0x1c) != 0) &&
                   (uVar13 = local_9f8, *(int *)(uVar17 + 0x20) != 0)) {
                  iVar9 = *(int *)(uVar17 + 0x20);
                }
                local_a00 = (uchar *)0x0;
                iVar7 = FUN_004429b0(param_4,&local_a00,iVar12,iVar7,iVar2,
                                     *(undefined4 *)(uVar17 + 0x10),iVar3,iVar9);
                puVar11 = local_524;
                if ((-1 < iVar7) &&
                   (piVar10 = (int *)(**(int **)(*(int *)(uVar13 + 0x24) + 8) + 4),
                   *piVar10 == 0x766e6566)) {
                  uVar17 = iVar3 + iVar2;
                  FUN_004427b0(iVar12 + 0x638,piVar10,iVar2,local_a04,uVar17);
                  *(undefined4 *)(iVar12 + 0x648) = 0xffffffff;
                  *(undefined4 *)(iVar12 + 0x640) = 0;
                  *(int *)(iVar12 + 0x688) = iVar12;
                  *(undefined4 *)(iVar12 + 0x644) = 0;
                  *(undefined4 *)(iVar12 + 0x64c) = 0x7fffffff;
                  puVar11 = local_524;
                  local_a04 = uVar17;
                }
              }
            }
          }
          local_9fc = local_9fc + 1;
        } while (local_9fc < (int)local_a08);
      }
    }
    local_a08 = (int *)0x0;
    local_a04 = _SfList_CreateExZ_32(&local_a08,4,0xffffffff,0xffffffff,2,0,0,0);
    if (local_a04 == 0) {
      FUN_004417b0(param_2,&local_a00,local_960,local_a08,1,local_744);
      if (local_a00 == (uchar *)0x0) {
        *(undefined1 *)(param_4 + 0x340) = 0;
      }
      else {
        lstrcpynA((LPSTR)(param_4 + 0x340),local_960,0x104);
        *(undefined1 *)(param_4 + 0x443) = 0;
      }
      local_9f8 = FUN_005b89b0(param_4);
      local_9f4 = FUN_005b8970(param_4);
      local_9fc = 0;
      local_9d8 = *local_a08;
      if (0 < local_9d8) {
        do {
          pcVar4 = *(cditemtag **)(local_a08[2] + local_9fc * 4);
          puVar8 = (uchar *)SfPQList_GetItemText(pcVar4);
          puVar18 = &local_998;
          for (iVar12 = 0xe; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined4 *)puVar18 = 0;
            puVar18 = (undefined8 *)((int)puVar18 + 4);
          }
          local_9f0 = 0;
          local_9ec = 0;
          local_9e8 = 0;
          local_9e4 = 0;
          local_9e0 = 0;
          local_9ac = *(undefined4 *)(pcVar4 + 8);
          uStack_9a8 = 0;
          uVar19 = ftol();
          local_9b4 = uVar19;
          uVar19 = ftol();
          local_998 = uVar19;
          iVar12 = lstrlenA((LPCSTR)puVar8);
          uVar17 = local_9f8;
          uVar19 = local_990;
          switch(*(undefined4 *)pcVar4) {
          case 1:
            local_9cc = *(undefined4 *)(pcVar4 + 0xc);
            uStack_9c8 = 0;
            uVar19 = ftol();
            local_9c4 = uVar19;
            uVar19 = ftol();
            local_978 = local_978 | 1;
          case 0:
            uVar17 = local_9f4;
            break;
          default:
            goto switchD_00443221_caseD_2;
          case 3:
            local_9bc = *(undefined4 *)(pcVar4 + 0xc);
            uStack_9b8 = 0;
            uVar19 = ftol();
            local_9a4 = uVar19;
            uVar19 = ftol();
            local_9f0 = (*(uint *)(pcVar4 + 0x10) & 1) << 1 |
                        CONCAT31((int3)((local_9f0 & 0xfffffffb) >> 8),
                                 (byte)((*(uint *)(pcVar4 + 0x10) & 2) << 1) |
                                 (byte)(local_9f0 & 0xfffffffb)) & 0xfffffffd;
            if (((byte)pcVar4[0x10] & 8) != 0) {
              local_990 = uVar19;
              lstrcpynA((LPSTR)&local_9ec,(LPCSTR)(pcVar4 + 0x18),0xd);
              local_9e0 = local_9e0 & 0xffffff00;
              uVar19 = local_990;
            }
            local_978 = local_978 | 1;
            break;
          case 4:
            local_9f0 = local_9f0 | 1;
          }
          local_990 = uVar19;
          if (uVar17 != 0) {
            local_a04 = _SfList_AllocAndInsertItem_20
                                  (uVar17,&local_998,iVar12 + 0x39,0xffffffff,&local_9d4);
            if (-1 < (int)local_a04) {
              iVar12 = *(int *)(*(int *)(uVar17 + 8) + local_9d4 * 4);
              _mbscpy((uchar *)(iVar12 + 0x30),puVar8);
              if (uVar17 == local_9f8) {
                pvVar6 = GlobalAlloc(2,0x14);
                puVar11 = GlobalLock(pvVar6);
                *(uint **)(iVar12 + 0x28) = puVar11;
                if (puVar11 == (uint *)0x0) {
                  local_a04 = -0x7ff8fff2;
                }
                else {
                  *(undefined4 *)(iVar12 + 0x2c) = 0x676e6463;
                  puVar14 = &local_9f0;
                  for (iVar12 = 5; iVar12 != 0; iVar12 = iVar12 + -1) {
                    *puVar11 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar11 = puVar11 + 1;
                  }
                }
              }
            }
          }
switchD_00443221_caseD_2:
          local_9fc = local_9fc + 1;
        } while (local_9fc < local_9d8);
      }
      _SfList_Destroy_4(local_a08);
      _SfSummary_Copy_8(param_4 + 0x1bc,local_51c);
      *(undefined4 *)(param_4 + 0x7e0) = local_738;
    }
LAB_00443407:
    SfCDProject_FreeProject(local_748);
  }
  return local_a04;
}


