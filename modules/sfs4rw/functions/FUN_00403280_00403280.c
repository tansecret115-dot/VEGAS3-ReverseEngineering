/* Module: sfs4rw.dll
   Function: FUN_00403280
   Address: 00403280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403280(uchar *param_1,DWORD param_2)

{
  uchar uVar1;
  bool bVar2;
  LSTATUS LVar3;
  uchar *puVar4;
  LPSTR pCVar5;
  size_t sVar6;
  uchar *puVar7;
  int iVar8;
  char *pcVar9;
  code *pcVar10;
  HKEY local_22c;
  uchar *local_228;
  DWORD local_224;
  DWORD local_220;
  DWORD local_21c;
  BYTE local_218 [128];
  _OSVERSIONINFOA local_198;
  CHAR local_104 [260];
  
  local_22c = (HKEY)0x0;
  local_224 = 1;
  local_220 = param_2;
  iVar8 = -0x7fffbffb;
  LVar3 = RegCreateKeyExA((HKEY)0x80000002,
                          "Software\\Sonic Foundry\\Shared Information\\User Information",0,
                          (LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,&local_22c,(LPDWORD)0x0);
  if (LVar3 == 0) {
    LVar3 = RegQueryValueExA(local_22c,"Last Name",(LPDWORD)0x0,&local_224,param_1,&local_220);
    if (LVar3 == 0) {
      iVar8 = 0;
    }
    RegCloseKey(local_22c);
    if (-1 < iVar8) {
      return iVar8;
    }
  }
  local_22c = (HKEY)0x0;
  pcVar9 = s_Windows_004a4858;
  local_198.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_198);
  if (local_198.dwPlatformId == 2) {
    pcVar9 = s_Windows_NT_004a4860;
  }
  wsprintfA(local_104,"SOFTWARE\\Microsoft\\%s\\CurrentVersion",pcVar9);
  LVar3 = RegOpenKeyA((HKEY)0x80000002,local_104,&local_22c);
  if (LVar3 == 0) {
    local_21c = param_2;
    LVar3 = RegQueryValueExA(local_22c,"RegisteredOwner",(LPDWORD)0x0,(LPDWORD)0x0,local_218,
                             &local_21c);
    if (LVar3 == 0) {
      local_228 = local_218;
      puVar4 = local_218;
      bVar2 = false;
      while( true ) {
        uVar1 = *puVar4;
        pcVar10 = _ismbcspace_exref;
        while (((_ismbcspace_exref = pcVar10, uVar1 != '\0' && (*puVar4 != '\"')) &&
               (iVar8 = _ismbcspace((int)(char)*puVar4), iVar8 == 0))) {
          puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
          uVar1 = *puVar4;
          pcVar10 = _ismbcspace_exref;
        }
        uVar1 = *puVar4;
        if (uVar1 == '\0') break;
        if (uVar1 == '\"') {
          pCVar5 = CharNextA((LPCSTR)puVar4);
          sVar6 = 0;
          if (pCVar5 != (LPSTR)0x0) {
            iVar8 = lstrlenA(pCVar5);
            sVar6 = iVar8 + 1;
          }
          memmove(puVar4,pCVar5,sVar6);
          if (bVar2) {
            if (*puVar4 == '\"') {
              puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = true;
          }
        }
        else {
          if (!bVar2) break;
          iVar8 = (*pcVar10)((int)(char)uVar1);
          while (iVar8 != 0) {
            puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
            iVar8 = (*pcVar10)((int)(char)*puVar4);
          }
        }
      }
      puVar7 = puVar4;
      if (*puVar4 != '\0') {
        puVar7 = (uchar *)CharNextA((LPCSTR)puVar4);
        *puVar4 = '\0';
      }
      uVar1 = *puVar7;
      while (uVar1 != '\0') {
        puVar4 = local_218;
        bVar2 = false;
        local_228 = puVar7;
        while( true ) {
          uVar1 = *puVar4;
          while (((uVar1 != '\0' && (*puVar4 != '\"')) &&
                 (iVar8 = (*pcVar10)((int)(char)*puVar4), iVar8 == 0))) {
            puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
            uVar1 = *puVar4;
          }
          uVar1 = *puVar4;
          if (uVar1 == '\0') break;
          if (uVar1 == '\"') {
            pCVar5 = CharNextA((LPCSTR)puVar4);
            sVar6 = 0;
            if (pCVar5 != (LPSTR)0x0) {
              iVar8 = lstrlenA(pCVar5);
              sVar6 = iVar8 + 1;
            }
            memmove(puVar4,pCVar5,sVar6);
            pcVar10 = _ismbcspace_exref;
            if (bVar2) {
              if (*puVar4 == '\"') {
                puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
                pcVar10 = _ismbcspace_exref;
              }
              else {
                bVar2 = false;
              }
            }
            else {
              bVar2 = true;
            }
          }
          else {
            if (!bVar2) break;
            iVar8 = (*pcVar10)((int)(char)uVar1);
            while (iVar8 != 0) {
              puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
              iVar8 = (*pcVar10)((int)(char)*puVar4);
            }
          }
        }
        puVar7 = puVar4;
        if (*puVar4 != '\0') {
          puVar7 = (uchar *)CharNextA((LPCSTR)puVar4);
          *puVar4 = '\0';
        }
        uVar1 = *puVar7;
      }
      _mbscpy(param_1,local_228);
      iVar8 = 0;
    }
    RegCloseKey(local_22c);
  }
  return iVar8;
}


