/* Module: sfxpfx2.dll
   Function: FUN_5c8cbf5d
   Address: 5c8cbf5d
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8cbf5d(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5c8eec34);
  if ((LVar1 == 0) && (DAT_5c8eec30 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5c8eec30);
    DAT_5c8eec30 = (HMODULE)0x0;
  }
  return;
}


