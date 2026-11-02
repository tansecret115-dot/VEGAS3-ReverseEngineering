/* Module: mp3rw.dll
   Function: FUN_0041a970
   Address: 0041a970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a970(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_004188b0(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


