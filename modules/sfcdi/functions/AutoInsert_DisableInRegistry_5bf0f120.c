/* Module: sfcdi.dll
   Function: AutoInsert_DisableInRegistry
   Address: 5bf0f120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall AutoInsert_DisableInRegistry(int) */

long AutoInsert_DisableInRegistry(int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwIndex;
  DWORD local_2b8;
  HKEY local_2b4;
  HKEY local_2b0;
  uint local_2ac;
  HKEY local_2a8;
  uint local_2a4;
  DWORD local_2a0;
  _OSVERSIONINFOA local_29c;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
                    /* 0xf120  3  ?AutoInsert_DisableInRegistry@@YGJH@Z */
  local_29c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_29c);
  if (local_29c.dwPlatformId != 2) {
    local_2b0 = (HKEY)0x0;
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Enum\\SCSI",0,0x20019,&local_2b0);
    if (LVar1 == 0) {
      local_2ac = 0;
      local_2b8 = 0x104;
      iVar2 = RegEnumKeyExA(local_2b0,0,local_104,&local_2b8,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      while (iVar2 == 0) {
        LVar1 = RegOpenKeyExA(local_2b0,local_104,0,0x20019,&local_2a8);
        if (LVar1 == 0) {
          dwIndex = 0;
          local_2b8 = 0x104;
          iVar2 = RegEnumKeyExA(local_2a8,0,local_208,&local_2b8,(LPDWORD)0x0,(LPSTR)0x0,
                                (LPDWORD)0x0,(PFILETIME)0x0);
          while (iVar2 == 0) {
            LVar1 = RegOpenKeyExA(local_2a8,local_208,0,2,&local_2b4);
            if (LVar1 == 0) {
              local_2a4 = 0;
              local_2b8 = 4;
              LVar1 = RegQueryValueExA(local_2b4,s_AutoInsertNotification_5bf6453c,(LPDWORD)0x0,
                                       &local_2a0,(LPBYTE)&local_2a4,&local_2b8);
              if (LVar1 == 0) {
                local_2a4 = (uint)(param_1 == 0);
                RegSetValueExA(local_2b4,s_AutoInsertNotification_5bf6453c,0,local_2a0,
                               (BYTE *)&local_2a4,local_2b8);
              }
              RegCloseKey(local_2b4);
            }
            dwIndex = dwIndex + 1;
            local_2b8 = 0x104;
            iVar2 = RegEnumKeyExA(local_2a8,dwIndex,local_208,&local_2b8,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
          }
          RegCloseKey(local_2a8);
        }
        local_2ac = local_2ac + 1;
        local_2b8 = 0x104;
        iVar2 = RegEnumKeyExA(local_2b0,local_2ac,local_104,&local_2b8,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
      }
      RegCloseKey(local_2b0);
      return 0;
    }
    return -0x7fffbffb;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SYSTEM\\CurrentControlSet\\Services\\CDROM",0,2,&local_2b4
                       );
  if (LVar1 == 0) {
    local_2ac = (uint)(param_1 == 0);
    RegSetValueExA(local_2b4,"AutoRun",0,4,(BYTE *)&local_2ac,4);
    RegCloseKey(local_2b4);
    return 0;
  }
  return -0x7fffbffb;
}


