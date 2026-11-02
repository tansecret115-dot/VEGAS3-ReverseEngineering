/* Module: rmme3260.dll
   Function: FUN_6625fc80
   Address: 6625fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6625fc80(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_6627f2a0) {
    puVar1 = &DAT_6627f270;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_6627f2a0);
  }
  DAT_6627f2a0 = 0;
  return;
}


