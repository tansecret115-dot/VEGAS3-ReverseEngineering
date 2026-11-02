/* Module: encn3260.dll
   Function: FUN_664ac5a0
   Address: 664ac5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664ac5a0(void)

{
  HMODULE hInstance;
  
  if (0 < DAT_664f07cc) {
    DAT_664f07cc = DAT_664f07cc + -1;
  }
  if (DAT_664f07cc == 0) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAVideoClass_664e33a4,hInstance);
  }
  return;
}


