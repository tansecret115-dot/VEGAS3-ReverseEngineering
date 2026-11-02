/* Module: pncrt.dll
   Function: FUN_78034400
   Address: 78034400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78034400(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_780343b0();
  return;
}


