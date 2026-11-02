/* Module: encn3260.dll
   Function: FUN_664a4ef0
   Address: 664a4ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664a4ef0(void)

{
  HMODULE hInstance;
  bool bVar1;
  
  bVar1 = DAT_664f072c == 0;
  if (!bVar1) {
    DAT_664f072c = DAT_664f072c + -1;
    bVar1 = DAT_664f072c == 0;
  }
  if (bVar1) {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    UnregisterClassA(PTR_s_RMAFullScreenWindowClass_664e31ec,hInstance);
  }
  return;
}


