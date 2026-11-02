/* Module: sfppack1.dll
   Function: FUN_5ce0d5a0
   Address: 5ce0d5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0d5a0(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_5ce0b4f0(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


