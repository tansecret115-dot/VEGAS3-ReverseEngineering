/* Module: sipr3260.dll
   Function: thunk_FUN_632a1d90
   Address: 632a1d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_632a1d90(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_632a53c0) {
    puVar1 = &DAT_632a5390;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_632a53c0);
  }
  DAT_632a53c0 = 0;
  return;
}


