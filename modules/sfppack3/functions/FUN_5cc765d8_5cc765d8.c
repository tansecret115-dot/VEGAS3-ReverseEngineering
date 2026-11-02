/* Module: sfppack3.dll
   Function: FUN_5cc765d8
   Address: 5cc765d8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc765d8(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_5cc9db3c);
  if ((LVar1 == 0) && (DAT_5cc9db38 != (HMODULE)0x0)) {
    FreeLibrary(DAT_5cc9db38);
    DAT_5cc9db38 = (HMODULE)0x0;
  }
  return;
}


