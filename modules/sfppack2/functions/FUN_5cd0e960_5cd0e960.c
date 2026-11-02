/* Module: sfppack2.dll
   Function: FUN_5cd0e960
   Address: 5cd0e960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0e960(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5cd67d3c != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5cd67d3c);
    DAT_5cd67d3c = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


