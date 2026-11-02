/* Module: rmme3260.dll
   Function: FUN_66242420
   Address: 66242420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66242420(void)

{
  HMODULE hInstance;
  bool bVar1;
  
  bVar1 = DAT_6627cff4 == 0;
  if (!bVar1) {
    DAT_6627cff4 = DAT_6627cff4 + -1;
    bVar1 = DAT_6627cff4 == 0;
  }
  if (bVar1) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAFullScreenWindowClass_6626fe8c,hInstance);
  }
  return;
}


