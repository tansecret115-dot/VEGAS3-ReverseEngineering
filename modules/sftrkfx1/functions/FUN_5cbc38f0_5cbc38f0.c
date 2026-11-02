/* Module: sftrkfx1.dll
   Function: FUN_5cbc38f0
   Address: 5cbc38f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc38f0(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5cc117b4 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5cc117b4);
    DAT_5cc117b4 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


