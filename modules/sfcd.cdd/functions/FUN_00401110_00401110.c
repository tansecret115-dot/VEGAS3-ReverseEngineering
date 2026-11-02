/* Module: sfcd.cdd
   Function: FUN_00401110
   Address: 00401110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00401110(HMODULE param_1)

{
  int3 extraout_var;
  int iVar1;
  DWORD *pDVar2;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  _DAT_004418f0 = param_1;
  pDVar2 = &local_94.dwMajorVersion;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  GetVersionExA(&local_94);
  _DAT_00441900 = local_94.dwMajorVersion;
  DAT_004418fc = (uint)(local_94.dwPlatformId == 2);
  FUN_00401100();
  FUN_0041eba0(param_1);
  return -1 < extraout_var;
}


