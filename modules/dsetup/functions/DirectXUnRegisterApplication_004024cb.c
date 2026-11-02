/* Module: dsetup.dll
   Function: DirectXUnRegisterApplication
   Address: 004024cb
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXUnRegisterApplication(undefined4 param_1,GUID *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  OLECHAR local_660 [260];
  CHAR local_458 [260];
  CHAR local_354 [260];
  BYTE local_250 [260];
  CHAR local_14c [260];
  _FILETIME local_48;
  _FILETIME local_40;
  DWORD local_38;
  DWORD local_34;
  DWORD local_30;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  DWORD local_20 [2];
  uint local_18;
  int local_14;
  uint local_10;
  HKEY local_c;
  HKEY local_8;
  
                    /* 0x24cb  9  DirectXUnRegisterApplication */
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 != (GUID *)0x0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\DirectPlay\\Applications",0,0xf003f
                          ,&local_8);
    if ((((LVar1 == 0) && (iVar2 = StringFromGUID2(param_2,local_660,0x104), iVar2 != 0)) &&
        (iVar2 = WideCharToMultiByte(0,0,local_660,iVar2,local_354,0x104,(LPCSTR)0x0,(LPBOOL)0x0),
        iVar2 != 0)) &&
       (LVar1 = RegQueryInfoKeyA(local_8,local_458,&local_38,(LPDWORD)0x0,&local_18,&local_30,
                                 &local_28,local_20,&local_2c,&local_34,&local_24,&local_40),
       LVar1 == 0)) {
      do {
        if (local_18 <= local_10) break;
        param_2 = (GUID *)0x104;
        LVar1 = RegEnumKeyExA(local_8,local_10,local_14c,(LPDWORD)&param_2,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,&local_48);
        if ((LVar1 != 0) || (LVar1 = RegOpenKeyExA(local_8,local_14c,0,1,&local_c), LVar1 != 0))
        goto LAB_0040264e;
        local_20[1] = 1;
        param_2 = (GUID *)0x104;
        LVar1 = RegQueryValueExA(local_c,"Guid",(LPDWORD)0x0,local_20 + 1,local_250,
                                 (LPDWORD)&param_2);
        if (LVar1 != 0) goto LAB_0040264e;
        RegCloseKey(local_c);
        iVar2 = lstrcmpA(local_354,(LPCSTR)local_250);
        if (iVar2 == 0) {
          local_14 = 1;
        }
        local_10 = local_10 + 1;
      } while (local_14 == 0);
      if ((local_14 != 0) && (LVar1 = RegDeleteKeyA(local_8,local_14c), LVar1 == 0)) {
        RegCloseKey(local_8);
        return 1;
      }
    }
LAB_0040264e:
    if (local_8 != (HKEY)0x0) {
      RegCloseKey(local_8);
    }
    if (local_c != (HKEY)0x0) {
      RegCloseKey(local_c);
    }
  }
  return 0;
}


