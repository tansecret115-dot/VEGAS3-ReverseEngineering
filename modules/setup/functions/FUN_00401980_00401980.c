/* Module: Setup.exe
   Function: FUN_00401980
   Address: 00401980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401980(void)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  int iVar4;
  int iVar5;
  int iStack_464;
  undefined4 local_460;
  int aiStack_45c [3];
  int aiStack_450 [3];
  char acStack_444 [256];
  uchar local_344 [260];
  uchar auStack_240 [256];
  _WIN32_FIND_DATAA local_140;
  
  FUN_00402860();
  if (DAT_00448644 != 0) {
    return 7;
  }
  if ((DAT_00446d84 == (HMODULE)0x0) || (DAT_00446d80 == 0)) {
    GetSystemDirectoryA((LPSTR)local_344,0x104);
    _mbscat(local_344,(uchar *)"\\msi.dll");
    pvVar2 = FindFirstFileA((LPCSTR)local_344,&local_140);
    if (pvVar2 == (HANDLE)0xffffffff) {
      DAT_00446d84 = (HMODULE)0x0;
    }
    else {
      DAT_00446d84 = LoadLibraryA((LPCSTR)local_344);
    }
    DAT_00446d80 = (uint)(pvVar2 != (HANDLE)0xffffffff);
    if (DAT_00446d80 == 0) {
      return -1;
    }
  }
  iVar5 = 3;
  if (DAT_00446d80 != 0) {
    pFVar3 = GetProcAddress(DAT_00446d84,"MsiOpenProductA");
    if (pFVar3 != (FARPROC)0x0) {
      iVar4 = (*pFVar3)(&DAT_00447094,&local_460);
      uVar1 = local_460;
      if (iVar4 == 0) {
        iStack_464 = 0x100;
        if (DAT_00446d80 != 0) {
          pFVar3 = GetProcAddress(DAT_00446d84,"MsiGetProductPropertyA");
          if (pFVar3 != (FARPROC)0x0) {
            iVar4 = (*pFVar3)(uVar1,"ProductVersion",acStack_444,&iStack_464);
            if ((iVar4 == 0) && (iStack_464 != 0)) {
              iVar5 = FUN_00401810(acStack_444,aiStack_45c);
              if (iVar5 != 1) {
                SfPrintF(auStack_240,(BYTE *)"Existing Product Version format is incorrect: %s ");
                return iVar5;
              }
              iVar5 = FUN_00401810(&DAT_004471c0,aiStack_450);
              if (iVar5 != 1) {
                SfPrintF(auStack_240,(BYTE *)"Installer Product Version format is incorrect: %s ");
                return iVar5;
              }
              iVar5 = FUN_00401930(aiStack_45c,aiStack_450);
              SfPrintF(auStack_240,(BYTE *)"%s | %s = %d");
              if (iVar5 == 0) {
                iVar5 = 4;
              }
              else {
                iVar5 = (iVar5 < 1) + 5;
              }
            }
          }
        }
      }
    }
  }
  if (DAT_00446d80 != 0) {
    pFVar3 = GetProcAddress(DAT_00446d84,"MsiCloseHandle");
    if (pFVar3 != (FARPROC)0x0) {
      (*pFVar3)(local_460);
    }
  }
  return iVar5;
}


