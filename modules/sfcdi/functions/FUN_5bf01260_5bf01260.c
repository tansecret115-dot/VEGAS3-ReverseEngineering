/* Module: sfcdi.dll
   Function: FUN_5bf01260
   Address: 5bf01260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5bf01260(HMODULE param_1)

{
  int3 extraout_var;
  char *lpString1;
  int iVar1;
  _OSVERSIONINFOA *p_Var2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  _OSVERSIONINFOA local_198;
  CHAR local_104 [260];
  
  local_198.dwOSVersionInfoSize = 0x94;
  pDVar4 = &local_198.dwMajorVersion;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar4 = 0;
    pDVar4 = pDVar4 + 1;
  }
  puVar3 = &DAT_5bf65e20;
  for (iVar1 = 0x77; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_5bf65eb8 = param_1;
  GetVersionExA(&local_198);
  DAT_5bf65e20 = (uint)(local_198.dwPlatformId == 2);
  p_Var2 = &local_198;
  pDVar4 = &DAT_5bf65e24;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar4 = p_Var2->dwOSVersionInfoSize;
    p_Var2 = (_OSVERSIONINFOA *)&p_Var2->dwMajorVersion;
    pDVar4 = pDVar4 + 1;
  }
  FUN_5bf22fa0(param_1);
  if (extraout_var < 0) {
    return false;
  }
  GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
  lpString1 = FUN_5bf230b0(local_104);
  iVar1 = lstrcmpiA(lpString1,"RunDLL32.exe");
  if (iVar1 == 0) {
    _DAT_5bf76054 = 1;
    return true;
  }
  FUN_5bf22040(&DAT_5bf76074,"CD Interface",0x2000001,0x5bf553b0);
  DAT_5bf65ff8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"SonicFoundrySFCDISharedMutex");
  return DAT_5bf65ff8 != (HANDLE)0x0;
}


