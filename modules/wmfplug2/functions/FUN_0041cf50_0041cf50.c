/* Module: wmfplug2.dll
   Function: FUN_0041cf50
   Address: 0041cf50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041cf50(HKEY param_1,int *param_2,uint *param_3,uint *param_4,int *param_5)

{
  LSTATUS LVar1;
  HGLOBAL pvVar2;
  uint uVar3;
  LPBYTE lpData;
  uint local_e4;
  DWORD local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  DWORD local_d0 [2];
  CHAR local_c8 [200];
  
  uVar3 = *param_3;
  lpData = (LPBYTE)0x0;
  local_dc = *param_5;
  local_d8 = 0;
  RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                   (LPDWORD)0x0,&local_d4,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  local_e0 = 0;
  if (local_d4 != 0) {
    do {
      local_d0[1] = 200;
      LVar1 = RegEnumValueA(param_1,local_e0,local_c8,local_d0 + 1,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar1 != 0) {
        return 0x80004005;
      }
      RegQueryValueExA(param_1,local_c8,(LPDWORD)0x0,local_d0,(LPBYTE)0x0,&local_e4);
      if (local_d8 < local_e4) {
        if (lpData != (LPBYTE)0x0) {
          pvVar2 = GlobalHandle(lpData);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(lpData);
          GlobalFree(pvVar2);
        }
        pvVar2 = GlobalAlloc(0x42,local_e4);
        lpData = GlobalLock(pvVar2);
        if (lpData != (LPBYTE)0x0) {
          local_d8 = local_e4;
          goto LAB_0041d035;
        }
      }
      else {
LAB_0041d035:
        if ((lpData != (LPBYTE)0x0) &&
           (LVar1 = RegQueryValueExA(param_1,local_c8,(LPDWORD)0x0,local_d0,lpData,&local_e4),
           LVar1 == 0)) {
          uVar3 = FUN_0041ce30(param_2,uVar3,param_4,local_c8,local_d0[0],(undefined4 *)lpData,
                               local_e4);
          local_dc = local_dc + 1;
        }
      }
      local_e0 = local_e0 + 1;
    } while (local_e0 < local_d4);
    if (lpData != (LPBYTE)0x0) {
      pvVar2 = GlobalHandle(lpData);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(lpData);
      GlobalFree(pvVar2);
    }
  }
  *param_3 = uVar3;
  *param_5 = local_dc;
  return 0;
}


