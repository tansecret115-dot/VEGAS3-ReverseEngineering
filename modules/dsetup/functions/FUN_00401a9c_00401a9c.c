/* Module: dsetup.dll
   Function: FUN_00401a9c
   Address: 00401a9c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401a9c(undefined4 *param_1)

{
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  char *lpOutputString;
  CHAR local_3a4 [260];
  CHAR local_2a0 [260];
  CHAR local_19c [260];
  _OSVERSIONINFOA local_98;
  
  GetCurrentDirectoryA(0x104,local_3a4);
  GetSystemDirectoryA(local_19c,0x104);
  SetCurrentDirectoryA(local_19c);
  *param_1 = 0;
  param_1[1] = 0;
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if (BVar1 == 0) goto LAB_00401bb2;
  if (local_98.dwPlatformId == 2) {
    if (local_98.dwMajorVersion < 4) goto LAB_00401bb2;
    if (local_98.dwMajorVersion == 4) {
      *param_1 = 0x40002;
      lstrcpyA(local_2a0,local_19c);
      lstrcatA(local_2a0,"\\DINPUT.DLL");
      hModule = LoadLibraryA(local_2a0);
      if (hModule == (HMODULE)0x0) {
        lpOutputString = "Couldn\'t LoadLibrary DInput\r\n";
      }
      else {
        pFVar2 = GetProcAddress(hModule,"DirectInputCreateA");
        FreeLibrary(hModule);
        if (pFVar2 != (FARPROC)0x0) {
          *param_1 = 0x40003;
          goto LAB_00401bb2;
        }
        lpOutputString = "Couldn\'t GetProcAddress DInputCreate\r\n";
      }
      OutputDebugStringA(lpOutputString);
      goto LAB_00401bb2;
    }
    *param_1 = 0x40006;
  }
  else {
    if (0x549 < (local_98.dwBuildNumber & 0xffff)) {
      *param_1 = 0x40005;
      param_1[1] = 0x10000;
      goto LAB_00401bb2;
    }
    *param_1 = 0;
  }
  param_1[1] = 0;
LAB_00401bb2:
  SetCurrentDirectoryA(local_3a4);
  return 1;
}


