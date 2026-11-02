/* Module: sfppack3.dll
   Function: FUN_5cc54ea0
   Address: 5cc54ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc54ea0(HINSTANCE param_1,LPCSTR param_2)

{
  if (DAT_5cc98604 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_5cc98604);
    DAT_5cc98604 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


