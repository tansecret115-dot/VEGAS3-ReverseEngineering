/* Module: Setup.exe
   Function: FUN_00401430
   Address: 00401430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401430(void)

{
  bool bVar1;
  int iVar2;
  HANDLE pvVar3;
  FARPROC pFVar4;
  uint uVar5;
  BYTE *pBVar6;
  char *pcVar7;
  uchar local_650 [260];
  BYTE local_54c [256];
  uchar local_44c [260];
  uchar local_348 [260];
  uchar auStack_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  iVar2 = FUN_00401980();
  switch(iVar2) {
  case 3:
  case 7:
    if ((DAT_00448648 == 0) || (iVar2 = FUN_004033d0(), iVar2 != 0)) {
      if (DAT_00448644 == 0) {
        pcVar7 = "msiexec /i %s";
      }
      else {
        pcVar7 = "msiexec /a %s";
      }
      SfPrintF(local_650,(BYTE *)pcVar7);
      if ((DAT_004476d4 == 0) &&
         (SfPrintF(local_650,(BYTE *)"%s SFAPPGRADE=\"%s\""), DAT_004476d8 == 0)) {
        SfPrintF(local_650,(BYTE *)"%s SFAPPSTYLE=\"%s\"");
      }
      FUN_004020d0((LPSTR)local_650);
      return 0;
    }
    _SfLoadString_16(DAT_00446d7c,0x88,(LPSTR)local_54c,0x100);
    SfPrintF(local_44c,local_54c);
    pBVar6 = local_54c;
    break;
  case 4:
    if ((DAT_004476d4 == 0) &&
       ((iVar2 = lstrcmpA(&DAT_004474cc,&DAT_004472c4), iVar2 != 0 ||
        (iVar2 = lstrcmpA(&DAT_004475d0,&DAT_004473c8), iVar2 != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((DAT_00446d84 == (HMODULE)0x0) || (DAT_00446d80 == 0)) {
      GetSystemDirectoryA((LPSTR)local_348,0x104);
      _mbscat(local_348,(uchar *)"\\msi.dll");
      pvVar3 = FindFirstFileA((LPCSTR)local_348,&local_140);
      if (pvVar3 == (HANDLE)0xffffffff) {
        DAT_00446d84 = (HMODULE)0x0;
      }
      else {
        DAT_00446d84 = LoadLibraryA((LPCSTR)local_348);
      }
      DAT_00446d80 = (uint)(pvVar3 != (HANDLE)0xffffffff);
      if (DAT_00446d80 == 0) goto LAB_0040164a;
    }
    pFVar4 = GetProcAddress(DAT_00446d84,"MsiSourceListClearAllA");
    if (pFVar4 != (FARPROC)0x0) {
      (*pFVar4)(&DAT_00447094,0,0);
    }
    uVar5 = FUN_00402860();
    if ((DAT_00446d80 != 0) &&
       (pFVar4 = GetProcAddress(DAT_00446d84,"MsiSourceListAddSourceA"), pFVar4 != (FARPROC)0x0)) {
      (*pFVar4)(&DAT_00447094,0,0,uVar5);
    }
LAB_0040164a:
    if (bVar1) {
      SfPrintF(local_650,
               (BYTE *)"msiexec /i %s REINSTALL=appgrades REINSTALLMODE=mus REBOOT=ReallySuppress");
      SfPrintF(local_650,(BYTE *)"%s SFAPPGRADE=\"%s\"");
      SfPrintF(local_650,(BYTE *)"%s SFAPPSTYLE=\"%s\"");
    }
    else {
      SfPrintF(local_650,(BYTE *)"msiexec /i %s REINSTALLMODE=ums");
    }
    FUN_004020d0((LPSTR)local_650);
    SfPrintF(auStack_244,(BYTE *)"dwSilentRun = %d");
    return 0;
  case 5:
    _SfLoadString_16(DAT_00446d7c,3,(LPSTR)local_54c,0x100);
    SfPrintF(local_44c,local_54c);
    _SfMessageBox_16((HWND)0x0,(LPCSTR)local_44c,&DAT_00446e8c,0x40010);
    return 1;
  case 6:
    _SfLoadString_16(DAT_00446d7c,2,(LPSTR)local_54c,0x100);
    SfPrintF(local_44c,local_54c);
    _SfMessageBox_16((HWND)0x0,(LPCSTR)local_44c,&DAT_00446e8c,0x40010);
    return 1;
  default:
    _SfLoadString_16(DAT_00446d7c,9,(LPSTR)local_54c,0x100);
    SfPrintF(local_44c,local_54c);
    pBVar6 = local_44c;
  }
  _SfMessageBox_16((HWND)0x0,(LPCSTR)pBVar6,&DAT_00446e8c,0x40010);
  return 1;
}


