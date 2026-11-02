/* Module: cook3260.dll
   Function: FUN_633a6a10
   Address: 633a6a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a6a10(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_633b1c50) {
    puVar1 = &DAT_633b1c20;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_633b1c50);
  }
  DAT_633b1c50 = 0;
  return;
}


