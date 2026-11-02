/* Module: wmfplug2.dll
   Function: FUN_004010d0
   Address: 004010d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004010d0(HMODULE param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004010a0();
  }
  else if (param_2 == 1) {
    FUN_00401000(param_1);
    return 1;
  }
  return 1;
}


