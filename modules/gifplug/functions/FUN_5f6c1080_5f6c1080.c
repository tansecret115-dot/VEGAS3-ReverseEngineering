/* Module: gifplug.dll
   Function: FUN_5f6c1080
   Address: 5f6c1080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c1080(HMODULE param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_5f6c1050();
  }
  else if (param_2 == 1) {
    FUN_5f6c1000(param_1);
    return 1;
  }
  return 1;
}


