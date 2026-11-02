/* Module: mcplugrw.dll
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00401000(HMODULE param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    FUN_00401120();
  }
  else if (param_2 == 1) {
    bVar1 = FUN_00401030(param_1);
    return bVar1;
  }
  return true;
}


