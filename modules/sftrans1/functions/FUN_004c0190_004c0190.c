/* Module: sftrans1.dll
   Function: FUN_004c0190
   Address: 004c0190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c0190(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_0057b858 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0057b858);
    DAT_0057b858 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


