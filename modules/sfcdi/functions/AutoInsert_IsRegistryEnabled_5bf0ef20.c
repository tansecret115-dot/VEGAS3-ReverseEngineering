/* Module: sfcdi.dll
   Function: AutoInsert_IsRegistryEnabled
   Address: 5bf0ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall AutoInsert_IsRegistryEnabled(void) */

int AutoInsert_IsRegistryEnabled(void)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwIndex;
  HKEY local_2b8;
  HKEY local_2b4;
  DWORD local_2b0;
  HKEY local_2ac;
  HKEY local_2a8;
  int local_2a4;
  DWORD local_2a0;
  _OSVERSIONINFOA local_29c;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
                    /* 0xef20  6  ?AutoInsert_IsRegistryEnabled@@YGHXZ */
  iVar2 = 0;
  local_29c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_29c);
  if (local_29c.dwPlatformId == 2) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SYSTEM\\CurrentControlSet\\Services\\CDROM",0,1,
                          &local_2b4);
    if (LVar1 == 0) {
      local_2b8 = (HKEY)0x1;
      local_2ac = (HKEY)0x4;
      RegQueryValueExA(local_2b4,"AutoRun",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_2b8,
                       (LPDWORD)&local_2ac);
      RegCloseKey(local_2b4);
      return (uint)(local_2b8 != (HKEY)0x0);
    }
  }
  else {
    local_2a8 = (HKEY)0x0;
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Enum\\SCSI",0,0x20019,&local_2a8);
    if (LVar1 == 0) {
      local_2b4 = (HKEY)0x0;
      do {
        local_2b0 = 0x104;
        LVar1 = RegEnumKeyExA(local_2a8,(DWORD)local_2b4,local_208,&local_2b0,(LPDWORD)0x0,
                              (LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
        if (LVar1 != 0) break;
        LVar1 = RegOpenKeyExA(local_2a8,local_208,0,0x20019,&local_2b8);
        if (LVar1 == 0) {
          dwIndex = 0;
          while (iVar2 == 0) {
            local_2b0 = 0x104;
            LVar1 = RegEnumKeyExA(local_2b8,dwIndex,local_104,&local_2b0,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
            if (LVar1 != 0) break;
            LVar1 = RegOpenKeyExA(local_2b8,local_104,0,0x20019,&local_2ac);
            if (LVar1 == 0) {
              local_2a4 = 0;
              local_2b0 = 4;
              LVar1 = RegQueryValueExA(local_2ac,s_AutoInsertNotification_5bf6453c,(LPDWORD)0x0,
                                       &local_2a0,(LPBYTE)&local_2a4,&local_2b0);
              if ((LVar1 == 0) && (local_2a4 != 0)) {
                iVar2 = 1;
              }
              RegCloseKey(local_2ac);
            }
            dwIndex = dwIndex + 1;
          }
          RegCloseKey(local_2b8);
        }
        local_2b4 = (HKEY)((int)&local_2b4->unused + 1);
      } while (iVar2 == 0);
      RegCloseKey(local_2a8);
      return iVar2;
    }
  }
  return 0;
}


