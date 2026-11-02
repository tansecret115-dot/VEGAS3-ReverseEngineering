/* Module: sfxpfx1.dll
   Function: FUN_5c958e60
   Address: 5c958e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c958e60(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5c998aa4 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5c998aa4);
    DAT_5c998aa4 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


