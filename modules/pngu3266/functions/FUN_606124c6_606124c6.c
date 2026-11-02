/* Module: pngu3266.dll
   Function: FUN_606124c6
   Address: 606124c6
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_606124c6(void)

{
  int iVar1;
  DWORD *pDVar2;
  _OSVERSIONINFOA local_98;
  
  pDVar2 = &local_98.dwMajorVersion;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  return local_98.dwPlatformId == 2;
}


