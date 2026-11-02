/* Module: sfppack2.dll
   Function: FUN_5cd3f230
   Address: 5cd3f230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd3f230(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5cd7547c);
  if ((LVar1 == 0) && (DAT_5cd75478 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5cd75478);
    DAT_5cd75478 = (HMODULE)0x0;
  }
  return;
}


