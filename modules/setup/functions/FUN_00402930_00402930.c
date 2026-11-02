/* Module: Setup.exe
   Function: FUN_00402930
   Address: 00402930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402930(void)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  uchar local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  iVar5 = 0;
  if ((DAT_00446d84 == (HMODULE)0x0) || (DAT_00446d80 == 0)) {
    GetSystemDirectoryA((LPSTR)local_244,0x104);
    _mbscat(local_244,(uchar *)"\\msi.dll");
    pvVar2 = FindFirstFileA((LPCSTR)local_244,&local_140);
    if (pvVar2 == (HANDLE)0xffffffff) {
      DAT_00446d84 = (HMODULE)0x0;
    }
    else {
      DAT_00446d84 = LoadLibraryA((LPCSTR)local_244);
    }
    DAT_00446d80 = (uint)(pvVar2 != (HANDLE)0xffffffff);
    if (DAT_00446d80 == 0) {
      return 0;
    }
  }
  pFVar3 = GetProcAddress(DAT_00446d84,"MsiOpenDatabaseA");
  if ((((pFVar3 != (FARPROC)0x0) && (iVar4 = (*pFVar3)(&DAT_004479e8,0,&local_24c), iVar4 == 0)) &&
      (SfPrintF(local_244,
                (BYTE *)"SELECT `AppID`, `GradeSwitch` FROM `SfAppID` WHERE `GradeSwitch` = 1"),
      uVar1 = local_24c, DAT_00446d80 != 0)) &&
     ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiDatabaseOpenViewA"), pFVar3 != (FARPROC)0x0 &&
      (iVar4 = (*pFVar3)(uVar1,local_244,&uStack_250), uVar1 = uStack_250, iVar4 == 0)))) {
    if ((((DAT_00446d80 != 0) &&
         ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiViewExecute"), pFVar3 != (FARPROC)0x0 &&
          (iVar4 = (*pFVar3)(uVar1,0), uVar1 = uStack_250, iVar4 == 0)))) && (DAT_00446d80 != 0)) &&
       ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiViewFetch"), pFVar3 != (FARPROC)0x0 &&
        (iVar4 = (*pFVar3)(uVar1,&uStack_248), uVar1 = uStack_248, iVar4 == 0)))) {
      if ((DAT_00446d80 == 0) ||
         (pFVar3 = GetProcAddress(DAT_00446d84,"MsiRecordGetInteger"), pFVar3 == (FARPROC)0x0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*pFVar3)(uVar1,1);
      }
      if ((DAT_00446d80 != 0) &&
         (pFVar3 = GetProcAddress(DAT_00446d84,"MsiCloseHandle"), pFVar3 != (FARPROC)0x0)) {
        (*pFVar3)(uStack_248);
      }
    }
    if ((DAT_00446d80 != 0) &&
       (pFVar3 = GetProcAddress(DAT_00446d84,"MsiCloseHandle"), pFVar3 != (FARPROC)0x0)) {
      (*pFVar3)(uStack_250);
    }
  }
  if ((DAT_00446d80 != 0) &&
     (pFVar3 = GetProcAddress(DAT_00446d84,"MsiCloseHandle"), pFVar3 != (FARPROC)0x0)) {
    (*pFVar3)(local_24c);
  }
  return iVar5;
}


