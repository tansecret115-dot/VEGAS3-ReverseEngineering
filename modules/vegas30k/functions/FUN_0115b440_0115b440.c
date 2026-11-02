/* Module: vegas30k.dll
   Function: FUN_0115b440
   Address: 0115b440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115b440(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x5c));
  if (sVar1 != param_3) {
    FUN_01155f80(param_1,"Write Error");
  }
  return;
}


