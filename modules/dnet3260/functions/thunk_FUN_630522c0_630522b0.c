/* Module: dnet3260.dll
   Function: thunk_FUN_630522c0
   Address: 630522b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_630522c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_63055520) {
    puVar1 = &DAT_630554f0;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_63055520);
  }
  DAT_63055520 = 0;
  return;
}


