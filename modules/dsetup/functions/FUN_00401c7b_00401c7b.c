/* Module: dsetup.dll
   Function: FUN_00401c7b
   Address: 00401c7b
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401c7b(LPCSTR param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  CHAR local_20c [260];
  CHAR local_108 [260];
  
  iVar1 = FUN_00401c0e();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_0040aa60 == (HMODULE)0x0) {
    GetCurrentDirectoryA(0x104,local_20c);
    GetModuleFileNameA(DAT_0040aa5c,local_108,0x104);
    pcVar2 = FUN_00401c14(local_108);
    pcVar2[-1] = '\0';
    if ((param_1 != (LPCSTR)0x0) && (iVar1 = lstrlenA(param_1), iVar1 == 0)) {
      lstrcpyA(param_1,local_108);
    }
    SetCurrentDirectoryA(local_108);
    lstrcatA(local_108,"\\");
    lstrcatA(local_108,"DSETUP32.DLL");
    DAT_0040aa60 = LoadLibraryA(local_108);
    SetCurrentDirectoryA(local_20c);
    if (DAT_0040aa60 == (HMODULE)0x0) goto LAB_00401e25;
  }
  if (DAT_0040aa80 == (FARPROC)0x0) {
    DAT_0040aa80 = GetProcAddress(DAT_0040aa60,"iDirectXSetup");
  }
  if (DAT_0040aa58 == (FARPROC)0x0) {
    DAT_0040aa58 = GetProcAddress(DAT_0040aa60,"iDirectXDeviceDriverSetup");
  }
  if ((DAT_0040aa7c != (FARPROC)0x0) ||
     (DAT_0040aa7c = GetProcAddress(DAT_0040aa60,"DirectXSetupCallback"),
     DAT_0040aa7c != (FARPROC)0x0)) {
    if (DAT_0040aa84 == (FARPROC)0x0) {
      DAT_0040aa84 = GetProcAddress(DAT_0040aa60,"DirectXSetupSetCallback");
      if (DAT_0040aa84 == (FARPROC)0x0) goto LAB_00401e25;
      (*DAT_0040aa84)(DAT_0040aa68);
    }
    if ((((DAT_0040aa88 != (FARPROC)0x0) ||
         (DAT_0040aa88 = GetProcAddress(DAT_0040aa60,"DirectXLoadString"),
         DAT_0040aa88 != (FARPROC)0x0)) &&
        ((DAT_0040aa8c != (FARPROC)0x0 ||
         (DAT_0040aa8c = GetProcAddress(DAT_0040aa60,"DirectXSetupShowEULA"),
         DAT_0040aa8c != (FARPROC)0x0)))) &&
       ((DAT_0040aa80 != (FARPROC)0x0 && (DAT_0040aa58 != (FARPROC)0x0)))) {
      return 1;
    }
  }
LAB_00401e25:
  *param_2 = 0xfffffff7;
  return 0;
}


