/* Module: sfppack3.dll
   Function: FUN_5cc82f30
   Address: 5cc82f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc82f30(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_5cc80e80(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


