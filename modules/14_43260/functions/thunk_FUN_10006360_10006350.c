/* Module: 14_43260.dll
   Function: thunk_FUN_10006360
   Address: 10006350
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_10006360(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_10016060) {
    puVar1 = &DAT_10016030;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_10016060);
  }
  DAT_10016060 = 0;
  return;
}


