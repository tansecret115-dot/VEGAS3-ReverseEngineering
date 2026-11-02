/* Module: wmfplug2.dll
   Function: FUN_0041d810
   Address: 0041d810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d810(void)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_4;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x20019,
                        &local_4);
  if (LVar1 == 0) {
    iVar2 = FUN_0041d140(local_4);
    if (iVar2 != 0) {
      RegCloseKey(local_4);
      return 0;
    }
    RegCloseKey(local_4);
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ac,0,0x20019,
                        &local_4);
  if (LVar1 == 0) {
    iVar2 = FUN_0041d140(local_4);
    if (iVar2 != 0) {
      RegCloseKey(local_4);
      return 0;
    }
    RegCloseKey(local_4);
  }
  return 0x80004005;
}


