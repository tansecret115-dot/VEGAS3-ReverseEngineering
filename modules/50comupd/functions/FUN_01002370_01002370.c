/* Module: 50comupd.exe
   Function: FUN_01002370
   Address: 01002370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002370(LPBYTE param_1,UINT param_2,HKEY param_3)

{
  int *piVar1;
  LPSTR pCVar2;
  LPSTR lpsz;
  HKEY pHVar3;
  LSTATUS LVar4;
  DWORD DVar5;
  CHAR local_110 [260];
  DWORD local_c;
  int local_8;
  
  local_8 = 0;
  *param_1 = '\0';
  pHVar3 = param_3;
  if ((char)param_3->unused == '#') {
    piVar1 = &param_3->unused;
    pCVar2 = CharUpperA((LPSTR)(int)*(char *)((int)&param_3->unused + 1));
    lpsz = CharNextA((LPCSTR)((int)piVar1 + 1));
    pHVar3 = (HKEY)CharNextA(lpsz);
    if ((char)pCVar2 != 'S') {
      if ((char)pCVar2 == 'W') {
        GetWindowsDirectoryA((LPSTR)param_1,param_2);
        goto LAB_0100248e;
      }
      local_c = 0x104;
      lstrcpyA(local_110,"Software\\Microsoft\\Windows\\CurrentVersion\\App Paths");
      FUN_01005a84(local_110,(LPCSTR)pHVar3);
      LVar4 = RegOpenKeyExA((HKEY)0x80000002,local_110,0,0x20019,&param_3);
      if (LVar4 != 0) goto LAB_0100248e;
      LVar4 = RegQueryValueExA(param_3,"",(LPDWORD)0x0,&param_2,param_1,&local_c);
      if (LVar4 == 0) {
        if ((param_2 == 2) &&
           (DVar5 = ExpandEnvironmentStringsA((LPCSTR)param_1,local_110,0x104), DVar5 != 0)) {
          lstrcpyA((LPSTR)param_1,local_110);
        }
        else if (param_2 != 1) goto LAB_01002463;
        local_8 = 1;
      }
LAB_01002463:
      RegCloseKey(param_3);
      goto LAB_0100248e;
    }
  }
  GetSystemDirectoryA((LPSTR)param_1,param_2);
LAB_0100248e:
  if (local_8 == 0) {
    FUN_01005a84((LPCSTR)param_1,(LPCSTR)pHVar3);
  }
  return 1;
}


