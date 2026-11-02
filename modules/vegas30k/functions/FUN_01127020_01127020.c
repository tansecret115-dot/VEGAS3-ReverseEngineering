/* Module: vegas30k.dll
   Function: FUN_01127020
   Address: 01127020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127020(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x5c));
  if (sVar1 != param_3) {
    FUN_01155f80(param_1,"Read Error");
  }
  return;
}


