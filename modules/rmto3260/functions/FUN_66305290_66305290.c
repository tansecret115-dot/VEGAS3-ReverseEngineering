/* Module: rmto3260.dll
   Function: FUN_66305290
   Address: 66305290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66305290(void)

{
  DWORD DVar1;
  LSTATUS LVar2;
  _union_530 local_2c [9];
  HKEY local_8;
  
  DVar1 = GetVersion();
  if ((DVar1 & 0x7fffffff) == 0) {
    return 0;
  }
  GetSystemInfo((LPSYSTEM_INFO)&local_2c[0].s);
  if (local_2c[0].s.wProcessorArchitecture == 0) {
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,s_HARDWARE_DESCRIPTION_System_Floa_66311c40,0,0x20019,
                          &local_8);
    if (LVar2 != 0) {
      return 0;
    }
    RegCloseKey(local_8);
  }
  return 1;
}


