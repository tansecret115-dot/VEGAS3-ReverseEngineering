/* Module: sctplug.dll
   Function: FUN_004010c0
   Address: 004010c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004010c0(HMODULE param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00401090();
  }
  else if (param_2 == 1) {
    FUN_00401000(param_1);
    return 1;
  }
  return 1;
}


