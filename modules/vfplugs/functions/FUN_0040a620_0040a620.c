/* Module: vfplugs.dll
   Function: FUN_0040a620
   Address: 0040a620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0040a620(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


