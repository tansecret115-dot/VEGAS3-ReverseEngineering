/* Module: sfxpfx2.dll
   Function: FUN_5c892940
   Address: 5c892940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5c892940(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


