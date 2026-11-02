/* Module: vegas30.exe
   Function: FUN_004f8740
   Address: 004f8740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f8740(void)

{
  HGLOBAL pvVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  SIZE_T SVar6;
  SIZE_T SVar7;
  uint *puVar8;
  SIZE_T dwBytes;
  UINT UVar9;
  uint *local_4;
  
  pvVar1 = GlobalAlloc(2,0x100);
  pCVar2 = GlobalLock(pvVar1);
  DAT_0064dd10 = pCVar2;
  if (pCVar2 == (LPCSTR)0x0) {
    return 0x8007000e;
  }
  iVar5 = 0x100;
  local_4 = &DAT_00642d38;
  pCVar3 = pCVar2;
  SVar6 = 0x100;
  do {
    SVar7 = SVar6;
    if ((*local_4 >> 0x10 == 0) && (*local_4 != 0)) {
      if (iVar5 < 0x100) {
        pvVar1 = GlobalHandle(pCVar2);
        GlobalUnlock(pvVar1);
        SVar7 = SVar6 + 0x100;
        UVar9 = 2;
        dwBytes = SVar7;
        pvVar1 = GlobalHandle(DAT_0064dd10);
        pvVar1 = GlobalReAlloc(pvVar1,dwBytes,UVar9);
        pCVar2 = GlobalLock(pvVar1);
        if (pCVar2 == (LPCSTR)0x0) {
          pvVar1 = GlobalHandle(DAT_0064dd10);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(DAT_0064dd10);
          GlobalFree(pvVar1);
          return 0x8007000e;
        }
        pCVar3 = pCVar2 + (SVar6 - iVar5);
        iVar5 = iVar5 + 0x100;
        DAT_0064dd10 = pCVar2;
      }
      iVar4 = _SfLoadString_16(DAT_00647204,*local_4,pCVar3,iVar5);
      pCVar3 = pCVar3 + iVar4 + 1;
      iVar5 = iVar5 + (-1 - iVar4);
      pCVar2 = DAT_0064dd10;
    }
    local_4 = local_4 + 6;
    SVar6 = SVar7;
  } while (local_4 < &DAT_00643020);
  if ((pCVar2 != (LPCSTR)0x0) && (iVar5 != 0)) {
    pvVar1 = GlobalHandle(pCVar2);
    GlobalUnlock(pvVar1);
    SVar7 = SVar7 - iVar5;
    UVar9 = 2;
    pvVar1 = GlobalHandle(DAT_0064dd10);
    pvVar1 = GlobalReAlloc(pvVar1,SVar7,UVar9);
    pCVar3 = GlobalLock(pvVar1);
    pCVar2 = DAT_0064dd10;
    if (pCVar3 != (LPCSTR)0x0) {
      pCVar2 = pCVar3;
      DAT_0064dd10 = pCVar3;
    }
  }
  puVar8 = &DAT_00642d38;
  do {
    if (*puVar8 >> 0x10 == 0) {
      if (*puVar8 == 0) {
        *puVar8 = (uint)&DAT_0060f98c;
      }
      else {
        *puVar8 = (uint)pCVar2;
        iVar5 = lstrlenA(pCVar2);
        pCVar2 = pCVar2 + iVar5 + 1;
      }
    }
    puVar8 = puVar8 + 6;
  } while (puVar8 < &DAT_00643020);
  return 0;
}


