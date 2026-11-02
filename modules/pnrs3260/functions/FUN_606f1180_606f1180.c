/* Module: pnrs3260.dll
   Function: FUN_606f1180
   Address: 606f1180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_606f1180(void *param_1,uint param_2)

{
  LPVOID lpMenuTemplate;
  
  lpMenuTemplate = FUN_606f14b0(param_1,param_2,(LPCSTR)0x4);
  if (lpMenuTemplate == (LPVOID)0x0) {
    return;
  }
  LoadMenuIndirectA(lpMenuTemplate);
  return;
}


