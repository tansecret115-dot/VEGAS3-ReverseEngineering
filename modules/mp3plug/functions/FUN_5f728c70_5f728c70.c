/* Module: mp3plug.dll
   Function: FUN_5f728c70
   Address: 5f728c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f728c70(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_5f726ee0(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


