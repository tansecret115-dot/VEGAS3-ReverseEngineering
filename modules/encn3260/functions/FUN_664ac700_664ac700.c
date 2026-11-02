/* Module: encn3260.dll
   Function: FUN_664ac700
   Address: 664ac700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664ac700(void)

{
  HMODULE hInstance;
  bool bVar1;
  
  bVar1 = DAT_664f07ec == 0;
  if (!bVar1) {
    DAT_664f07ec = DAT_664f07ec + -1;
    bVar1 = DAT_664f07ec == 0;
  }
  if (bVar1) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAFullScreenWindowClass_664e33ac,hInstance);
  }
  return;
}


