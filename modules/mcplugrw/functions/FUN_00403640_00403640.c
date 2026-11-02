/* Module: mcplugrw.dll
   Function: FUN_00403640
   Address: 00403640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403640(LPBYTE param_1,DWORD param_2)

{
  LSTATUS LVar1;
  int iVar2;
  char *pcVar3;
  HKEY local_1a8;
  DWORD local_1a4;
  DWORD local_1a0;
  DWORD local_19c;
  _OSVERSIONINFOA local_198;
  CHAR local_104 [260];
  
  local_1a8 = (HKEY)0x0;
  local_1a4 = 1;
  local_19c = param_2;
  iVar2 = -0x7fffbffb;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,
                          "Software\\Sonic Foundry\\Shared Information\\User Information",0,
                          (LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,&local_1a8,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_1a8,"Company Name",(LPDWORD)0x0,&local_1a4,param_1,&local_19c);
    if (LVar1 == 0) {
      iVar2 = 0;
    }
    RegCloseKey(local_1a8);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  local_1a8 = (HKEY)0x0;
  pcVar3 = s_Windows_004a486c;
  local_198.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_198);
  if (local_198.dwPlatformId == 2) {
    pcVar3 = s_Windows_NT_004a4874;
  }
  wsprintfA(local_104,"SOFTWARE\\Microsoft\\%s\\CurrentVersion",pcVar3);
  LVar1 = RegOpenKeyA((HKEY)0x80000002,local_104,&local_1a8);
  if (LVar1 == 0) {
    local_1a0 = param_2;
    LVar1 = RegQueryValueExA(local_1a8,"RegisteredOrganization",(LPDWORD)0x0,(LPDWORD)0x0,param_1,
                             &local_1a0);
    if (LVar1 == 0) {
      iVar2 = 0;
    }
    RegCloseKey(local_1a8);
  }
  return iVar2;
}


