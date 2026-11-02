/* Module: vfplugs.dll
   Function: FUN_00424020
   Address: 00424020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424020(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_00494d34 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00494d34);
    DAT_00494d34 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


