/* Module: rmme3260.dll
   Function: FUN_66242230
   Address: 66242230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66242230(void)

{
  HMODULE hInstance;
  
  if (0 < DAT_6627cfd4) {
    DAT_6627cfd4 = DAT_6627cfd4 + -1;
  }
  if (DAT_6627cfd4 == 0) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAVideoClass_6626fe84,hInstance);
  }
  return;
}


