/* Module: sfppack2.dll
   Function: FUN_5cd4c420
   Address: 5cd4c420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd4c420(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_5cd4a370(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


