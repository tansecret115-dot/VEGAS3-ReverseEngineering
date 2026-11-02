/* Module: dsetup.dll
   Function: DirectXRegisterApplicationW
   Address: 00402a86
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DirectXRegisterApplicationW(undefined4 param_1,int *param_2)

{
  int iVar1;
  LSTATUS LVar2;
  WCHAR local_6b8 [260];
  OLECHAR local_4b0 [260];
  WCHAR local_2a8 [260];
  _OSVERSIONINFOA local_a0;
  DWORD local_c;
  HKEY local_8;
  
                    /* 0x2a86  4  DirectXRegisterApplicationW */
  local_8 = (HKEY)0x0;
  local_a0.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_a0);
  if ((((local_a0.dwPlatformId == 2) && (3 < local_a0.dwMajorVersion)) && (param_2 != (int *)0x0))
     && ((iVar1 = FUN_00402735(param_2), iVar1 != 0 &&
         (iVar1 = FUN_00402438(DAT_0040aa5c,2000,local_6b8,0x104), iVar1 != 0)))) {
    wsprintfW(local_2a8,local_6b8,param_2[2]);
    LVar2 = RegCreateKeyExW((HKEY)0x80000002,local_2a8,0,(LPWSTR)0x0,0,0xf003f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if ((LVar2 == 0) &&
       ((iVar1 = StringFromGUID2((GUID *)param_2[3],local_4b0,0x104), iVar1 != 0 &&
        (iVar1 = FUN_00402438(DAT_0040aa5c,0x7d1,local_2a8,0x104), iVar1 != 0)))) {
      iVar1 = lstrlenW(local_4b0);
      LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)local_4b0,iVar1 << 1);
      if ((LVar2 == 0) && (iVar1 = FUN_00402438(DAT_0040aa5c,0x7d2,local_2a8,0x104), iVar1 != 0)) {
        iVar1 = lstrlenW((LPCWSTR)param_2[4]);
        LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)param_2[4],iVar1 << 1);
        if ((LVar2 == 0) && (iVar1 = FUN_00402438(DAT_0040aa5c,0x7d3,local_2a8,0x104), iVar1 != 0))
        {
          iVar1 = lstrlenW((LPCWSTR)param_2[5]);
          LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)param_2[5],iVar1 << 1);
          if ((LVar2 == 0) && (iVar1 = FUN_00402438(DAT_0040aa5c,0x7d5,local_2a8,0x104), iVar1 != 0)
             ) {
            iVar1 = lstrlenW((LPCWSTR)param_2[6]);
            LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)param_2[6],iVar1 << 1);
            if ((LVar2 == 0) &&
               (iVar1 = FUN_00402438(DAT_0040aa5c,0x7d4,local_2a8,0x104), iVar1 != 0)) {
              iVar1 = lstrlenW((LPCWSTR)param_2[7]);
              LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)param_2[7],iVar1 << 1);
              if (LVar2 == 0) {
                if ((*param_2 != 4) || (param_2[8] == 0)) {
LAB_00402d21:
                  RegCloseKey(local_8);
                  return 1;
                }
                iVar1 = FUN_00402438(DAT_0040aa5c,0x7d6,local_2a8,0x104);
                if (iVar1 != 0) {
                  iVar1 = lstrlenW((LPCWSTR)param_2[8]);
                  LVar2 = RegSetValueExW(local_8,local_2a8,0,1,(BYTE *)param_2[8],iVar1 << 1);
                  if (LVar2 == 0) goto LAB_00402d21;
                }
              }
            }
          }
        }
      }
    }
    if (local_8 != (HKEY)0x0) {
      RegCloseKey(local_8);
    }
  }
  return 0;
}


