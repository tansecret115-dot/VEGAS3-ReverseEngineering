/* Module: sfxpfx1.dll
   Function: FUN_5c97a62d
   Address: 5c97a62d
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c97a62d(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5c99dfdc);
  if ((LVar1 == 0) && (DAT_5c99dfd8 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5c99dfd8);
    DAT_5c99dfd8 = (HMODULE)0x0;
  }
  return;
}


