/* Module: sfpublish.dll
   Function: FUN_00414c00
   Address: 00414c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00414c00(void *param_1)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined3 extraout_var;
  BOOL BVar5;
  uchar *lpsz;
  uchar *puVar6;
  HANDLE pvVar7;
  undefined *puVar8;
  HWND pHVar9;
  undefined4 *puVar10;
  char cVar11;
  LPCSTR pCVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  UINT UVar16;
  int iVar17;
  UINT UVar18;
  char *local_348;
  BOOL local_344;
  SYSTEMTIME local_340;
  _FILETIME _Stack_330;
  int local_328;
  undefined1 local_324 [4];
  int local_320;
  int local_31c;
  uchar local_30c [260];
  uchar local_208 [260];
  BYTE local_104 [260];
  
  if (*(void **)((int)param_1 + 0x28) == (void *)0x0) {
    return 0;
  }
  local_348 = (char *)0x0;
  iVar3 = FUN_00421a20(*(void **)((int)param_1 + 0x28),&local_328,&local_348);
  if ((iVar3 < 0) || (local_328 < 0)) {
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    pHVar9 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x204);
    SendMessageA(pHVar9,0x466,0,0);
    ShowWindow(pHVar9,0);
    GetWindowRect(pHVar9,(LPRECT)&local_340);
    MapWindowPoints((HWND)0x0,*(HWND *)((int)param_1 + 4),(LPPOINT)&local_340,2);
    pHVar9 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x206);
    UVar18 = 0x3020;
    iVar17 = 0;
    iVar3 = 0;
    UVar16 = 0;
    pCVar12 = (LPCSTR)0xc1;
    puVar10 = (undefined4 *)FUN_004012d0();
    pvVar7 = (HANDLE)FUN_0041b6c0(puVar10,pCVar12,UVar16,iVar3,iVar17,UVar18);
    GetObjectA(pvVar7,0x18,local_324);
    MoveWindow(pHVar9,local_340._8_4_ - local_320,local_340._4_4_,local_320,local_31c,1);
    SendMessageA(pHVar9,0x172,0,(LPARAM)pvVar7);
    ShowWindow(pHVar9,5);
    pHVar9 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x205);
    puVar6 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7c);
    FUN_0041a720(pHVar9,puVar6);
    pHVar9 = GetDlgItem(*(HWND *)((int)param_1 + 4),2);
    puVar6 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7d);
    FUN_0041a720(pHVar9,puVar6);
    *(undefined4 *)((int)param_1 + 0x24) = 1;
    return 0;
  }
  if (*(int *)((int)param_1 + 0x2c) == 1) {
    if (((*(int *)(local_348 + 8) < 200) || (299 < *(int *)(local_348 + 8))) ||
       (iVar3 = FUN_00414870(param_1,local_348), iVar3 < 0)) goto LAB_00414f51;
    *(undefined4 *)((int)param_1 + 0x38) = 0;
    iVar3 = FUN_004149d0((int)param_1);
  }
  else {
    if (*(int *)((int)param_1 + 0x2c) != 2) goto LAB_00414f51;
    pCVar12 = (LPCSTR)0x0;
    pcVar4 = *(char **)(*(int *)(*(int *)((int)param_1 + 0x34) + 8) +
                       *(int *)((int)param_1 + 0x38) * 4);
    cVar11 = *pcVar4;
    if (cVar11 == '\0') {
LAB_00414c7e:
      pCVar12 = pcVar4;
    }
    else {
      do {
        if (cVar11 == '/') {
          pCVar12 = pcVar4;
        }
        pcVar4 = CharNextA(pcVar4);
        cVar11 = *pcVar4;
      } while (cVar11 != '\0');
      if (pCVar12 == (LPCSTR)0x0) goto LAB_00414c7e;
    }
    if (*pCVar12 == '\0') goto LAB_00414f51;
    CharNextA(pCVar12);
    SHGetSpecialFolderPathA((HWND)0x0,(LPSTR)local_104,0x1a,1);
    FUN_004168d0(local_104,0x104);
    FUN_00418d60(local_30c,(BYTE *)"%s%s\\%s");
    _mbscpy(local_208,local_30c);
    _mbscat(local_208,".tmp");
    iVar3 = *(int *)(local_348 + 8);
    if ((iVar3 < 200) || (299 < iVar3)) {
      if (iVar3 == 0x130) {
        pcVar15 = "Downloading provider file \'%s\' unnecessary as file on server is not newer.";
        uVar14 = 0x21d;
        pcVar4 = "refreshproviders.cpp";
        uVar13 = 4;
        puVar8 = FUN_004012b0();
        FUN_00415b60((int)puVar8,uVar13,pcVar4,uVar14,pcVar15);
        DeleteFileA((LPCSTR)local_208);
        *(int *)((int)param_1 + 0x38) = *(int *)((int)param_1 + 0x38) + 1;
      }
      else {
        pcVar15 = "Attempting to download provider file \'%s\' gave status code %d";
        uVar14 = 0x228;
        pcVar4 = "refreshproviders.cpp";
        uVar13 = 1;
        puVar8 = FUN_004012b0();
        FUN_00415b60((int)puVar8,uVar13,pcVar4,uVar14,pcVar15);
        DeleteFileA((LPCSTR)local_208);
        FUN_0041dd10(*(int **)((int)param_1 + 0x34),*(int *)((int)param_1 + 0x38),1,0);
      }
    }
    else {
      bVar2 = FUN_00417080((LPCSTR)local_30c);
      if (((CONCAT31(extraout_var,bVar2) == 0) ||
          (BVar5 = DeleteFileA((LPCSTR)local_30c), BVar5 != 0)) &&
         (local_344 = MoveFileA((LPCSTR)local_208,(LPCSTR)local_30c), local_344 != 0)) {
        puVar6 = *(uchar **)(local_348 + 0xc);
        uVar1 = *puVar6;
        while (lpsz = puVar6, uVar1 != '\0') {
          while (uVar1 != '\0') {
            lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
            uVar1 = *lpsz;
          }
          puVar6 = _mbstok(puVar6,":");
          if ((puVar6 != (uchar *)0x0) &&
             (iVar3 = lstrcmpiA((LPCSTR)puVar6,"Last-Modified"), iVar3 == 0)) {
            puVar6 = _mbstok((uchar *)0x0,"");
            local_340.wYear = 0;
            local_340.wMonth = 0;
            local_340.wDayOfWeek = 0;
            local_340.wDay = 0;
            local_340.wHour = 0;
            local_340.wMinute = 0;
            local_340.wSecond = 0;
            local_340.wMilliseconds = 0;
            iVar3 = InternetTimeToSystemTime(puVar6,&local_340,0);
            if (iVar3 == 0) goto LAB_00414e4e;
            _Stack_330.dwLowDateTime = 0;
            _Stack_330.dwHighDateTime = 0;
            local_344 = SystemTimeToFileTime(&local_340,&_Stack_330);
            if (local_344 == 0) goto LAB_00414e4e;
            pvVar7 = CreateFileA((LPCSTR)local_30c,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                 (HANDLE)0x0);
            if (pvVar7 != (HANDLE)0xffffffff) {
              local_344 = SetFileTime(pvVar7,(FILETIME *)0x0,(FILETIME *)0x0,&_Stack_330);
              CloseHandle(pvVar7);
            }
            break;
          }
          puVar6 = lpsz + 1;
          uVar1 = lpsz[1];
        }
        if (local_344 == 0) goto LAB_00414e4e;
      }
      else {
LAB_00414e4e:
        GetLastError();
        pcVar15 = 
        "Something failed when deleting old .zip (%s) and renaming new .zip (%s) and whacking timestamp GLE=%d"
        ;
        uVar14 = 0x214;
        pcVar4 = "refreshproviders.cpp";
        uVar13 = 1;
        puVar8 = FUN_004012b0();
        FUN_00415b60((int)puVar8,uVar13,pcVar4,uVar14,pcVar15);
      }
      *(int *)((int)param_1 + 0x38) = *(int *)((int)param_1 + 0x38) + 1;
    }
    iVar3 = FUN_004149d0((int)param_1);
  }
  if (iVar3 == 0x4e001) {
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    FUN_00415080((int)param_1);
  }
LAB_00414f51:
  FUN_00420fc0((undefined4 *)local_348);
  return 0;
}


