/* Module: sfcdi.dll
   Function: FUN_5bf0f600
   Address: 5bf0f600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0f600(void)

{
  if (DAT_5bf65fe0 != (HMODULE)0x0) {
    FreeLibrary(DAT_5bf65fe0);
    DAT_5bf65fe4 = 0;
    DAT_5bf65fe8 = 0;
    DAT_5bf65fe0 = (HMODULE)0x0;
  }
  return;
}


