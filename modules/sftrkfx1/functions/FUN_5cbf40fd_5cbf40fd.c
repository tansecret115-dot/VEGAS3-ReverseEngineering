/* Module: sftrkfx1.dll
   Function: FUN_5cbf40fd
   Address: 5cbf40fd
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbf40fd(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5cc16d3c);
  if ((LVar1 == 0) && (DAT_5cc16d38 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5cc16d38);
    DAT_5cc16d38 = (HMODULE)0x0;
  }
  return;
}


