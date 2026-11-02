/* Module: encn3260.dll
   Function: FUN_664b02e0
   Address: 664b02e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b02e0(void)

{
  HINSTANCE hInstance;
  bool bVar1;
  
  bVar1 = DAT_664f08b8 == 0;
  if (!bVar1) {
    DAT_664f08b8 = DAT_664f08b8 + -1;
    bVar1 = DAT_664f08b8 == 0;
  }
  if (bVar1) {
    hInstance = (HINSTANCE)FUN_664b0670();
    UnregisterClassA(s_CPNSiteStatusText_664e3738,hInstance);
  }
  return;
}


