/* Module: sfpaplug.dll
   Function: FUN_00417490
   Address: 00417490
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00417490(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0045c618 == 0) {
    DAT_0045c618 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0045c358 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0045c358;
}


