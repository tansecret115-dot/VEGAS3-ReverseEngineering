/* Module: rmme3260.dll
   Function: FUN_66245750
   Address: 66245750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66245750(void)

{
  HINSTANCE hInstance;
  bool bVar1;
  
  bVar1 = DAT_6627d0c0 == 0;
  if (!bVar1) {
    DAT_6627d0c0 = DAT_6627d0c0 + -1;
    bVar1 = DAT_6627d0c0 == 0;
  }
  if (bVar1) {
    hInstance = (HINSTANCE)FUN_662379e0();
    UnregisterClassA(s_CPNSiteStatusText_66270224,hInstance);
  }
  return;
}


