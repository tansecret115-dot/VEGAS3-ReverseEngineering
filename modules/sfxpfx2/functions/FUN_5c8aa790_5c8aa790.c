/* Module: sfxpfx2.dll
   Function: FUN_5c8aa790
   Address: 5c8aa790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8aa790(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5c8e96fc != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5c8e96fc);
    DAT_5c8e96fc = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


