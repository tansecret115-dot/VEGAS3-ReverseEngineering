/* Module: extmondrv.dll
   Function: FUN_00410010
   Address: 00410010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410010(HINSTANCE param_1,LPCSTR param_2)

{
  UnregisterClassA(param_2,param_1);
  return;
}


