/* Module: atrc3260.dll
   Function: thunk_FUN_68002440
   Address: 68002430
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_68002440(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_680054d0) {
    puVar1 = &DAT_680054a0;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_680054d0);
  }
  DAT_680054d0 = 0;
  return;
}


