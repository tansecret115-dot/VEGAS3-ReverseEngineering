/* Module: sfs4rw.dll
   Function: FUN_0041a8f0
   Address: 0041a8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a8f0(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_00418830(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


