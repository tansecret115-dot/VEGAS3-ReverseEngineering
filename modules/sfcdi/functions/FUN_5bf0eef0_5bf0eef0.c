/* Module: sfcdi.dll
   Function: FUN_5bf0eef0
   Address: 5bf0eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0eef0(void)

{
  if (DAT_5bf65fc8 != (HMODULE)0x0) {
    FreeLibrary(DAT_5bf65fc8);
    DAT_5bf65fd0 = 0;
    DAT_5bf65fd4 = 0;
    DAT_5bf65fc8 = (HMODULE)0x0;
  }
  return;
}


