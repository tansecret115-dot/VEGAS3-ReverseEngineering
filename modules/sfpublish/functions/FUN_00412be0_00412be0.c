/* Module: sfpublish.dll
   Function: FUN_00412be0
   Address: 00412be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412be0(int param_1)

{
  LPCSTR lpString1;
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  HGLOBAL pvVar5;
  uchar *_Str;
  uchar *lpString2;
  uint local_118;
  uint local_114;
  uint local_108;
  uchar local_104 [260];
  
  bVar1 = false;
  DAT_004419e4 = 0;
  piVar2 = (int *)_mbstok(&DAT_004418e0,"|");
  if (piVar2 != (int *)0x0) {
    do {
      uVar3 = FUN_004121c0(piVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      DAT_004419e4 = DAT_004419e4 + 1;
      piVar2 = (int *)_mbstok((uchar *)0x0,"|");
    } while (piVar2 != (int *)0x0);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  local_118 = FUN_00412870(param_1);
  if ((((int)local_118 < 0) || (local_118 = FUN_00412960(param_1), (int)local_118 < 0)) ||
     (local_108 = 0, DAT_004419e4 == 0)) {
    return local_118;
  }
  do {
    local_114 = 0;
    lpString1 = *(LPCSTR *)(*(int *)(DAT_004419e8 + 8) + local_108 * 4);
    if (DAT_004419e4 == 0) {
      if (!bVar1) goto LAB_00412d72;
    }
    else {
      bVar1 = false;
      uVar3 = 2;
      do {
        iVar4 = FUN_0041f830(param_1,uVar3,(LPBYTE)0x0,0,(LPCSTR)0x0,1);
        if (iVar4 == 0) break;
        pvVar5 = GlobalAlloc(0x42,iVar4 + 1U);
        _Str = GlobalLock(pvVar5);
        if (_Str == (uchar *)0x0) {
          local_118 = 0x8007000e;
        }
        else {
          FUN_0041f830(param_1,uVar3,_Str,iVar4 + 1U,(LPCSTR)0x0,1);
          lpString2 = _mbstok(_Str,"|");
          if ((lpString2 != (uchar *)0x0) &&
             (iVar4 = lstrcmpiA(lpString1,(LPCSTR)lpString2), iVar4 == 0)) {
            bVar1 = true;
            if (_Str != (uchar *)0x0) {
              pvVar5 = GlobalHandle(_Str);
              GlobalUnlock(pvVar5);
              pvVar5 = GlobalHandle(_Str);
              GlobalFree(pvVar5);
            }
            goto LAB_00412da0;
          }
          pvVar5 = GlobalHandle(_Str);
          GlobalUnlock(pvVar5);
          pvVar5 = GlobalHandle(_Str);
          GlobalFree(pvVar5);
        }
        local_114 = local_114 + 1;
        uVar3 = uVar3 + 1;
      } while (local_114 < DAT_004419e4);
LAB_00412d72:
      FUN_00418d60(local_104,"%s|");
      local_118 = FUN_0041f940(param_1,local_114 + 2,local_104);
    }
LAB_00412da0:
    local_108 = local_108 + 1;
    if (DAT_004419e4 <= local_108) {
      return local_118;
    }
  } while( true );
}


