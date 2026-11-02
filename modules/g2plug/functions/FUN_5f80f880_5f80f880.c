/* Module: g2plug.dll
   Function: FUN_5f80f880
   Address: 5f80f880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80f880(HWND param_1,int param_2,int param_3)

{
  LSTATUS LVar1;
  char *lpSubKey;
  HKEY local_360;
  HKEY local_35c;
  DWORD local_358;
  int local_354;
  DWORD local_350;
  DWORD local_34c;
  uint local_348;
  CLSID local_344;
  CHAR local_334 [40];
  CHAR local_30c [260];
  WCHAR local_208 [260];
  
  if (param_2 == 0) {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom";
  }
  else {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\System";
  }
  LVar1 = RegOpenKeyA((HKEY)0x80000002,lpSubKey,&local_360);
  if (LVar1 == 0) {
    LVar1 = RegQueryInfoKeyA(local_360,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_348,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (PFILETIME)0x0);
    if ((LVar1 == 0) && (local_350 = 0, local_348 != 0)) {
      local_350 = 0;
      do {
        LVar1 = RegEnumKeyA(local_360,local_350,local_334,0x28);
        if ((LVar1 == 0) && (LVar1 = RegOpenKeyA(local_360,local_334,&local_35c), LVar1 == 0)) {
          if (param_2 == 0) {
            local_358 = 4;
            LVar1 = RegQueryValueExA(local_35c,"System",(LPDWORD)0x0,&local_34c,(LPBYTE)&local_354,
                                     &local_358);
            if ((LVar1 != 0) || (local_354 == 0)) goto LAB_5f80f97b;
          }
          else {
LAB_5f80f97b:
            if ((param_3 != 0) ||
               ((LVar1 = RegQueryValueExA(local_35c,"Video Only",(LPDWORD)0x0,&local_34c,
                                          (LPBYTE)&local_354,&local_358), LVar1 != 0 ||
                (local_354 == 0)))) {
              local_358 = 0x104;
              LVar1 = RegQueryValueExA(local_35c,"Template Name",(LPDWORD)0x0,&local_34c,
                                       (LPBYTE)local_208,&local_358);
              if (LVar1 == 0) {
                WideCharToMultiByte(0,0,local_208,-1,local_30c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                FUN_5f80e980(local_334,&local_344);
                FUN_5f80f800(param_1,(LPARAM)local_30c,&local_344.Data1);
              }
            }
          }
          RegCloseKey(local_35c);
        }
        local_350 = local_350 + 1;
      } while (local_350 < local_348);
    }
    RegCloseKey(local_360);
  }
  return 0;
}


