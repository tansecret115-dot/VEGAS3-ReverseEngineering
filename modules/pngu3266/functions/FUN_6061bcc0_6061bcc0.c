/* Module: pngu3266.dll
   Function: FUN_6061bcc0
   Address: 6061bcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6061bcc0(void *param_1,longlong *param_2)

{
  BOOL BVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  _OSVERSIONINFOA local_f0;
  int local_5c [13];
  undefined1 local_28 [4];
  uint local_24;
  undefined1 local_20 [4];
  uint local_1c;
  LPCSTR local_18 [3];
  undefined4 local_c;
  DWORD local_8;
  
  FUN_6061c3d0(param_1,local_5c);
  FUN_6061c3b0(local_5c,local_18);
  uVar4 = 0x80004005;
  local_f0.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_f0);
  if ((local_f0.dwPlatformId == 1) && ((ushort)local_f0.dwBuildNumber < 0x3e9)) {
    BVar1 = GetDiskFreeSpaceA(local_18[0],(LPDWORD)&param_1,&local_1c,&local_8,&local_24);
    if (BVar1 != 0) {
      FUN_60618cd0((int *)local_18);
      thunk_FUN_60618cd0(local_5c);
      return 0x80004005;
    }
    lVar5 = __allmul(local_24,0,(uint)param_1,0);
    lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),local_1c,0);
    *param_2 = lVar5;
  }
  else {
    hModule = LoadLibraryA(s_kernel32_dll_606496b8);
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,s_GetDiskFreeSpaceExA_606496a4);
      if (pFVar2 != (FARPROC)0x0) {
        iVar3 = (*pFVar2)(local_18[0],local_28,&local_c,local_20);
        if (iVar3 != 0) {
          uVar4 = 0;
          *(undefined4 *)param_2 = local_c;
          *(DWORD *)((int)param_2 + 4) = local_8;
        }
      }
      FreeLibrary(hModule);
    }
  }
  FUN_60618cd0((int *)local_18);
  thunk_FUN_60618cd0(local_5c);
  return uVar4;
}


