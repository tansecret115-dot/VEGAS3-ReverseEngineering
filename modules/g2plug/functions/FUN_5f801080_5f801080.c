/* Module: g2plug.dll
   Function: FUN_5f801080
   Address: 5f801080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f801080(HMODULE param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_5f801050();
  }
  else if (param_2 == 1) {
    FUN_5f801000(param_1);
    return 1;
  }
  return 1;
}


