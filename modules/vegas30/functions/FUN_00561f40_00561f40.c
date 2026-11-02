/* Module: vegas30.exe
   Function: FUN_00561f40
   Address: 00561f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00561f40(undefined4 *param_1)

{
  HANDLE hFindFile;
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iStack_800;
  uint uStack_7fc;
  int iStack_7f8;
  HANDLE local_7f4;
  FARPROC local_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined1 auStack_7dc [16];
  uint uStack_7cc;
  CHAR aCStack_7c8 [259];
  undefined1 uStack_6c5;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined1 auStack_6b4 [8];
  undefined4 auStack_6ac [22];
  uchar local_654 [260];
  _WIN32_FIND_DATAA local_550;
  CHAR local_410 [260];
  CHAR local_30c [260];
  WCHAR aWStack_208 [260];
  
  _SfGetModulePath_12(DAT_006471fc,local_654,0x104);
  _mbscat(local_654,(uchar *)"Video Hardware Drivers");
  _SfAddSlashToPathName_8(local_654,0x104);
  SfPrintF(local_30c,"%s*.DLL",local_654);
  local_7f4 = FindFirstFileA(local_30c,&local_550);
  if (local_7f4 == (HANDLE)0xffffffff) {
    return 0;
  }
  do {
    SfPrintF(local_410,&DAT_00610364,local_654,local_550.cFileName);
    hModule = LoadLibraryA(local_410);
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"SfVideoDriver_GetDeviceCount");
      pFVar2 = GetProcAddress(hModule,"SfVideoDriver_QueryDeviceInfo");
      local_7f0 = pFVar2;
      pFVar3 = GetProcAddress(hModule,"SfVideoDriver_CreateInstance");
      if (((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) && (pFVar3 != (FARPROC)0x0)) {
        iStack_7f8 = (*pFVar1)();
        iVar6 = 0;
        iStack_800 = 0;
        if (0 < iStack_7f8) {
          do {
            puVar7 = &uStack_7cc;
            for (iVar5 = 0x5e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            iVar5 = (*local_7f0)(auStack_7dc,&uStack_7ec,&uStack_7fc,aWStack_208,0x104,iVar6);
            if (-1 < iVar5) {
              if ((&stack0x00000000 == (undefined1 *)0x208) || (aWStack_208[0] != L'\0')) {
                WideCharToMultiByte(0,0,aWStack_208,-1,aCStack_7c8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x7c8) {
                aCStack_7c8[0] = '\0';
              }
              uStack_7cc = uStack_7cc & 0xfffffffc ^ uStack_7fc & 1 | uStack_7fc & 2;
              uStack_6c4 = uStack_7ec;
              uStack_6c0 = uStack_7e8;
              uStack_6bc = uStack_7e4;
              uStack_6c5 = 0;
              uStack_6b8 = uStack_7e0;
              puVar8 = auStack_6ac;
              for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              auStack_6ac[0] = 0x48;
              iVar5 = (*pFVar3)(auStack_6b4,auStack_7dc,iVar6);
              if (-1 < iVar5) {
                _SfList_InsertList_16(*param_1,0xffffffff,&uStack_7cc,1);
                iStack_800 = iStack_800 + 1;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack_7f8);
          if (iStack_800 != 0) goto LAB_0056218f;
        }
      }
      FreeLibrary(hModule);
    }
LAB_0056218f:
    hFindFile = local_7f4;
    BVar4 = FindNextFileA(local_7f4,&local_550);
    if (BVar4 == 0) {
      FindClose(hFindFile);
      return 0;
    }
  } while( true );
}


