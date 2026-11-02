/* Module: sfppack1.dll
   Function: FUN_5cddf510
   Address: 5cddf510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cddf510(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5ce23b2c != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5ce23b2c);
    DAT_5ce23b2c = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


