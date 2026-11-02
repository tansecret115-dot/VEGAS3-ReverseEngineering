/* Module: Setup.exe
   Function: FUN_0042e650
   Address: 0042e650
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0042e650(HKEY param_1,LPCSTR param_2,HKEY param_3,LPCSTR param_4)

{
  DWORD DVar1;
  bool bVar2;
  LSTATUS LVar3;
  HGLOBAL pvVar4;
  LPCSTR pCVar5;
  BYTE *lpData;
  int iVar6;
  undefined3 extraout_var;
  code *pcVar7;
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
  LVar3 = RegOpenKeyExA(param_1,param_2,0,0x20019,&local_144);
  if (LVar3 != 0) {
    return false;
  }
  LVar3 = RegCreateKeyExA(param_3,param_4,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_130,(LPDWORD)0x0);
  if (LVar3 != 0) goto LAB_0042e932;
  FUN_0042e440((int)local_130);
  local_11c = 0x104;
  LVar3 = RegQueryInfoKeyA(local_144,local_104,&local_11c,(LPDWORD)0x0,&local_118,&local_128,
                           &local_110,&local_120,&local_12c,&local_13c,&local_114,&local_10c);
  if (LVar3 == 0) {
    pcVar7 = GlobalHandle_exref;
    if (local_120 != 0) {
      local_12c = local_12c + 10;
      local_13c = local_13c + 10;
      pvVar4 = GlobalAlloc(2,local_12c);
      pCVar5 = GlobalLock(pvVar4);
      pvVar4 = GlobalAlloc(2,local_13c);
      lpData = GlobalLock(pvVar4);
      local_140 = local_12c;
      local_138 = local_13c;
      iVar6 = RegEnumValueA(local_144,0,pCVar5,&local_140,(LPDWORD)0x0,&local_124,lpData,&local_138)
      ;
      DVar1 = 1;
      while (iVar6 != 0x103) {
        if (((local_124 == 1) || (local_124 == 2)) || (local_124 == 7)) {
          iVar6 = lstrlenA((LPCSTR)lpData);
          local_138 = iVar6 + 1;
          if (local_138 <= local_13c) {
            lpData[iVar6] = '\0';
          }
        }
        LVar3 = RegSetValueExA(local_130,pCVar5,0,local_124,lpData,local_138);
        if (LVar3 != 0) {
          local_134 = 1;
          break;
        }
        local_140 = local_12c;
        local_138 = local_13c;
        iVar6 = RegEnumValueA(local_144,DVar1,pCVar5,&local_140,(LPDWORD)0x0,&local_124,lpData,
                              &local_138);
        DVar1 = DVar1 + 1;
      }
      pcVar7 = GlobalHandle_exref;
      pvVar4 = GlobalHandle(pCVar5);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pCVar5);
      GlobalFree(pvVar4);
      pvVar4 = GlobalHandle(lpData);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(lpData);
      GlobalFree(pvVar4);
      if (local_134 != 0) goto LAB_0042e923;
    }
    if (local_118 != 0) {
      local_128 = local_128 + 10;
      pvVar4 = GlobalAlloc(2,local_128);
      pCVar5 = GlobalLock(pvVar4);
      local_140 = local_128;
      iVar6 = RegEnumKeyExA(local_144,0,pCVar5,&local_140,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      DVar1 = 1;
      while (iVar6 != 0x103) {
        bVar2 = FUN_0042e650(local_144,pCVar5,local_130,pCVar5);
        if (CONCAT31(extraout_var,bVar2) == 0) {
          local_134 = 1;
          break;
        }
        local_140 = local_128;
        iVar6 = RegEnumKeyExA(local_144,DVar1,pCVar5,&local_140,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                              ,(PFILETIME)0x0);
        DVar1 = DVar1 + 1;
      }
      pvVar4 = (HGLOBAL)(*pcVar7)(pCVar5);
      GlobalUnlock(pvVar4);
      pvVar4 = (HGLOBAL)(*pcVar7)(pCVar5);
      GlobalFree(pvVar4);
    }
  }
LAB_0042e923:
  RegCloseKey(local_130);
LAB_0042e932:
  RegCloseKey(local_144);
  return local_134 == 0;
}


