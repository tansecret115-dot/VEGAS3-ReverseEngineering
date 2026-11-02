/* Module: rmme3260.dll
   Function: FUN_6623aa90
   Address: 6623aa90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6623aa90(void)

{
  HMODULE hInstance;
  bool bVar1;
  
  bVar1 = DAT_6627cf34 == 0;
  if (!bVar1) {
    DAT_6627cf34 = DAT_6627cf34 + -1;
    bVar1 = DAT_6627cf34 == 0;
  }
  if (bVar1) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAFullScreenWindowClass_6626fcc8,hInstance);
  }
  return;
}


