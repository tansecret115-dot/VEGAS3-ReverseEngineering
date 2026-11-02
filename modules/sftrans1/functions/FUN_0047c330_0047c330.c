/* Module: sftrans1.dll
   Function: FUN_0047c330
   Address: 0047c330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047c330(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x242);
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  return;
}


