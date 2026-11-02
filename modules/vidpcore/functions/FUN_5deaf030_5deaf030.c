/* Module: vidpcore.dll
   Function: FUN_5deaf030
   Address: 5deaf030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deaf030(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5df43194 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5df43194);
    DAT_5df43194 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


