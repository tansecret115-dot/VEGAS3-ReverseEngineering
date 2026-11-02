/* Module: vegas30.exe
   Function: FUN_00607020
   Address: 00607020
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00607020(HKEY param_1,LPCSTR param_2,HKEY param_3,LPCSTR param_4)

{
  DWORD DVar1;
  LSTATUS LVar2;
  HGLOBAL pvVar3;
  LPCSTR lpValueName;
  BYTE *lpData;
  int iVar4;
  LPSTR lpName;
  code *pcVar5;
  HKEY local_144;
  SIZE_T local_140;
  SIZE_T local_13c;
  SIZE_T local_138;
  int local_134;
  HKEY local_130;
  SIZE_T local_12c;
  SIZE_T local_128;
  DWORD local_124;
  DWORD local_120;
  DWORD local_11c;
  DWORD local_118;
  DWORD local_114;
  DWORD local_110;
  _FILETIME local_10c;
  CHAR local_104 [260];
  
  local_134 = 0;
  LVar2 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_144);
  if (LVar2 != 0) {
    return false;
  }
  LVar2 = RegCreateKeyExA(param_3,param_4,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_130,(LPDWORD)0x0);
  if (LVar2 != 0) goto LAB_00607302;
  FUN_00606e10(local_130);
  local_11c = 0x104;
  LVar2 = RegQueryInfoKeyA(local_144,local_104,&local_11c,(LPDWORD)0x0,&local_118,&local_128,
                           &local_110,&local_120,&local_12c,&local_13c,&local_114,&local_10c);
  if (LVar2 == 0) {
    pcVar5 = GlobalHandle_exref;
    if (local_120 != 0) {
      local_12c = local_12c + 10;
      local_13c = local_13c + 10;
      pvVar3 = GlobalAlloc(2,local_12c);
      lpValueName = GlobalLock(pvVar3);
      pvVar3 = GlobalAlloc(2,local_13c);
      lpData = GlobalLock(pvVar3);
      local_140 = local_12c;
      local_138 = local_13c;
      iVar4 = RegEnumValueA(local_144,0,lpValueName,&local_140,(LPDWORD)0x0,&local_124,lpData,
                            &local_138);
      DVar1 = 1;
      while (iVar4 != 0x103) {
        if (((local_124 == 1) || (local_124 == 2)) || (local_124 == 7)) {
          iVar4 = lstrlenA((LPCSTR)lpData);
          local_138 = iVar4 + 1;
          if (local_138 <= local_13c) {
            lpData[iVar4] = '\0';
          }
        }
        LVar2 = RegSetValueExA(local_130,lpValueName,0,local_124,lpData,local_138);
        if (LVar2 != 0) {
          local_134 = 1;
          break;
        }
        local_140 = local_12c;
        local_138 = local_13c;
        iVar4 = RegEnumValueA(local_144,DVar1,lpValueName,&local_140,(LPDWORD)0x0,&local_124,lpData,
                              &local_138);
        DVar1 = DVar1 + 1;
      }
      pcVar5 = GlobalHandle_exref;
      pvVar3 = GlobalHandle(lpValueName);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpValueName);
      GlobalFree(pvVar3);
      pvVar3 = GlobalHandle(lpData);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpData);
      GlobalFree(pvVar3);
      if (local_134 != 0) goto LAB_006072f3;
    }
    if (local_118 != 0) {
      local_128 = local_128 + 10;
      pvVar3 = GlobalAlloc(2,local_128);
      lpName = GlobalLock(pvVar3);
      local_140 = local_128;
      iVar4 = RegEnumKeyExA(local_144,0,lpName,&local_140,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      DVar1 = 1;
      while (iVar4 != 0x103) {
        iVar4 = FUN_00607020(local_144,lpName,local_130,lpName);
        if (iVar4 == 0) {
          local_134 = 1;
          break;
        }
        local_140 = local_128;
        iVar4 = RegEnumKeyExA(local_144,DVar1,lpName,&local_140,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                              ,(PFILETIME)0x0);
        DVar1 = DVar1 + 1;
      }
      pvVar3 = (HGLOBAL)(*pcVar5)(lpName);
      GlobalUnlock(pvVar3);
      pvVar3 = (HGLOBAL)(*pcVar5)(lpName);
      GlobalFree(pvVar3);
    }
  }
LAB_006072f3:
  RegCloseKey(local_130);
LAB_00607302:
  RegCloseKey(local_144);
  return local_134 == 0;
}


