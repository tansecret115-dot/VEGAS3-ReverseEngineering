/* Module: wavplug.dll
   Function: FUN_5f3c5f50
   Address: 5f3c5f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c5f50(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_5f3c41c0(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


