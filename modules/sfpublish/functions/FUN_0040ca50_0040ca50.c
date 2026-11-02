/* Module: sfpublish.dll
   Function: FUN_0040ca50
   Address: 0040ca50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ca50(char *param_1,undefined4 *param_2,short *param_3,undefined4 param_4,
                 undefined4 param_5,short *param_6,short *param_7,undefined2 *param_8)

{
  LPCWSTR pWVar1;
  HWND hWnd;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  undefined *puVar5;
  HANDLE hFile;
  DWORD DVar6;
  HGLOBAL pvVar7;
  uchar *puVar8;
  undefined4 *puVar9;
  BOOL BVar10;
  uint uVar11;
  short *psVar12;
  code *pcVar13;
  longlong lVar14;
  uint uVar15;
  char *pcVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 local_40 [5];
  uint local_2c;
  DWORD local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;
  uchar *local_8;
  
  psVar12 = param_3;
  *param_8 = 0;
  if (param_3 == (short *)0x0) {
    return;
  }
  if (*param_3 != 8) {
    return;
  }
  sVar3 = wcslen(*(wchar_t **)(param_3 + 4));
  FUN_004328f0();
  pWVar1 = *(LPCWSTR *)(psVar12 + 4);
  if ((pWVar1 == (LPCWSTR)0x0) || (local_8 = &stack0xffffffb4, *pWVar1 != L'\0')) {
    local_8 = &stack0xffffffb4;
    WideCharToMultiByte(0,0,pWVar1,-1,&stack0xffffffb4,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  local_8[sVar3] = '\0';
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  local_c = (int *)0x0;
  iVar4 = (**(code **)*param_2)();
  psVar12 = param_6;
  pcVar2 = param_1;
  if (iVar4 < 0) {
    pcVar18 = "Could not get IWebBrowser2 from pDisp!";
    uVar17 = 0x4e8;
    pcVar16 = "sfpublishdlg.cpp";
    uVar15 = 1;
    puVar5 = FUN_004012b0();
    FUN_00415b60((int)puVar5,uVar15,pcVar16,uVar17,pcVar18);
    goto LAB_0040cefc;
  }
  if (((((*(int *)(param_1 + 0x60) == 0) && (param_7 != (short *)0x0)) && (*param_7 == 8)) &&
      ((param_6 != (short *)0x0 && (*param_6 == 0x400c)))) && (**(short **)(param_6 + 4) == 0x2011))
  {
    pcVar18 = "BeforeNavigate2 sniffing post data to check for take over element.";
    uVar17 = 0x42c;
    pcVar16 = "sfpublishdlg.cpp";
    uVar15 = 4;
    puVar5 = FUN_004012b0();
    FUN_00415b60((int)puVar5,uVar15,pcVar16,uVar17,pcVar18);
    uVar17 = *(undefined4 *)(*(int *)(psVar12 + 4) + 8);
    param_6 = (short *)0x0;
    local_1c = uVar17;
    iVar4 = Ordinal_23();
    if (-1 < iVar4) {
      local_14 = 0;
      local_10 = 0;
      iVar4 = Ordinal_20();
      if (-1 < iVar4) {
        iVar4 = Ordinal_19(uVar17,1,&local_10);
        if ((-1 < iVar4) && (local_18 = (local_10 - local_14) + 1, 0 < (int)local_18)) {
          FUN_00413540(local_40,param_6,local_18);
          param_1 = (char *)0x0;
          param_2 = (undefined4 *)0x0;
          iVar4 = FUN_004136b0(local_40,"PublishWizardTakeOverFormPost",(undefined4 *)0x0,(int *)0x0
                               ,&param_1,(int *)&param_2);
          if (-1 < iVar4) {
            pcVar18 = "BeforeNavigate2 found the PublishWizardTakeOverFormPost element.";
            uVar17 = 1099;
            pcVar16 = "sfpublishdlg.cpp";
            uVar15 = 4;
            puVar5 = FUN_004012b0();
            FUN_00415b60((int)puVar5,uVar15,pcVar16,uVar17,pcVar18);
            if (((undefined4 *)0x3 < param_2) &&
               (iVar4 = strncmp(param_1,&DAT_0043f2a8,3), iVar4 == 0)) {
              pcVar18 = "BeforeNavigate2 is taking over the post.";
              uVar17 = 0x452;
              pcVar16 = "sfpublishdlg.cpp";
              uVar15 = 4;
              puVar5 = FUN_004012b0();
              FUN_00415b60((int)puVar5,uVar15,pcVar16,uVar17,pcVar18);
              *param_8 = 0xffff;
              pcVar2[0x60] = '\x01';
              pcVar2[0x61] = '\0';
              pcVar2[0x62] = '\0';
              pcVar2[99] = '\0';
              param_3 = (short *)FUN_004136b0(local_40,"PublishWizardAvailableDiskSpaceInBytes",
                                              (undefined4 *)0x0,(int *)0x0,&param_1,(int *)&param_2)
              ;
              if (((int)param_3 < 0) || (99 < (int)param_2)) {
                param_3 = (short *)0x0;
              }
              else {
                lVar14 = FUN_004273c0(param_1,(undefined4 *)0x0);
                iVar4 = (int)((ulonglong)lVar14 >> 0x20);
                local_2c = (uint)lVar14;
                hFile = CreateFileA(*(LPCSTR *)(pcVar2 + 0x5c),0x80000000,1,
                                    (LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
                if (hFile != (HANDLE)0xffffffff) {
                  DVar6 = GetFileSize(hFile,&local_20);
                  if ((iVar4 <= (int)local_20) && ((iVar4 < (int)local_20 || (local_2c < DVar6)))) {
                    hWnd = *(HWND *)(pcVar2 + 4);
                    pcVar2[0x9c] = '\x01';
                    pcVar2[0x9d] = '\0';
                    pcVar2[0x9e] = '\0';
                    pcVar2[0x9f] = '\0';
                    PostMessageA(hWnd,0xd89,0,0);
                  }
                  CloseHandle(hFile);
                }
              }
              if (*(int *)(pcVar2 + 0x9c) == 0) {
                sVar3 = wcslen(*(wchar_t **)(param_7 + 4));
                FUN_004328f0();
                pWVar1 = *(LPCWSTR *)(param_7 + 4);
                if ((pWVar1 == (LPCWSTR)0x0) || (*pWVar1 != L'\0')) {
                  WideCharToMultiByte(0,0,pWVar1,-1,&stack0xffffff9c,sVar3 + 1,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                puVar8 = local_8;
                (&stack0xffffff9c)[sVar3] = 0;
                iVar4 = lstrlenA((LPCSTR)puVar8);
                pvVar7 = GlobalAlloc(0x40,iVar4 + 1);
                puVar8 = GlobalLock(pvVar7);
                *(uchar **)(pcVar2 + 0x8c) = puVar8;
                if (puVar8 != (uchar *)0x0) {
                  _mbscpy(puVar8,local_8);
                  iVar4 = lstrlenA(&stack0xffffff9c);
                  pvVar7 = GlobalAlloc(0x40,iVar4 + 1);
                  puVar8 = GlobalLock(pvVar7);
                  *(uchar **)(pcVar2 + 0x90) = puVar8;
                  pcVar13 = GlobalHandle_exref;
                  if (puVar8 != (uchar *)0x0) {
                    _mbscpy(puVar8,&stack0xffffff9c);
                    uVar15 = local_18;
                    *(uint *)(pcVar2 + 0x98) = local_18;
                    pvVar7 = GlobalAlloc(0x40,local_18);
                    puVar9 = GlobalLock(pvVar7);
                    *(undefined4 **)(pcVar2 + 0x94) = puVar9;
                    if (puVar9 == (undefined4 *)0x0) {
                      param_3 = (short *)0x8007000e;
                      pcVar13 = GlobalHandle_exref;
                    }
                    else {
                      psVar12 = param_6;
                      for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *puVar9 = *(undefined4 *)psVar12;
                        psVar12 = psVar12 + 2;
                        puVar9 = puVar9 + 1;
                      }
                      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                        *(char *)puVar9 = (char)*psVar12;
                        psVar12 = (short *)((int)psVar12 + 1);
                        puVar9 = (undefined4 *)((int)puVar9 + 1);
                      }
                      BVar10 = PostMessageA(*(HWND *)(pcVar2 + 4),0xd88,0,0);
                      pcVar13 = GlobalHandle_exref;
                      if (BVar10 == 0) {
                        param_3 = (short *)0x80004005;
                      }
                      else if (-1 < (int)param_3) goto LAB_0040cebd;
                      pvVar7 = GlobalHandle(*(LPCVOID *)(pcVar2 + 0x94));
                      GlobalUnlock(pvVar7);
                      pvVar7 = GlobalHandle(*(LPCVOID *)(pcVar2 + 0x94));
                      GlobalFree(pvVar7);
                      pcVar2[0x94] = '\0';
                      pcVar2[0x95] = '\0';
                      pcVar2[0x96] = '\0';
                      pcVar2[0x97] = '\0';
                      if (-1 < (int)param_3) goto LAB_0040cebd;
                    }
                    uVar17 = *(undefined4 *)(pcVar2 + 0x90);
                    pvVar7 = (HGLOBAL)(*pcVar13)(uVar17);
                    GlobalUnlock(pvVar7);
                    pvVar7 = (HGLOBAL)(*pcVar13)(uVar17);
                    GlobalFree(pvVar7);
                    pcVar2[0x90] = '\0';
                    pcVar2[0x91] = '\0';
                    pcVar2[0x92] = '\0';
                    pcVar2[0x93] = '\0';
                    if (-1 < (int)param_3) goto LAB_0040cebd;
                  }
                  uVar17 = *(undefined4 *)(pcVar2 + 0x8c);
                  pvVar7 = (HGLOBAL)(*pcVar13)(uVar17);
                  GlobalUnlock(pvVar7);
                  pvVar7 = (HGLOBAL)(*pcVar13)(uVar17);
                  GlobalFree(pvVar7);
                  pcVar2[0x8c] = '\0';
                  pcVar2[0x8d] = '\0';
                  pcVar2[0x8e] = '\0';
                  pcVar2[0x8f] = '\0';
                }
              }
            }
          }
LAB_0040cebd:
          FUN_00413570(local_40);
          uVar17 = local_1c;
        }
      }
      Ordinal_24(uVar17);
    }
  }
  (**(code **)(*local_c + 8))();
  local_c = (int *)0x0;
LAB_0040cefc:
  puVar8 = _mbsstr(local_8,(uchar *)"shdoclc.dll");
  if (puVar8 != (uchar *)0x0) {
    *param_8 = 0xffff;
    PostMessageA(*(HWND *)(pcVar2 + 4),0xd89,0,0);
  }
  return;
}


