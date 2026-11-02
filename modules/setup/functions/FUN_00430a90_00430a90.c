/* Module: Setup.exe
   Function: FUN_00430a90
   Address: 00430a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430a90(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_4;
  
  local_4 = 0;
  LVar1 = FUN_0042e9d0(param_1,"Pins",&local_4);
  if (-1 < LVar1) {
    RegSetValueExA(param_1,"Merit",0,4,(BYTE *)&local_4,4);
  }
  return;
}


