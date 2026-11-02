/* Module: sfcdi.dll
   Function: FUN_5bf06f10
   Address: 5bf06f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf06f10(HMODULE param_1)

{
  int iVar1;
  FARPROC pFVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  SIZE_T dwBytes;
  uint uVar6;
  undefined4 *puVar7;
  UINT uFlags;
  int iVar8;
  uint uStack_1c;
  int iStack_c;
  
  pFVar2 = GetProcAddress(param_1,s_cdrInterfaceProc_5bf6204c);
  iVar1 = DAT_5bf66624;
  iVar5 = DAT_5bf66620;
  if (pFVar2 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  iVar8 = 0;
  (&DAT_5bf664a4)[DAT_5bf66620 * 3] = pFVar2;
  (&DAT_5bf664a8)[iVar5 * 3] = iVar1;
  (*pFVar2)(0,0,&param_1);
  if (iStack_c != 0) {
    puVar7 = (undefined4 *)&stack0xffffff8c;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    (*pFVar2)(0,1,0,&stack0xffffff8c);
    if (iVar8 != 0x102) {
      return 0xffffffff;
    }
    if (DAT_5bf66628 == (LPCVOID)0x0) {
      pvVar3 = GlobalAlloc(0x42,uStack_1c * 0x6c);
    }
    else {
      pvVar3 = GlobalHandle(DAT_5bf66628);
      GlobalUnlock(pvVar3);
      uFlags = 0x42;
      dwBytes = (DAT_5bf66624 + uStack_1c) * 0x6c;
      pvVar3 = GlobalHandle(DAT_5bf66628);
      pvVar3 = GlobalReAlloc(pvVar3,dwBytes,uFlags);
    }
    pvVar4 = GlobalLock(pvVar3);
    if (pvVar4 == (LPVOID)0x0) {
      return 0xffffffff;
    }
    uVar6 = 0;
    if (uStack_1c != 0) {
      do {
        *(uint *)((int)pvVar4 + (DAT_5bf66624 + uVar6) * 0x6c) = uVar6;
        *(FARPROC *)((int)pvVar4 + (DAT_5bf66624 + uVar6) * 0x6c + 0x68) = pFVar2;
        *(undefined4 *)((int)pvVar4 + (DAT_5bf66624 + uVar6) * 0x6c + 4) = 100;
        (*pFVar2)(uVar6,1,0,(int)pvVar4 + (DAT_5bf66624 + uVar6) * 0x6c + 4);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uStack_1c);
    }
    DAT_5bf66624 = DAT_5bf66624 + uStack_1c;
    DAT_5bf66628 = pvVar4;
  }
  return 0;
}


