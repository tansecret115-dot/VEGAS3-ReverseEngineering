/* Module: sfcdi.dll
   Function: FUN_5bf07210
   Address: 5bf07210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf07210(void)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < DAT_5bf66620) {
    puVar3 = &DAT_5bf664a0;
    do {
      if ((HMODULE)*puVar3 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar3);
      }
      iVar1 = DAT_5bf66620;
      *puVar3 = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 < iVar1);
  }
  if (DAT_5bf66628 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(DAT_5bf66628);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(DAT_5bf66628);
    GlobalFree(pvVar2);
  }
  DAT_5bf66620 = 0;
  DAT_5bf66624 = 0;
  DAT_5bf66628 = (LPCVOID)0x0;
  return;
}


