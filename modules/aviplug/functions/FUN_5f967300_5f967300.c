/* Module: aviplug.dll
   Function: FUN_5f967300
   Address: 5f967300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f967300(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_5f967430((int)param_1);
    VirtualFree(param_1,0,0x8000);
  }
  return;
}


