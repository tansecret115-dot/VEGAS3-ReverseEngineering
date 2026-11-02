/* Module: wmfplug2.dll
   Function: FUN_0041de40
   Address: 0041de40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041de40(LPCSTR param_1,int *param_2,byte param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 *_Memory;
  undefined3 extraout_var_00;
  HGLOBAL pvVar4;
  uchar *_Dest;
  LPSTR pCVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  HKEY local_4f0;
  uint local_4ec;
  undefined4 *local_4e8;
  HKEY local_4e4;
  DWORD local_4e0;
  uint local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  CHAR local_4c8 [200];
  uchar local_400 [1024];
  
  LVar2 = RegOpenKeyExA((HKEY)0x80000002,param_1,0,0x20019,&local_4e4);
  if (LVar2 != 0) {
    return 0x80004005;
  }
  RegQueryInfoKeyA(local_4e4,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_4ec,(LPDWORD)0x0,
                   (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  iVar6 = 0;
  local_4dc = 0;
  uVar3 = local_4ec;
  if (local_4ec == 0) {
    RegCloseKey(local_4e4);
    return 0;
  }
  do {
    iVar7 = 0;
    do {
      wsprintfA(local_4c8,"%d",iVar6);
      LVar2 = RegOpenKeyExA(local_4e4,local_4c8,0,0x20019,&local_4f0);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1;
      if (LVar2 == 0) goto LAB_0041dee6;
    } while (iVar7 < 42000);
    if (LVar2 == 0) {
LAB_0041dee6:
      uVar3 = FUN_0041d0f0(local_4f0,(LPBYTE)&local_4d8);
      if ((-1 < (int)uVar3) &&
         ((((param_3 & 2) == 0 ||
           (bVar1 = FUN_0041e0d0(local_4f0), CONCAT31(extraout_var,bVar1) != 0)) &&
          (_Memory = calloc(1,0x28), _Memory != (undefined4 *)0x0)))) {
        puVar8 = _Memory;
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *_Memory = local_4d8;
        _Memory[1] = local_4d4;
        _Memory[2] = local_4d0;
        _Memory[3] = local_4cc;
        bVar1 = FUN_0041e0d0(local_4f0);
        _Memory[5] = CONCAT31(extraout_var_00,bVar1);
        _Memory[6] = (uint)(CONCAT31(extraout_var_00,bVar1) == 0);
        local_4e8 = (undefined4 *)0x0;
        uVar3 = FUN_0041d760(local_4f0,"UseVideo",(LPBYTE)&local_4e8);
        _Memory[4] = (uint)(local_4e8 != (undefined4 *)0x0);
        if (((local_4e8 != (undefined4 *)0x0) == 0) || ((param_3 & 4) == 0)) {
          iVar7 = FUN_0041dc40(local_4f0,(LPSTR)local_400,0x400);
          if (-1 < iVar7) {
            iVar7 = lstrlenA((LPCSTR)local_400);
            pvVar4 = GlobalAlloc(0x42,iVar7 + 1);
            _Dest = GlobalLock(pvVar4);
            _Memory[7] = _Dest;
            if (_Dest != (uchar *)0x0) {
              _mbscpy(_Dest,local_400);
            }
          }
          local_4e0 = 0;
          iVar7 = FUN_0041dd20(local_4f0,(LPSTR)0x0,&local_4e0);
          if (-1 < iVar7) {
            pvVar4 = GlobalAlloc(0x42,local_4e0 + 1);
            pCVar5 = GlobalLock(pvVar4);
            _Memory[8] = pCVar5;
            if (pCVar5 != (LPSTR)0x0) {
              FUN_0041dd20(local_4f0,pCVar5,&local_4e0);
            }
          }
          local_4e8 = _Memory;
          uVar3 = FUN_0042aa50(param_2,-1,(int *)&local_4e8,1);
        }
        else {
          free(_Memory);
        }
      }
      RegCloseKey(local_4f0);
    }
    local_4dc = local_4dc + 1;
    if (local_4ec <= local_4dc) {
      RegCloseKey(local_4e4);
      return uVar3;
    }
  } while( true );
}


