/* Module: vidcap30.exe
   Function: FUN_0049f630
   Address: 0049f630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049f630(undefined4 *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  LPCSTR pCVar3;
  UINT uMode;
  char *pcVar4;
  HANDLE hFindFile;
  undefined4 *puVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  ushort uVar10;
  char *pcVar11;
  CHAR *pCVar12;
  undefined4 uVar13;
  CHAR *pCVar14;
  DWORD DVar15;
  bool bVar16;
  CHAR local_7d8 [9];
  undefined1 local_7cf;
  CHAR local_7cc [9];
  undefined1 local_7c3;
  _FILETIME local_7c0;
  _SYSTEMTIME local_7b8;
  _WIN32_FIND_DATAA local_7a8;
  undefined4 local_668;
  undefined4 local_664;
  uchar local_65c [260];
  char local_558 [79];
  undefined1 local_509;
  CHAR local_508 [80];
  CHAR local_4b8 [80];
  uint local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 *local_45c;
  ushort local_458;
  ushort uStack_456;
  CHAR local_454 [524];
  undefined1 local_248 [64];
  char local_208;
  char local_207 [259];
  CHAR local_104 [260];
  
  pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1097);
  lstrcpynA(local_7cc,pCVar3,10);
  local_7c3 = 0;
  lstrlenA(local_7cc);
  pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1098);
  lstrcpynA(local_7d8,pCVar3,10);
  local_7cf = 0;
  lstrlenA(local_7d8);
  pcVar11 = &local_208;
  uMode = SetErrorMode(1);
  local_208 = *param_2;
  pcVar4 = param_2;
  cVar1 = local_208;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar11 = pcVar11 + 1;
    *pcVar11 = cVar1;
  }
  *(undefined4 *)pcVar11 = DAT_005b73fc;
  pcVar11[4] = DAT_005b7400;
  hFindFile = FindFirstFileA(&local_208,&local_7a8);
  if (hFindFile == (HANDLE)0xffffffff) {
    uVar13 = 0xffffffff;
  }
  else {
    do {
      if (local_7a8.cFileName._0_2_ != DAT_0058a184) {
        iVar7 = 3;
        bVar16 = true;
        pCVar12 = local_7a8.cFileName;
        pcVar11 = "..";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar16 = *pCVar12 == *pcVar11;
          pCVar12 = pCVar12 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar16);
        if ((!bVar16) && ((local_7a8.dwFileAttributes & 6) == 0)) {
          cVar1 = *param_2;
          pcVar11 = &local_208;
          local_208 = cVar1;
          pcVar4 = param_2;
          while (cVar1 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar11 = pcVar11 + 1;
            *pcVar11 = cVar1;
          }
          *pcVar11 = '\\';
          pCVar12 = local_7a8.cFileName;
          pcVar11[1] = local_7a8.cFileName[0];
          pcVar11 = pcVar11 + 2;
          cVar1 = local_7a8.cFileName[0];
          while (pCVar12 = pCVar12 + 1, cVar1 != '\0') {
            cVar1 = *pCVar12;
            *pcVar11 = cVar1;
            pcVar11 = pcVar11 + 1;
          }
          local_664 = 0;
          if ((local_7a8.dwFileAttributes & 0x10) == 0) {
            local_468 = local_7a8.dwFileAttributes;
            sVar2 = FUN_0049ee50(&local_208,&local_668,0x4601);
            if (sVar2 == 0) {
              _mbscpy(local_65c,(uchar *)local_7a8.cFileName);
            }
            local_460 = local_664;
            local_464 = local_664;
          }
          else {
            local_468 = local_7a8.dwFileAttributes | 0x10000;
            iVar7 = FUN_0049ed10(&local_208);
            if (iVar7 != 0) {
              local_468 = local_468 | 0x20000;
            }
            sVar2 = FUN_0049ee50(&local_208,&local_668,0x4603);
            if (sVar2 == 0) {
              _mbscpy(local_65c,(uchar *)local_7a8.cFileName);
              pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1099);
              lstrcpynA(local_558,pCVar3,0x50);
              local_509 = 0;
              lstrlenA(local_558);
            }
            local_464 = local_664;
            local_460 = local_668;
          }
          uVar10 = (short)pCVar12 - (short)local_7a8.cFileName;
          local_458 = uVar10;
          pCVar12 = local_7a8.cFileName;
          pCVar14 = local_454;
          for (uVar8 = (uint)(uVar10 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pCVar14 = *(undefined4 *)pCVar12;
            pCVar12 = pCVar12 + 4;
            pCVar14 = pCVar14 + 4;
          }
          for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pCVar14 = *pCVar12;
            pCVar12 = pCVar12 + 1;
            pCVar14 = pCVar14 + 1;
          }
          local_464 = local_664;
          FileTimeToLocalFileTime(&local_7a8.ftLastWriteTime,&local_7c0);
          FileTimeToSystemTime(&local_7c0,&local_7b8);
          GetTimeFormatA(0x800,2,&local_7b8,(LPCSTR)0x0,local_508,0x50);
          GetDateFormatA(0x800,1,&local_7b8,(LPCSTR)0x0,local_4b8,0x50);
          DVar15 = local_7a8.nFileSizeLow;
          DVar9 = local_7a8.nFileSizeHigh;
          if ((local_7a8.dwFileAttributes & 0x10) == 0) {
            if (local_558[0] == '\0') {
              pcVar11 = (char *)_SfGetFileNameExtensionPtrA_4(local_7a8.cFileName);
              if (*pcVar11 == '\0') {
                local_104[0] = '\0';
              }
              else {
                wsprintfA(local_104,"%s ",pcVar11 + 1);
                CharUpperA(local_104);
              }
              pCVar12 = local_104;
              pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x109a);
              wsprintfA(local_558,pCVar3,pCVar12);
            }
            if (((int)DVar9 < 1) && (((int)DVar9 < 0 || (DVar15 < 0x401)))) {
              DVar15 = 0x400;
              DVar9 = 0;
            }
            _SfGetByteSizeText_12(DVar15,DVar9,local_248);
            uStack_456 = SfPrintF(local_454 + local_458,"%s\t%s\t%s\t%s %s",local_65c,local_248,
                                  local_558,local_4b8,local_508);
          }
          else {
            iVar7 = wsprintfA(local_454 + local_458,"%s\t\t%s\t%s %s",local_65c,local_558,local_4b8,
                              local_508);
            uStack_456 = (ushort)iVar7;
            DVar9 = 0;
            DVar15 = 0;
          }
          uVar8 = (uint)uStack_456;
          puVar5 = calloc(1,0x18);
          if (puVar5 != (undefined4 *)0x0) {
            puVar5[2] = DVar15;
            *puVar5 = 8;
            puVar5[3] = DVar9;
            puVar5[4] = local_7a8.ftLastWriteTime.dwLowDateTime;
            puVar5[5] = local_7a8.ftLastWriteTime.dwHighDateTime;
            local_45c = puVar5;
            _SfList_AllocAndInsertItem_20
                      (param_1,&local_468,uVar8 + 0x17 + (uint)uVar10,0xffffffff,0);
          }
        }
      }
      BVar6 = FindNextFileA(hFindFile,&local_7a8);
    } while (BVar6 != 0);
    FindClose(hFindFile);
    uVar13 = *param_1;
  }
  SetErrorMode(uMode);
  return uVar13;
}


