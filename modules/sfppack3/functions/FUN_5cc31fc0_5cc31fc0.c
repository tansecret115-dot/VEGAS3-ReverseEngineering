/* Module: sfppack3.dll
   Function: FUN_5cc31fc0
   Address: 5cc31fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5cc31fc0(SIZE_T param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(0x40,param_1);
  GlobalLock(hMem);
  return;
}


