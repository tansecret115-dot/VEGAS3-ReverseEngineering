/* Module: vidcap30.exe
   Function: FUN_0057b430
   Address: 0057b430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057b430(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_00663584);
  if ((LVar1 == 0) && (DAT_00663580 != (HMODULE)0x0)) {
    FreeLibrary(DAT_00663580);
    DAT_00663580 = (HMODULE)0x0;
  }
  return;
}


