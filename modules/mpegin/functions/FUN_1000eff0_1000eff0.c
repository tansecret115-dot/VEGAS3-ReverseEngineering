/* Module: mpegin.dll
   Function: FUN_1000eff0
   Address: 1000eff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000eff0(void)

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
  FUN_1000efb2();
  return;
}


