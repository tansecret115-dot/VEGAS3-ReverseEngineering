/* Module: Setup.exe
   Function: FUN_004022d0
   Address: 004022d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004022d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  uchar local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  uVar5 = 0x80004005;
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
      return 0x80004005;
    }
  }
  pFVar3 = GetProcAddress(DAT_00446d84,"MsiOpenDatabaseA");
  if ((((pFVar3 != (FARPROC)0x0) && (iVar4 = (*pFVar3)(&DAT_004479e8,0,&local_24c), iVar4 == 0)) &&
      (SfPrintF(local_244,(BYTE *)"SELECT `Value` FROM `Property` WHERE `Property` = \'%s\'"),
      uVar1 = local_24c, DAT_00446d80 != 0)) &&
     ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiDatabaseOpenViewA"), pFVar3 != (FARPROC)0x0 &&
      (iVar4 = (*pFVar3)(uVar1,local_244,&uStack_250), uVar1 = uStack_250, iVar4 == 0)))) {
    if ((((DAT_00446d80 != 0) &&
         ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiViewExecute"), pFVar3 != (FARPROC)0x0 &&
          (iVar4 = (*pFVar3)(uVar1,0), uVar1 = uStack_250, iVar4 == 0)))) && (DAT_00446d80 != 0)) &&
       ((pFVar3 = GetProcAddress(DAT_00446d84,"MsiViewFetch"), pFVar3 != (FARPROC)0x0 &&
        (iVar4 = (*pFVar3)(uVar1,&uStack_248), uVar1 = uStack_248, iVar4 == 0)))) {
      if ((DAT_00446d80 != 0) &&
         (((pFVar3 = GetProcAddress(DAT_00446d84,"MsiRecordGetStringA"), pFVar3 != (FARPROC)0x0 &&
           (iVar4 = (*pFVar3)(uVar1,1,param_2,param_3), iVar4 == 0)) && (param_3 != 0)))) {
        uVar5 = 0;
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
  return uVar5;
}


