/* Module: sfs4rw.dll
   Function: FUN_00403010
   Address: 00403010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403010(BYTE *param_1,DWORD param_2)

{
  BYTE BVar1;
  LSTATUS LVar2;
  LPSTR lpString;
  size_t _Size;
  char *pcVar3;
  int iVar4;
  HKEY local_1ac;
  int local_1a8;
  DWORD local_1a4;
  DWORD local_1a0;
  DWORD local_19c;
  _OSVERSIONINFOA local_198;
  CHAR local_104 [260];
  
  local_1ac = (HKEY)0x0;
  local_1a4 = 1;
  local_19c = param_2;
  iVar4 = -0x7fffbffb;
  LVar2 = RegCreateKeyExA((HKEY)0x80000002,
                          "Software\\Sonic Foundry\\Shared Information\\User Information",0,
                          (LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,&local_1ac,(LPDWORD)0x0);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueExA(local_1ac,"First Name",(LPDWORD)0x0,&local_1a4,param_1,&local_19c);
    if (LVar2 == 0) {
      iVar4 = 0;
    }
    RegCloseKey(local_1ac);
    if (-1 < iVar4) {
      return iVar4;
    }
  }
  local_1ac = (HKEY)0x0;
  pcVar3 = s_Windows_004a4844;
  local_198.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_198);
  if (local_198.dwPlatformId == 2) {
    pcVar3 = s_Windows_NT_004a484c;
  }
  wsprintfA(local_104,"SOFTWARE\\Microsoft\\%s\\CurrentVersion",pcVar3);
  LVar2 = RegOpenKeyA((HKEY)0x80000002,local_104,&local_1ac);
  if (LVar2 == 0) {
    local_1a0 = param_2;
    LVar2 = RegQueryValueExA(local_1ac,"RegisteredOwner",(LPDWORD)0x0,(LPDWORD)0x0,param_1,
                             &local_1a0);
    if (LVar2 == 0) {
      local_1a8 = 0;
      while( true ) {
        BVar1 = *param_1;
        while (((BVar1 != '\0' && (*param_1 != '\"')) &&
               (iVar4 = _ismbcspace((int)(char)*param_1), iVar4 == 0))) {
          param_1 = (BYTE *)CharNextA((LPCSTR)param_1);
          BVar1 = *param_1;
        }
        BVar1 = *param_1;
        if (BVar1 == '\0') break;
        if (BVar1 == '\"') {
          lpString = CharNextA((LPCSTR)param_1);
          _Size = 0;
          if (lpString != (LPSTR)0x0) {
            iVar4 = lstrlenA(lpString);
            _Size = iVar4 + 1;
          }
          memmove(param_1,lpString,_Size);
          if (local_1a8 == 0) {
            local_1a8 = 1;
          }
          else if (*param_1 == '\"') {
            param_1 = (BYTE *)CharNextA((LPCSTR)param_1);
          }
          else {
            local_1a8 = 0;
          }
        }
        else {
          if (local_1a8 == 0) break;
          iVar4 = _ismbcspace((int)(char)BVar1);
          while (iVar4 != 0) {
            param_1 = (BYTE *)CharNextA((LPCSTR)param_1);
            iVar4 = _ismbcspace((int)(char)*param_1);
          }
        }
      }
      if (*param_1 != '\0') {
        CharNextA((LPCSTR)param_1);
        *param_1 = '\0';
      }
      iVar4 = 0;
    }
    RegCloseKey(local_1ac);
  }
  return iVar4;
}


