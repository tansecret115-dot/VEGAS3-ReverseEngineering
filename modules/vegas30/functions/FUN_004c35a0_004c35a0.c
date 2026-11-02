/* Module: vegas30.exe
   Function: FUN_004c35a0
   Address: 004c35a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c35a0(undefined4 *param_1)

{
  uint uVar1;
  HGLOBAL pvVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  LPCSTR lpString;
  SIZE_T SVar7;
  SIZE_T SVar8;
  uint *puVar9;
  SIZE_T dwBytes;
  UINT UVar10;
  LPCSTR local_c;
  
  puVar9 = param_1 + 1;
  pvVar2 = GlobalAlloc(2,0x100);
  local_c = GlobalLock(pvVar2);
  if (local_c == (LPCSTR)0x0) {
    return 0x8007000e;
  }
  uVar1 = *puVar9;
  iVar5 = 0x100;
  puVar6 = puVar9;
  SVar8 = 0x100;
  lpString = local_c;
  do {
    if (uVar1 == 0) {
      if ((lpString != (LPCSTR)0x0) && (iVar5 != 0)) {
        pvVar2 = GlobalHandle(lpString);
        GlobalUnlock(pvVar2);
        SVar8 = SVar8 - iVar5;
        UVar10 = 2;
        pvVar2 = GlobalHandle(lpString);
        pvVar2 = GlobalReAlloc(pvVar2,SVar8,UVar10);
        pCVar3 = GlobalLock(pvVar2);
        if (pCVar3 != (LPCSTR)0x0) {
          lpString = pCVar3;
        }
      }
      *param_1 = lpString;
      uVar1 = *puVar9;
      while (uVar1 != 0) {
        if (*puVar9 >> 0x10 == 0) {
          *puVar9 = (uint)lpString;
          iVar5 = lstrlenA(lpString);
          lpString = lpString + iVar5 + 1;
        }
        puVar6 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        uVar1 = *puVar6;
      }
      return 0;
    }
    pCVar3 = lpString;
    SVar7 = SVar8;
    if (*puVar6 >> 0x10 == 0) {
      if (iVar5 < 0x100) {
        pvVar2 = GlobalHandle(lpString);
        GlobalUnlock(pvVar2);
        SVar7 = SVar8 + 0x100;
        UVar10 = 2;
        dwBytes = SVar7;
        pvVar2 = GlobalHandle(lpString);
        pvVar2 = GlobalReAlloc(pvVar2,dwBytes,UVar10);
        pCVar3 = GlobalLock(pvVar2);
        if (pCVar3 == (LPCSTR)0x0) {
          pvVar2 = GlobalHandle(lpString);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(lpString);
          GlobalFree(pvVar2);
          return 0x8007000e;
        }
        local_c = pCVar3 + (SVar8 - iVar5);
        iVar5 = iVar5 + 0x100;
      }
      iVar4 = _SfLoadString_16(DAT_00647204,*puVar6,local_c,iVar5);
      local_c = local_c + iVar4 + 1;
      iVar5 = iVar5 + (-1 - iVar4);
    }
    uVar1 = puVar6[1];
    puVar6 = puVar6 + 1;
    SVar8 = SVar7;
    lpString = pCVar3;
  } while( true );
}


