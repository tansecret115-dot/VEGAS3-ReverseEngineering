/* Module: rmme3260.dll
   Function: FUN_66237a50
   Address: 66237a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66237a50(void)

{
  HINSTANCE hInstance;
  
  if (0 < DAT_6627cf28) {
    DAT_6627cf28 = DAT_6627cf28 + -1;
  }
  if (DAT_6627cf28 == 0) {
    hInstance = (HINSTANCE)FUN_662379e0();
    UnregisterClassA(s_CPNSiteWindowed_6626fd90,hInstance);
  }
  return;
}


