/* Module: wmfdist2.exe
   Function: FUN_01005dd2
   Address: 01005dd2
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01005dd2(void)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  LSTATUS LVar4;
  undefined3 extraout_var;
  _OSVERSIONINFOA local_b4;
  BYTE local_20 [12];
  DWORD local_14 [2];
  uint local_c;
  HKEY local_8;
  
  local_c = 0;
  local_14[1] = 0xc;
  if (DAT_0100a308 == -2) {
    DAT_0100a308 = 0;
    local_b4.dwOSVersionInfoSize = 0x94;
    BVar2 = GetVersionExA(&local_b4);
    if ((((BVar2 != 0) && (local_b4.dwPlatformId == 1)) && (local_b4.dwMajorVersion == 4)) &&
       (local_b4.dwMinorVersion < 10)) {
      iVar3 = GetSystemMetrics(0x4a);
      if (iVar3 != 0) {
        LVar4 = RegOpenKeyExA((HKEY)0x80000001,"Control Panel\\Desktop\\ResourceLocale",0,0x20019,
                              &local_8);
        if (LVar4 == 0) {
          LVar4 = RegQueryValueExA(local_8,"",(LPDWORD)0x0,local_14,local_20,local_14 + 1);
          RegCloseKey(local_8);
          if (LVar4 == 0) {
            bVar1 = FUN_01005cc9((LPCSTR)local_20,(int *)&local_c);
            if ((CONCAT31(extraout_var,bVar1) != 0) &&
               (((local_c & 0x3ff) == 1 || ((local_c & 0x3ff) == 0xd)))) {
              DAT_0100a308 = 1;
            }
          }
        }
      }
    }
  }
  return DAT_0100a308;
}


