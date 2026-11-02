/* Module: mpgmux.dll
   Function: FUN_100110b1
   Address: 100110b1
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100110b1(void)

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
  FUN_10011073();
  return;
}


