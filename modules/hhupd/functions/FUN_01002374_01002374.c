/* Module: hhupd.exe
   Function: FUN_01002374
   Address: 01002374
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002374(LPBYTE param_1,HKEY param_2,char *param_3)

{
  LPBYTE lpData;
  LPSTR pCVar1;
  LPSTR lpsz;
  char *pcVar2;
  LSTATUS LVar3;
  LPCSTR lpsz_00;
  CHAR local_10c [260];
  int local_8;
  
  lpData = param_1;
  local_8 = 0;
  *param_1 = '\0';
  pcVar2 = param_3;
  if (*param_3 == '#') {
    lpsz_00 = param_3 + 1;
    pCVar1 = CharUpperA((LPSTR)(int)param_3[1]);
    lpsz = CharNextA(lpsz_00);
    pcVar2 = CharNextA(lpsz);
    if ((char)pCVar1 != 'S') {
      if ((char)pCVar1 == 'W') {
        GetWindowsDirectoryA((LPSTR)lpData,(UINT)param_2);
      }
      else {
        param_1 = (LPBYTE)0x104;
        lstrcpyA(local_10c,"Software\\Microsoft\\Windows\\CurrentVersion\\App Paths");
        FUN_010059ea(local_10c,pcVar2);
        LVar3 = RegOpenKeyExA((HKEY)0x80000002,local_10c,0,0x20019,&param_2);
        if (LVar3 == 0) {
          LVar3 = RegQueryValueExA(param_2,"",(LPDWORD)0x0,(LPDWORD)0x0,lpData,(LPDWORD)&param_1);
          if (LVar3 == 0) {
            local_8 = 1;
          }
          RegCloseKey(param_2);
        }
      }
      goto LAB_0100244a;
    }
  }
  GetSystemDirectoryA((LPSTR)lpData,(UINT)param_2);
LAB_0100244a:
  if (local_8 == 0) {
    FUN_010059ea((LPCSTR)lpData,pcVar2);
  }
  return 1;
}


