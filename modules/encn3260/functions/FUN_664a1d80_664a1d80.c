/* Module: encn3260.dll
   Function: FUN_664a1d80
   Address: 664a1d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664a1d80(void)

{
  HINSTANCE hInstance;
  
  if (0 < DAT_664f0720) {
    DAT_664f0720 = DAT_664f0720 + -1;
  }
  if (DAT_664f0720 == 0) {
    hInstance = (HINSTANCE)FUN_664b0670();
    UnregisterClassA(s_CPNSiteWindowed_664e32b0,hInstance);
  }
  return;
}


