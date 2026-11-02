/* Module: mcplug.dll
   Function: FUN_00471fa0
   Address: 00471fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471fa0(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_00470210(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


