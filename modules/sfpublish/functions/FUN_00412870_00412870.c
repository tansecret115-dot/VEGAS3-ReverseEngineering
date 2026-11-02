/* Module: sfpublish.dll
   Function: FUN_00412870
   Address: 00412870
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412870(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  uchar *_Str;
  uchar *lpString1;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  local_4 = 0;
  uVar4 = 2;
  do {
    iVar1 = FUN_0041f830(param_1,uVar4,(LPBYTE)0x0,0,(LPCSTR)0x0,1);
    if (iVar1 != 0) {
      pvVar2 = GlobalAlloc(0x42,iVar1 + 1U);
      _Str = GlobalLock(pvVar2);
      if (_Str == (uchar *)0x0) {
        local_4 = 0x8007000e;
      }
      else {
        FUN_0041f830(param_1,uVar4,_Str,iVar1 + 1U,(LPCSTR)0x0,1);
        lpString1 = _mbstok(_Str,"|");
        if ((lpString1 != (uchar *)0x0) && (uVar3 = 0, DAT_004419e4 != 0)) {
          do {
            iVar1 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(*(int *)(DAT_004419e8 + 8) + uVar3 * 4))
            ;
            if (iVar1 == 0) goto LAB_00412915;
            uVar3 = uVar3 + 1;
          } while (uVar3 < DAT_004419e4);
          local_4 = FUN_0041fbe0(param_1,uVar4,1);
        }
LAB_00412915:
        pvVar2 = GlobalHandle(_Str);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(_Str);
        GlobalFree(pvVar2);
      }
    }
    iVar1 = uVar4 - 1;
    uVar4 = uVar4 + 1;
    if (99 < iVar1) {
      return local_4;
    }
  } while( true );
}


