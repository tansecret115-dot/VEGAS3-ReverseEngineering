/* Module: sfppack1.dll
   Function: FUN_5ce003b0
   Address: 5ce003b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce003b0(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5ce29064);
  if ((LVar1 == 0) && (DAT_5ce29060 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5ce29060);
    DAT_5ce29060 = (HMODULE)0x0;
  }
  return;
}


