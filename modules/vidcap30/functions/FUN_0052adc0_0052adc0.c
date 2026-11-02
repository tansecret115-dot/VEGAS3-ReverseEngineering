/* Module: vidcap30.exe
   Function: FUN_0052adc0
   Address: 0052adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052adc0(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x5c));
  if (sVar1 != param_3) {
    FUN_00549540(param_1,"Read Error");
  }
  return;
}


