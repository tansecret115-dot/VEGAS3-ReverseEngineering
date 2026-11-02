/* Module: sfpagepeel.dll
   Function: FUN_0041f000
   Address: 0041f000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f000(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_0047dcac != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0047dcac);
    DAT_0047dcac = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


