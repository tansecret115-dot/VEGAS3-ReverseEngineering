/* Module: Setup.exe
   Function: FUN_00401bc0
   Address: 00401bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401bc0(uchar *param_1)

{
  HANDLE pvVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_44c;
  uchar local_448 [260];
  BYTE local_344 [256];
  CHAR local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  local_44c = 0x104;
  if ((DAT_00446d84 == (HMODULE)0x0) || (DAT_00446d80 == (HMODULE)0x0)) {
    GetSystemDirectoryA((LPSTR)local_448,0x104);
    _mbscat(local_448,(uchar *)"\\msi.dll");
    pvVar1 = FindFirstFileA((LPCSTR)local_448,&local_140);
    if (pvVar1 == (HANDLE)0xffffffff) {
      DAT_00446d84 = (HMODULE)0x0;
    }
    else {
      DAT_00446d84 = LoadLibraryA((LPCSTR)local_448);
    }
    DAT_00446d80 = (HMODULE)(uint)(pvVar1 != (HANDLE)0xffffffff);
    if (DAT_00446d80 != (HMODULE)0x0) goto LAB_00401c51;
    _SfLoadString_16(DAT_00446d7c,6,(LPSTR)local_344,0x100);
  }
  else {
LAB_00401c51:
    GetSystemDirectoryA((LPSTR)local_448,0x104);
    _mbscat(local_448,(uchar *)"\\msi.dll");
    if (DAT_00446d80 != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(DAT_00446d84,"MsiGetFileVersionA");
      if (pFVar2 != (FARPROC)0x0) {
        (*pFVar2)(local_448,local_244,&local_44c,0,0);
      }
    }
    iVar3 = lstrcmpA(local_244,"1.20.1827.0");
    if (-1 < iVar3) {
      uVar4 = 1;
      goto LAB_00401d2c;
    }
    _SfLoadString_16(DAT_00446d7c,5,(LPSTR)local_344,0x100);
  }
  SfPrintF(param_1,local_344);
  uVar4 = 0;
LAB_00401d2c:
  if (DAT_00446d84 == (HMODULE)0x0) {
    DAT_00446d80 = DAT_00446d84;
    return uVar4;
  }
  DAT_00446d80 = (HMODULE)FreeLibrary(DAT_00446d84);
  DAT_00446d84 = (HMODULE)0x0;
  return uVar4;
}


