/* Module: 28_83260.dll
   Function: FUN_10006560
   Address: 10006560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10006560(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_1000cd70) {
    puVar1 = &DAT_1000cd40;
    do {
      if ((HMODULE)*puVar1 != (HMODULE)0x0) {
        FreeLibrary((HMODULE)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_1000cd70);
  }
  DAT_1000cd70 = 0;
  return;
}


