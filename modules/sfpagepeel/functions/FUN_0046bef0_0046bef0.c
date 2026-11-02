/* Module: sfpagepeel.dll
   Function: FUN_0046bef0
   Address: 0046bef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046bef0(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_00469e30(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


